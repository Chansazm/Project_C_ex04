#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

void my_putstr(char *s) {
    write(1, s, strlen(s));
}

void my_print_words_array(string_array* param_1) {
     int index = 0;
    while(index < param_1->size){
        my_putstr(param_1->array[index]);
        my_putstr("\n");
//        printf("%s\n",param_1->array[index]);
        index++;
   }
}
/*
int main()
{
char* foo[] = {"blabla", "lalalala"};
string_array my_string_array = {2,foo};
my_print_words_array(&my_string_array);
return 0;
}

*/
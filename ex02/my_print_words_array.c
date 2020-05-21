#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
typedef struct string_array{
   int size;
   char* array[];
} string_array;
*/

void my_print_words_array(string_array* param_1) {
     int index = 0;
    while(index < param_1->size){
        printf("%s\n",param_1->array[index]);
        index++;
   }
}
/*
int main()
{
char* foo[] = {"blabla", "lalalala"};
string_array my_string_array = {2, foo};
my_print_words_array(&my_string_array);
return 0;
}

*/
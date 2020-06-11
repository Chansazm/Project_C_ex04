#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

char* my_join(string_array* array, char* separator){
   // initialize all variables
    char* output;
//    char divider = *separator;
    if (array->size == 0) {
        return NULL;
    }

    int nbr_letter = 0;
    for (int j = 0; j < array->size; ++j){
        for (int k = 0; k < strlen(array->array[j]);++k){
            nbr_letter++;
        }
    }

    output = malloc(nbr_letter+array->size);

    for (int j = 0; j < array->size; ++j){
//        printf("j -> %d && %s\n", j, array->array[j]);
        strcat(output, array->array[j]);
/*
        for (int k = 0; k < strlen(array->array[j]); k++){
//            printf("output %s && %d\n", output, k);
            output[index_output] = array->array[j][k];
            index_output += 1;
        }
*/
        if(j < (array->size)-1) {
            strcat(output, separator);
/*
            for (int k = 0; k < strlen(separator); k++){
    //            printf("output %s && %d\n", output, k);
                output[index_output] = separator[k];
                index_output += 1;
            }
*/
        }
    }
//    output[index_output+1] = '\0';
    return output;
}

/*
 ./my_join hello blah
*/
/*
int main(int ac, char **av) {
    string_array ar;

    ar.array = av;
    ar.size = ac;

    printf("%s\n", my_join(&ar, "-"));
    return 0;
}
*/
// ./my_join-hello-blah-chansa
// chansaoin
// chansa

// ./my_join
// ./my_join
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

integer_array *my_count_on_it(string_array* param_1) {
    integer_array *pointer;

    pointer = (integer_array *)malloc(sizeof(integer_array));
    pointer->size = param_1->size;
    pointer->array = (int*)malloc(pointer->size * sizeof(int));

    for (int index = 0; index < param_1->size; index++) {
        pointer->array[index] = strlen(param_1->array[index]);
    }

    return pointer;
}
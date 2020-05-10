#include <stdlib.h>
#include <string.h>


char *my_strdup(char *param_1)
{
    char *result = malloc(strlen(param_1) + 1);
    char *psource = param_1;
    char *pdestination = result;
    while (*psource != 0)
    {
        *pdestination++ = *psource++;
        //pdestination++;
        //psource++;
    }
    *psource = '\0';
    return result;
}
/*
char *my_strdup(const char *str)
{
    size_t len = strlen(string);
    char *result = malloc(len + 1);
    for (size_t i = 0; i <= len; i++)
        result[i] = string[i];
    return result;
}
*/
/*Algorithm
1. Get the size of the string
2. Allocate memory for the memory required plus one character for the NUll character
3.using a loop, copy the string array to another string array and return the result.

*/

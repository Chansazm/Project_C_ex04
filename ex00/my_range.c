
#include <stdio.h>
#include <stdlib.h>

int* my_range(int param_1, int param_2) 
{
    int *array;
    int index = param_1;
    int size = 0;
        
    while (index < param_2){
            index += 1;
            size += 1;
    }
    //size-->
    array = malloc(sizeof(int) * size);

    index = 0;
    while(param_1 < param_2){
        array[index] = param_1;
        index += 1;
        param_1 += 1;
    }
return array;
}
/*
int main(){
    printf("The range of the minimum and maximum is %d\n",my_range(5, 9));
    return 0;
}
*/

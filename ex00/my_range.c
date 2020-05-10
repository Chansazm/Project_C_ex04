
#include <stdio.h>
#include <stdlib.h>




int* my_range(int param_1, int param_2) 
{
    int *retun_Value;
    
  
    retun_Value = (int*) malloc(sizeof(int) * 5);

    for (*retun_Value  = param_1; *retun_Value <= param_2; ++retun_Value)
        if (param_1 >= param_2)
            return NULL;
        else if (param_2>param_1)
    return retun_Value;
}

/*
int main(){
    printf("The range of the minimum and maximum is %d\n",my_range(5, 9));
    return 0;
}
*/
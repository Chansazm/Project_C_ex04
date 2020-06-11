#include<stdio.h>

char* my_robot_simulator(char* param_1) {
static char res[256] = {0};
int x,y, i;

i = x = y = 0;
int dir = 0; char * dir1[]= {"'north'", "'east'", "'south'", "'west'"};
for (int i = 0; i < strlen(param_1); ++i){
    if ((param_1[i] != 'R') || (param_1[i] != 'A') || (param_1[i] != 'L')){
        break;
        return NULL;
    }
}
while(param_1[i] != '\0'){
    if (param_1[i] == 'R'){
        dir = dir + 90;
    }
    else if (param_1[i] == 'L') {
    dir = dir - 90;
    }
    else{
        if ((dir%360) == 0){y--;}
        else if ((dir%360) == 90){x++;}
        else if ((dir%360) == 180){y++;}
        else {x--;}
    }
    ++i;
}
if (dir%360 == 0){
sprintf(res,"{x: %d, y: %d, bearing: %s}",x, y, dir1[0]);}
else if ((dir%360==90) || (dir%360== -90)){sprintf(res,"{x: %d, y: %d,bearing: %s}",x, y, dir1[1]);}
else if ((dir%360==180) || (dir%360== -180)){sprintf(res,"{x: %d, y: %d, bearing: %s}",x, y, dir1[2]);}
else {sprintf(res,"{x: %d, y: %d, bearing: %s}",x, y, dir1[3]);}

    return res;
}

/*
int main(int ac, char **av){
    my_robot_simulator(av[1]);
    return 0;
}
*/
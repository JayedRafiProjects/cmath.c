#include <stdio.h>

/****************************************
* Project CMath
*
* EQUATION: volume of cuboid/rectangular prism
* BRANCH: Geometry
* VARIABLE DESCRIPTION: a,b,c are width,height and length
****************************************/
double cuboid_volume(double a, double b, double c){
    return a*b*c;
}

int main(void){
    double volume = cuboid_volume(3,3,12);
    printf("result: %f\n",  volume);

    return 0;
}

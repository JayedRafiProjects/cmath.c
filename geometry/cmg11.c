#include <stdio.h>

/****************************************
* Project CMath
*
* EQUATION: surface area of cuboid/rectangular prism
* BRANCH: Geometry
* VARIABLE DESCRIPTION: a,b,c are width,height and length
****************************************/
double cuboid_area(double a, double b, double c){
    return 2*(a*b+b*c+c*a);
}

int main(void){
    double area = cuboid_area(3,3,13);
    printf("result: %f\n", area);

    return 0;
}

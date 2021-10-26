#include<stdio.h>
#include<math.h>

/****************************************
* Project CMath
*
* EQUATION: circumference of a circle
* BRANCH: Geometry
* VARIABLE DESCRIPTION: r: radius
****************************************/
double circumference(double r){
    return 2*M_PI*r;
}

int main(void){
    double radius = 12;
    double result = circumference(radius);
    printf("Circumference of the circle: %f\n",result);
    
    return 0;
}

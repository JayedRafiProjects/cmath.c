#include<stdio.h>
#include<math.h>

/****************************************
* Project CMath
*
* EQUATION: circumference of a circle
* BRANCH: Geometry
* VARIABLE DESCRIPTION: d: diameter
****************************************/
double circumference(double d){
    return M_PI*d;
}

int main(void){
    double diameter = 24;
    double result = circumference(radius);
    printf("Circumference of the circle: %f\n",result);
    
    return 0;
}

#include<stdio.h>
#include<math.h>

/****************************************
* Project CMath
*
* EQUATION: area of a circle
* BRANCH: Geometry
* VARIABLE DESCRIPTION: r: radius
****************************************/
double area_circle(double r){
    return M_PI*pow(r,2);
}

int main(void){
    double radius = 12;
    double result = area_circle(radius);
    printf("Area of the circle: %f\n",result);
    
    return 0;
}

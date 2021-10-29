#include <stdio.h>
#include<math.h>

/****************************************
* Project CMath
*
* EQUATION: surface area of triangular prism
* BRANCH: Geometry
* VARIABLE DESCRIPTION: height & a,b,c are three sides of triangle
****************************************/
double triangular_prism_surface_area(double a, double b, double c, double height){
    double perimeter = a+b+c;
    double s = perimeter/2;
    double ab = sqrt(s*(s-a)*(s-b)*(s-c));
    return 2*ab+perimeter*height;
}

int main(void){
    double area = triangular_prism_surface_area(3,3,3,13);
    printf("result: %f\n",  area);

    return 0;
}

#include <stdio.h>

/****************************************
* Project CMath
*
* EQUATION: lateral surface area
* BRANCH: Geometry
* VARIABLE DESCRIPTION: height & perimeter (sum of three sides)
****************************************/
double triangular_prism_lateral_surface_area(double height, double perimeter){
    return perimeter*height;
}

/****************************************
* Project CMath
*
* EQUATION: perimeter of triangle
* BRANCH: Geometry
* VARIABLE DESCRIPTION: a,b,c are the three sides of triangle
****************************************/
double perimeter(double a, double b, double c){
    return a+b+c;    
}

int main(void){
    double peri = perimeter(3, 3, 3);
    double area = triangular_prism_lateral_surface_area(12, peri);
    printf("result: %f\n",  area);

    return 0;
}

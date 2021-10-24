#include<stdio.h>
#include<math.h>

/****************************************
* Project CMath
*
* EQUATION: area of a regular hexagon
* BRANCH: Geometry
* VARIABLE DESCRIPTION: s: side of hexagon
****************************************/
double area_hexagon(double s){
    return (3*sqrt(3)*pow(s,2))/2;
}

int main(void){
    double side_of_hexagon = 12;
    double result = area_hexagon(side_of_hexagon);
    printf("Area of the hexagon: %f\n",result);
    
    return 0;
}

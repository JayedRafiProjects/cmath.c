#include<stdio.h>
#include<math.h>

/****************************************
* Project CMath
*
* EQUATION: area of a regular hexagon
* BRANCH: Geometry
* VARIABLE DESCRIPTION: p: perimeter, a: apothem
****************************************/
double area_hexagon_2(double p, double a){
    return (p*a)/2;
}

int main(void){
    double perimeter_of_hexagon = 60;
    double apothem_of_hexagon = 5*sqrt(3);
    double result = area_hexagon(perimeter_of_hexagon,apothem_of_hexagon);
    printf("Area of the hexagon: %f\n",result);
    
    return 0;
}

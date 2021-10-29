#include <stdio.h>
#include <math.h>

/****************************************
 * Project CMath
 *
 * Equation:surface area of a sphere(s.a= 4*pi*radius^2)
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: radius
****************************************/
float sphere_surface_area(float radius){
    return 4*M_PI*radius*radius;
}

int main(void){
    printf("Surface area: %f\n",sphere_surface_area(2));
    return 0;
}

#include <stdio.h>
#include <math.h>
/*
 * Project CMath
 * Equation:surface area of a sphere(s.a= 4*pi*radius^2)
 * Branch: geometry
 * */
float sphere_surface_area(float radius){

    return 4*M_PI*radius*radius;
}

int main(void){

    printf("%f",sphere_surface_area(2));
    return 0;
}
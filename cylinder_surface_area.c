#include <stdio.h>
#include <math.h>
/*
 * Project CMath
 * Equation:surface area of a cylinder(l.a= 2*pi*radius^2 +2*pi*radius*height)
 * Branch: geometry
 * */
float cylinder_surface_area(float radius, float height){

    return 2*M_PI*radius*radius+2*M_PI*radius*height;
}

int main(void){

    printf("%f",cylinder_surface_area(2,4));
    return 0;
}
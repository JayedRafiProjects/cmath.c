
#include <stdio.h>
#include <math.h>
/*
 * Project CMath
 * Equation:lateral area of a cylinder(l.a= 2*pi*radius*height)
 * Branch: geometry
 * */
float cylinder_lateral_area(float radius, float height){

    return 2*M_PI*radius*height;
}

int main(void){

    printf("%f",cylinder_lateral_area(3,4));
    return 0;
}
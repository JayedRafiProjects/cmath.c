
#include <stdio.h>
#include <math.h>
/*
 * Project CMath
 * Equation:surface area of a cone(s.a = (2*pi*radius*(radius+height))
 * Branch:geometry
 * */
float cone_surface_area(float radius, float length){

    return 2*M_PI*radius*radius+M_PI*radius*length;
}

int main(void){

    printf("%f",cone_surface_area(2,4));
    return 0;
}

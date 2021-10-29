#include <stdio.h>
#include <math.h>

/****************************************
 * Project CMath
 *
 * EQUATION: surface area of a cone(s.a = (2*pi*radius*(radius+height))
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: radius, length
****************************************/
float cone_surface_area(float radius, float length){
    return 2*M_PI*radius*radius+M_PI*radius*length;
}

int main(void){

    printf("Area: %f\n",cone_surface_area(2,4));
    return 0;
}

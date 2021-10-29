#include <stdio.h>
#include <math.h>

/****************************************
 * Project CMath
 *
 * EQUATION: volume of a sphere(v= (4/3)*radius^3)
 * BRANCH: geometry
 * VARIABLE DESCRIPTION: radius
****************************************/
float sphere_volume(float radius){
    return (4/3)*M_PI*radius*radius*radius;
}

int main(void){
    printf("Volume: %f\n",sphere_volume(2));
    return 0;
}

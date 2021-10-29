#include <stdio.h>
#include <math.h>
/*
 * Project CMath
 * Equation:volume of a sphere(v= (4/3)*radius^3)
 * Branch: geometry
 * */
float sphere_volume(float radius){

    return (4/3)*M_PI*radius*radius*radius;
}

int main(void){

    printf("%f",sphere_volume(2));
    return 0;
}
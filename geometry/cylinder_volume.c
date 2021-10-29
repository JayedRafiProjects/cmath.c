
#include <stdio.h>
#include <math.h>
/*
 * Project CMath
 * Equation:volume area of a cylinder(v= pi*radius^2*height)
 * Branch: geometry
 * */
float cylinder_volume(float radius, float height){

    return M_PI*radius*radius*height;
}

int main(void){

    printf("%f",cylinder_volume(2,4));
    return 0;
}

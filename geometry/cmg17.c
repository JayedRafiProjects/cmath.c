#include <stdio.h>
#include <math.h>

/****************************************
 * Project CMath
 * EQUATION: volume area of a cylinder(v= pi*radius^2*height)
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: radius, length
****************************************/
float cylinder_volume(float radius, float height){
    return M_PI*radius*radius*height;
}

int main(void){
    printf("Volume: %f\n",cylinder_volume(2,4));
    return 0;
}

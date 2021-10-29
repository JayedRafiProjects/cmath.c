#include <stdio.h>
#include <math.h>

/****************************************
 * Project CMath
 *
 * EQUATION:volume of a cone(v = (1/3)*pi*radius^2*height)
 * BRANCH: geometry
  * VARIABLE DESCRIPTION: radius, length
****************************************/
float cone_volume(float radius, float height){
    return (M_PI*radius*radius*height)/3;
}

int main(void){
    printf("Volume: %f\n",cone_volume(2,4));
    return 0;
}


#include <stdio.h>
#include <math.h>
/*
 * Project CMath
 * Equation:volume of a cone(v = (1/3)*pi*radius^2*height)
 * Branch: geometry
 * */
float cone_volume(float radius, float height){

    return (M_PI*radius*radius*height)/3;
}

int main(void){

    printf("%f",cone_volume(2,4));
    return 0;
}


#include <stdio.h>
#include <math.h>
/*
 * Project CMath
 * Equation:lateral area of a cone(l.a = pi*radius*length)
 * Branch:geometry
 * */
float cone_lateral_area(float radius, float length){

    return M_PI*radius*length;
}

int main(void){

    printf("%f",cone_lateral_area(2,4));
    return 0;
}
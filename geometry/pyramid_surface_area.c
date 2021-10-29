#include <stdio.h>
/*
 * Project CMath
 * Equation:surface area of a pyramid(s.a= (1/2)*(length*perimeter)+area_of_base)
 * Branch: geometry
 * */
float pyramid_surface_area(float length, float perimeter,float area_of_base){
    return ((length*perimeter)/2)+area_of_base;
}

int main(void){

    printf("%f",pyramid_surface_area(2,8,3));
    return 0;
}

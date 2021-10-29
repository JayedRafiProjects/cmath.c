#include <stdio.h>
/*
 * Project CMath
 * Equation:lateral area of a pyramid(l.a= (1/2)*length*perimeter)
 * Branch: geometry
 * */
float pyramid_lateral_area(float length, float perimeter){
    return ((length*perimeter)/2);
}

int main(void){

    printf("%f",pyramid_lateral_area(2,8));
    return 0;
}

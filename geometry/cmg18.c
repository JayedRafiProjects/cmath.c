#include <stdio.h>

/****************************************
 * Project CMath
 * EQUATION: lateral area of a pyramid(l.a= (1/2)*length*perimeter)
 * BRANCH: geometry
 *VARIABLE DESCRIPTION: length, perimeter
****************************************/
float pyramid_lateral_area(float length, float perimeter){
    return ((length*perimeter)/2);
}

int main(void){

    printf("Area: %f\n",pyramid_lateral_area(2,8));
    return 0;
}

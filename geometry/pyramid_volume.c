#include <stdio.h>
#include <math.h>
/*
 * Project CMath
 * Equation:volume of a pyramid(v= (1/3)*(breadth*height))
 * Branch: geometry
 * */
float pyramid_volume(float breadth, float height){
    return (breadth*height)/3;
}

int main(void){

    printf("%f",pyramid_volume(2,8));
    return 0;
}

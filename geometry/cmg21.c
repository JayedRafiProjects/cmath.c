#include <stdio.h>

/****************************************
 * Project CMath
 *
 * Equation:volume of a pyramid(v= (1/3)*(breadth*height))
 * BRANCH: geometry
 *VARIABLE DESCRIPTION: breadth, height
****************************************/
float pyramid_volume(float breadth, float height){
    return (breadth*height)/3;
}

int main(void){
    printf("Volume: %f\n",pyramid_volume(2,8));
    return 0;
}

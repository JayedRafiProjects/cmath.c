#include <stdio.h>

/****************************************
* Project CMath
*
* EQUATION: volume of triangular prism
* BRANCH: Geometry
* VARIABLE DESCRIPTION: base_side & height
****************************************/
double triangular_prism_volume(double base_side, double height){
    return base_side*height;
}

int main(void){
    printf("result %f\n:",  triangular_prism_volume(3.0, 12.0));

    return 0;
}

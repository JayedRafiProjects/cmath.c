#include<stdio.h>

void testing(double expected, double result){
    if(expected== result)
        printf("PASSED: The expected is %f and the result is %f\n",expected,result);
    else
        printf("FAILED: The expected is %f and the result is %f\n",expected,result);
}

/****************************************
 * Project CMath
 *
 * EQUATION: area of triangle
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: base and height of triangle
****************************************/
double area_triangle(double base , double height){
    return 0.5*base*height;
}

int main(void){
    testing(3,area_triangle(2,3));
    testing(6,area_triangle(3,4));
    testing(3000000,area_triangle(2000,3000));
    testing(0.04375,area_triangle(0.35,0.25));
    return 0;
}

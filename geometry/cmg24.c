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
 * EQUATION: perimeter of rectangle
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: radius, length
****************************************/
double perimeter_rectangle(double length , double width){
    return 2*(length+width);
}

int main(void){
    testing(10,perimeter_rectangle(2,3));
    testing(14,perimeter_rectangle(3,4));
    testing(10000,perimeter_rectangle(2000,3000));
    testing(1.2,perimeter_rectangle(0.35,0.25));
    return 0;
}

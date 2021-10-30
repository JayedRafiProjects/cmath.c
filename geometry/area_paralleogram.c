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
 * EQUATION: area of parallelogram
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: base and height
****************************************/
double area_parallelogram(double base , double height){
    return base*height;
}

int main(void){
    testing(6,area_parallelogram(2,3));
    testing(12,area_parallelogram(3,4));
    testing(6000000,area_parallelogram(2000,3000));
    testing(0.0875,area_parallelogram(0.35,0.25));
    return 0;
}

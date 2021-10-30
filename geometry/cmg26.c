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
 * EQUATION: area of rectangle
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: length and width of rectangle
****************************************/
double area_rectangle (double length , double width){
    return length*width;
}

int main(void){
    testing(6,area_rectangle(2,3));
    testing(12,area_rectangle(3,4));
    testing(8.84,area_rectangle(3.4,2.6));
    testing(1,area_rectangle(1,1));
    return 0;
}




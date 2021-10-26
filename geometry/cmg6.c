#include<stdio.h>
#include<math.h>

/****************************************
* Project CMath
*
* EQUATION: hypotenuse
* BRANCH: Geometry
* VARIABLE DESCRIPTION: a & b are other two sides of triangle
****************************************/
double hypotenuse(double a, double b){
  return sqrt(pow(a,2.0)+pow(b,2.0));
}

int main(void){
    double a = 3;
    double b = 4;
    double result = hypotenuse(a,b);
    printf("Hypotenous is: %f\n",result);
  
    return 0;
}

#include <stdio.h>
#include<math.h>

/**
* Surface area of a right circular cylinder
* s = 2*PI*r*h + 2*PI*r^2
*/
double srcc(double x, double y){
    return 2*M_PI*x*y + 2*M_PI*pow(x,2);
}

int main(void)
{
    double x = 2.5;
    double y = 2.5;
    double result = srcc(x, y);
    printf("Result is %f",result);
    return 0;
}

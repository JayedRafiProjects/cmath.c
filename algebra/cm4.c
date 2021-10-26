#include<stdio.h>

/*
* This function returns the absolute value of the number it receives
* The absolute value, in mathematics, returns the distance between the number and 0. In other words, it returns the positive version of any negative value if it's negative
*/
double abs_value(double x)
{
    if(x<0)
        x=-1*x;
    return x;
}

int main(void)
{
    // It should return 2
    printf("%.2lf\n",abs_value(-2));

    //It should return 3.14
    printf("%.2lf\n",abs_value(-3.14));

    //It should return 0.50
    printf("%.2lf\n",abs_value(1.0/2));

    return 0;
}

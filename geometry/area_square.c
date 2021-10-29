#include<stdio.h>
void testing(double expected, double result)
{
    if(expected== result)
        printf("PASSED: The expected is %f and the result is %f\n",expected,result);
    else
        printf("FAILED: The expected is %f and the result is %f\n",expected,result);
}
double area_square(double side)
{
    return side*side;
}

int main()
{
    testing(4,area_square(2));
    testing(9,area_square(3));
    testing(4000000,area_square(2000));
    testing(0.09,area_square(0.30));

}




#include<stdio.h>
void testing(double expected, double result)
{
    if(expected== result)
        printf("PASSED: The expected is %f and the result is %f\n",expected,result);
    else
        printf("FAILED: The expected is %f and the result is %f\n",expected,result);
}
double area_trapeziod(double b1 , double b2 , double height)
{
    return 0.5*height*(b1+b2);
}

int main()
{
    testing(15,area_trapeziod(2,3,6));
    testing(35,area_trapeziod(3,4,10));
    testing(4500000,area_trapeziod(1000,2000,3000));
    testing(0.3125,area_trapeziod(1,0.25,0.5));

}




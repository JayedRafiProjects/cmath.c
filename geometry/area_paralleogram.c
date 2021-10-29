#include<stdio.h>
void testing(double expected, double result)
{
    if(expected== result)
        printf("PASSED: The expected is %f and the result is %f\n",expected,result);
    else
        printf("FAILED: The expected is %f and the result is %f\n",expected,result);
}
double area_paralleogram(double base , double height)
{
    return base*height;
}

int main()
{
    testing(6,area_paralleogram(2,3));
    testing(12,area_paralleogram(3,4));
    testing(6000000,area_paralleogram(2000,3000));
    testing(0.0875,area_paralleogram(0.35,0.25));

}




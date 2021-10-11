#include<stdio.h>
#include<math.h>

/**
 * Finding the hypotenuse using Pythagoras theorem
 * c = root(a^2 + b^2)
*/
double hypotenuse(double x, double y)
{
    return sqrt(pow(x,2.0)+pow(y,2.0));
}

int main(void)
{
    double length_one = 3;
    double length_two = 4;
    double result = hypotenuse(length_one,length_two);

    printf("Hypotenous is %f\n",result);
}

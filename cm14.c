#include<stdio.h>

/*
* This function check if the number is rational that contains any decimals or fractions
*/
int check_rational(double x)
{
    if(x!=(int)x)
        return 1;
    return 0;
}

int main(void)
{
    /*
    The upcoming 3 lines should be 0 1 0 since the first and last numbers are not decimal and only the one in the middle is decimal
    */
    printf("%d\n",check_rational(2));
    printf("%d\n",check_rational(2.5));
    printf("%d\n\n",check_rational(-2));
    return 0;
}

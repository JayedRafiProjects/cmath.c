#include<stdio.h>

/*
* This function checks if the number is integer
* The integer is any number that does not contain any fractions or decimals
*/
int check_integer(double x)
{
    if(x!=(int)x)
        return 0;
    return 1;
}

int main(void)
{
    /*
    The upcoming 3 lines should be 1 1 0 since the first and second numbers are integer while the last is not
    */
    printf("%d\n",check_integer(2));
    printf("%d\n",check_integer(-2));
    printf("%d\n\n",check_integer(1.25));
    return 0;
}

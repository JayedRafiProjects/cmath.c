#include<stdio.h>
/*
* This function checks if the number is natural.
* The natural number are any non decimal or fractions positive  only
* Returns 1 for true else 0
*/
int check_natural(double x)
{
    if(x<0)
        return 0;
    if(x!=(int)x)
        return 0;
    return 1;
}
int main(void)
{
    /*
    The upcoming 3 lines should be 1 0 0 since 2 is natural number but 2.2 and -2 are not
    */
    printf("%d\n",check_natural(2));
    printf("%d\n",check_natural(2.2));
    printf("%d\n\n",check_natural(-2));

    return 0;
}

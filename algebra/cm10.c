#include<stdio.h>
#include<math.h>

/*
* x^n+y^n
*/
int pow_n_plus(int x, int y, int n)
{
    return pow(x,n)+pow(y,n);
}

int main(void)
{
    int a = 2;
    int b = 5;
    int p = 3;
    int result = pow_n_plus(a,b,p);
    printf("Result: %d\n",result);
    return 0;
}

#include<stdio.h>
#include<math.h>

/*
* (a+b)^n
*/
int abpsqrn(int x, int y, int n)
{
    return pow((x+y),n);
}

int main(void)
{
    int a = 2;
    int b = 5;
    int p = 3;
    int result = abpsqrn(a,b,p);
    printf("Result: %d\n",result);
    return 0;
}

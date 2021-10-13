#include<stdio.h>

/*
* Traingle inequality
* The sum of any two sides of a triangle is greater than or equal to the third side
* Returns 1 if the traingle is possible otherwise 0
*/
int triangle_inequality(double x, double y, double z)
{
    int result = 0; //false
    if(x>y && x>z)
        {
            if(x<y+z)
            result=1;
        }
    else if(y>x && y>z)
        {
            if(y<x+z)
            result=1;
        }
    else if(z>x && z>y)
        {
            if(z<x+y)
            result=1;
        }
    return result;
}

int main(void)
{
    int a = 3;
    int b = 5;
    int c = 4;
    printf("1 means possible. 0 means not possible.\nResult: %d\n",triangle_inequality(a,b,c));
    return 0;
}
#include<stdio.h>
/*
* This function returns the root value of x with n
* For example radical(4,2) means squareroot(4) =2
* radical(9,3) means cubicroot (9)=2
*/
double radical(x,n)
{
    double answer ;
    answer = pow(x,1.0/n);
    return answer;
}
int main(void)
{
    //This should prints 2 since the squareroot of 4 is 2
    printf("%f\n",radical(4,2));

    //This should prints 3 since the cubic root of 27 is 3
    printf("%f",radical(27,3));
    return 0;
}

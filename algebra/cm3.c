#include<stdio.h>
#include<math.h>

/**
 * Whole number means any non fractional number
 * returns 0 if false and 1 for true
*/
int chech_whole_number(double n)
{
    int result = 0;
    int whatif = (int)n;
    if(n == whatif)
    result = 1;

    return result;
}

int main(void)
{
    double test_case_1 = 1;
    double test_case_2 = 3.3333;

    printf("Result for 1 -> %d\n",chech_whole_number(test_case_1));
    printf("Result for 3.3333 -> %d\n",chech_whole_number(test_case_2));
}

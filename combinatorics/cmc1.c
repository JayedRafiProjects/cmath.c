#include<stdio.h>

/****************************************
* Project CMath
*
* EQUATION: n! factorial
* BRANCH: combinatronics
* VARIABLE DESCRIPTION: result: it always should be a constant value 1
                        number: n
****************************************/
int nfactorial(int result, int number){
    if(number==0)
        return result;
    else{
        result*=number;
        return nfactorial(result,number-1);
    }
}

int main(void){
    int n = 10;
    int result = nfactorial(1,n);
    printf("nFactorial is: %d\n",result);
    
    return 0;
}

#include<stdio.h>
#include<limits.h>

# define size 10

/****************************************
* Project CMath
*
* EQUATION: find even numbers
* BRANCH: Arithmatic
* VARIABLE DESCRIPTION: raw: the input array with numbers,
                        output: the array containing the even numbers in raw array but if not then INT_MIN value,
                        length: the size of both arrays
****************************************/
void find_even(int raw[], int output[], int length){
    for(int i=0; i<size; i++){
        if(raw[i]%2==0)
        output[i]=raw[i];
        else output[i]=INT_MIN;
    }
}

int main(void){
    int raw[size] = {0,1,2,3,4,5,6,7,8,9};
    int output[size];
    find_even(raw,output,size);
    
    for(int i=0; i<size; i++){
        printf(" [ %d ] ",output[i]);
    }
    return 0;
}

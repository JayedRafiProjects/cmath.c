#include <stdio.h>
#include <math.h>
/*
 * Project CMath
 * Equation:quadratic formula(x =(-b+-sqrt(b^2-4ac))/2a)
 * Branch: quadratic
 * VARIABLE DESCRIPTION: a,b,c are coefficients of X(ax^2+bx+c) and result holds x1 and x2
 * where x1 and x2 are the roots of the equation
 * */
void quadratic_formula(float a, float b,float c,float result[2]){
    if(a==0){
        printf("\"a\" should not be 0\n");
        return;
    }
    else if((b*b)-(4*a*c)<0){
        printf("discriminant should not be less than 0\n");
        return;
    }
    else{
        result[0]= (-(b)+sqrt((b*b)-(4*a*c)))/(2*a);

        result[1]= (-(b)-sqrt((b*b)-(4*a*c)))/(2*a);


    }

}

int main(void){
    float result1[2];
    quadratic_formula(-4, 10, 5,  result1);
    for(int i=0;i<2;i++){
        printf("%f\n",result1[i]);
    }
    float result2[2];
    quadratic_formula(0, 0, 5,  result2);
    for(int i=0;i<2;i++){
        printf("%f\n",result2[i]);}
    float result3[2];
    quadratic_formula(4, 0, 5,  result3);
    for(int i=0;i<2;i++){
        printf("%f\n",result3[i]);}
    return 0;
}
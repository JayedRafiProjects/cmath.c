#inclide<stdio.h>

/****************************************
* Project CMath
*
* EQUATION: sum = x+y+z
* BRANCH: Arithmatic
* VARIABLE DESCRIPTION: numbers[] is a array of numaric values
****************************************/
double sum(double numbers[],int size)
{
  double sum = 0;
  for(int i=0; i<size; i++)
  {
    sum+=numbers[i];
  }
  return sum;
}


int main(void)
{
  double numbers[] = {0,1,2,3,4,5,6,7,8,9};
  double result = sum(numbers,10);
  printf("sum: %d\n",result);
  
  return 0;
}

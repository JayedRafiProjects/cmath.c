#include<stdio.h>
#include<math.h>

/**
 * distance formula between two points (x1,y1) & (x2,y2)
 * d=root((x2-y2)^2+(y2-y1)^2)
*/
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2-x1),2.0)+pow((y2-y1),2.0));
}

int main(void)
{
    double x1 = 1;
    double y1 = 1;
    double x2 = 3;
    double y2 = 9;
    double result = distance(x1, y1, x2, y2);

    printf("Distance is %f\n",result);
}

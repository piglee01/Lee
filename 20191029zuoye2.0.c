#include<stdio.h>
int main(void)
{
    double x,y;
    printf("Enter x:");
    scanf("%lf",&x);
    if(x<=50){
        y=0.53*x;
    }
    else{
        y=0.53*x+0.58*(x-50);
    }
    printf("y=f(%f)=%.3f",x,y);
    return 0;
}
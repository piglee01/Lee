#include<stdio.h>


int main(void)
{
    int t;
    float distance;
    printf("Enter time:\n");
    scanf("%d",&t);
    distance =1.0/2*10*t*t;
    printf("Distance is %f\n",distance );

    return 0;
}
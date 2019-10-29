#include<stdio.h>
int main(void)
{
    int x;
    x=256;
    printf("x is %d-%d-%d\n",x/100,x%100/10,x%10);
    return 0;
}
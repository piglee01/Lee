#include<stdio.h>
int main(void)
{
    int n,term=0,sum=0,i;
    printf("Enter n:\n");
    scanf("%d",&n);
    
    while(n > 0)
    {
        term = n % 10;
        sum += term;
        n = n / 10;  
    }

    printf("Sum=%d\n",sum);
    return 0;
}
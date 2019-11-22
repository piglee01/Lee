#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,a,sum=0;
    int i;
    double product=0;
    printf("Enter n,a is \n");
    scanf("%d,%d",&n,&a);
    for(i=1;i<=n;i++){
        product=a*pow(10,(i-1))+product;
        sum=product+sum;
    }
    printf("sum is %d",sum);
    return 0;
}
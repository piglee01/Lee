#include<stdio.h>
int main()
{
    int i,j,k,r,m,n;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2;j++)
        {
            for(k=1;k<i;k++)
            printf(" ");
            printf("W");
            for(r=1;r<=2*(n-i);r++)
            printf(" ");
            printf("W");
            for(m=1;m<i;m++)
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
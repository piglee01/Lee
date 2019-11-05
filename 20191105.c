#include<stdio.h>
int main (void)
{
    int t;
    printf("Enter t:");
    scanf("%d",&t);
    if(t>=0){
        t=t;
    }
    if(t<0){
        t=-t;
    }

    printf("Absolution is %d.",t);
    return 0;
}
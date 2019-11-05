#include<stdio.h>
int main(void)
{
    int max, x,y;
    printf("Enter x,y:");
    scanf("%d %d",&x,&y);
    if(x>=y){
        max = x;
    }else{
        max = y;
    }
    printf("Max is %d.",max);
    return 0;

}

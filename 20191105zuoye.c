#include<stdio.h>
int main(void)
{
    int meter,cost,time;
    printf("Enter meter,time:");
    scanf("%d %d %d",&meter,&time);
    if(meter<3)
{
    cost=10;
}   
else if(3<meter<10)
{
    cost=10+(meter-3)*2;
}
else if(meter>10)
    cost=10+14+(meter-10)*3;
    
    if(time>=5)
{
    cost=cost+time/5*2;
}
    
    printf("%0.0f\n",cost);
    return 0;
}

#include<stdio.h>
int main(void)
{
    int number,score;
    printf("Enter number:");
    scanf("%d",&number);
    if(100>=number>=90){
        printf("A",score);
    }else if(90>number>=80){
        printf("B",score);
    }else if(80>number>=70){
        printf("C",score);
    }else if(70>number>=60){
        printf("D",score);
    }else if(60>number>=0){
        printf("E",score);
    }
    return 0;
}
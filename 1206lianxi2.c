#include<stdio.h>
#include<math.h>

double isPrime(int x);

int main(void)
{
    int i, count = 0;
    for(i = 2;i <=100; i++)
    {
        if(isPrime(i) == 1){
            printf("%5d", i);
            count++;
            if(count % 5 == 0){
                printf("\n");
            }
        }
    }
    return 0;
}
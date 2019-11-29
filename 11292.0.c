#include<stdio.h>
#include<math.h>

int isPrime(int x)
{

}
int main(void)
{
    int i, j, flag, count = 0;

    for(i = 2; i<=100; i++)
    {
        if(isPrime(i) == 1){
            printf("%5d", i );
            count++;
        }
        if(count % 10 == 0){
            printf("\n");
        }
    }
    return 0;
}
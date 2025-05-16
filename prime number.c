#include <stdio.h>
int i,num,isprime=1;
int main()
{
    printf("enter num starting from positive 2");
    scanf("%d",&num);
        for(i=2;i<=num/2;i++){
            if(num%2==0){
                printf("its is not a prime \n");
            }
                else
                {
                    printf("it is a prime \n");
                }
            }
}

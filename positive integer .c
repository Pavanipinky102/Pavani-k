#include<stdio.h>
long long factorial(int n){
    if(n==0 || n==1)
        return 1;
    else
         return n * factorial(n-1);
}
int main(){
    int number;
    printf("enter a positive integer:");
    scanf("%d",&number);
    if(number<0)
    printf("factorial is not defined for negative number.\n");
    else
    printf("factorial of %d is %11d\n,number,factorial(number)");
    return 0;
}

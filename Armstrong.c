#include <stdio.h>
int main() {
    int num,rem,original,result=0;
    printf("enter the number");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        rem=num%10;
        result+=rem*rem*rem;
        num/=10;
    }
    if(result==original){
    printf("%dis an armstrong.\n",original);
    }
    else{
        printf("%dis a armstrong.\n",original);
    }
}

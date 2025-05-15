#include <stdio.h>
int i;
    int pav_fact(int n,int fact){
        if(n==0){
            printf("1");
        }
        else if (n<0){
            printf("enter the positive number");
        }
        else{
            for(i=1;i<=n;i++){
                fact*=i;
            }
        }
    return fact;
 }
 int main(){
     int c;
     c=pav_fact(5,1);
     printf("%d",c);
 }
 

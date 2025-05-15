#include <stdio.h>
int add(int a, int b);
int main(){
    int result=add(5,7);
    printf("sum: %d\n", result);
    return 0;
}
int add(int a, int b){
    return a+b;
}

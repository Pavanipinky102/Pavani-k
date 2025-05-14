#include <stdio.h>
int main(){
int row,col,i,j;
printf("enter the number rows and col");
scanf("%d%d",&row,&col);
int a[row][col],b[row][col],c[row][col];
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("enter the element of A matrix\n");
            scanf("%d",&a[row][col]);
    }
}
for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("enter the element of b matrix\n");
            scanf("%d",&b[row][col]);
        }
}        
for(i=0;i<row;i++){
        for(j=0;j<col;j++){
                c[i][j]=a[i][j]+b[i][j];
        }
}
for(i=0;i<row;i++){
         for(j=0;j<col;j++){
                printf("the output is\n");
                printf("%d",c[row][col]);
         }
}
}

include <stdio.h>
struct employe{
    char name[20];
    int id;
    float salary;
};
int main()
{
    int i;
    struct employe e[3];
    printf("enter details of employe:\n\n");
    for(i=0;i<3;i++)
    {
        printf("enter employe %d name:",i+1);
        scanf("%s",&e[i].name);
        printf("enter employe %d ID:",i+1);
        scanf("%d",&e[i].id);
        printf("enter employe %d salary:",i+1);
        scanf("%f",&e[i].salary);
        printf("n");
    }
    int sum=0,avg;
    for(i=0;i<3;i++)
    {
        sum=sum+e[i].salary;
    }
    avg=sum/3;
    printf("\naverage salary of employe is:%d",avg);
}
    


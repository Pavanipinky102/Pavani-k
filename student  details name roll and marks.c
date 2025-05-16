#include<stdio.h>
struct student{
    char name[20];
    int marks;
    int USN;
};
int main()
{
    int i;
    struct student s[20];
    printf("enter student details here\n");
    for(i=0;i<5;i++)
    {
        printf("enter student %d name:",i+1);
        scanf("%d",&s[i].name);
        printf("enter student %d USN:",i+1);
        scanf("%d",&s[i].USN);
        printf("enter student %d marks:",i+1);
        scanf("%d",&s[i].marks);
    }
    printf("==================== STUDENT DETAILS ====================\n");
    printf("%-25s %-20s %-20s\n", "NAME","USN","MARKS");
    printf("--------------------------------------------------------------------------------\n");
    
    for(i=0;i<5;i++)
    {
        printf("%-25s %-20s %-20d\n",s[i].name,s[i].USN,s[i].marks);
    }
return 0;
}

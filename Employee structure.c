#include<stdio.h>
struct employee{
    char str[100];
    int id;
    int age;
    char des[100];
    int sal;
};
int main()
{
    struct employee e_var;
    printf("Enter name:\n");
    scanf("%s",e_var.str);
    printf("Enter ID:\n");
    scanf("%d",&e_var.id);
    printf("Enter age:\n");
    scanf("%d",&e_var.age);
    printf("Enter designation:\n");
    scanf("%s",e_var.des);
    printf("Enter Salary:\n");
    scanf("%d",&e_var.sal);
    printf("Employee Details\n");
    printf("Name of the Employee:%s\n",e_var.str);
    printf("ID of the Employee:%d\n",e_var.id);
    printf("Age of the Employee:%d\n",e_var.age);
    printf("Designation of the Employee:%s\n",e_var.des);
    printf("Salary of the Employee:%d\n",e_var.sal);
     
    
    
 return 0;
}

#include<stdio.h>
union emp
{
    char name[10];
    int salary;
}u_var;
int main(){
    printf("Enter the Employee details\n");
    printf("Enter the Employee name\n");
    scanf("%[^\n]",u_var.name);
    printf("Enter the Employee salary\n");
    scanf("%d",&u_var.salary);
    printf("Employee Details\n");
    printf("%s %d",u_var.name,u_var.salary);
    return 0;
}

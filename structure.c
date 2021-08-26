#include<stdio.h>
#include<stdlib.h>
typedef struct employee
{
     char empname[100];
     int age;
     long phnum;
     int salary;
};
void display(struct employee e)
{
     printf("%s%d%ld%d", e.empname, e.age, e.phnum, e.salary);
}
int main()
{
     int i,n;
     struct employee *e;
     printf("enter the number of employees :  ");
     scanf("%d",&n);
     e=(struct employee*)malloc(n*sizeof(struct employee));
     fflush(stdin);
     printf("enter employee name , age , phone number , salary :");
     for(i=0;i<n;i++)
     {
          scanf("%[^\n]%*c",&(e+i)->empname);
          scanf("%d%ld%d",&(e+i)->age,&(e+i)->phnum,&(e+i)->salary);
          fflush(stdin);
     }
     for(i=0;i<n;i++)
     {
     display(e[i]);
     }
     return 0;
 }

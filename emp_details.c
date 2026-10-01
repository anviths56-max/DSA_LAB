#include<stdio.h>
int main()
{
int id;
char name[20];
float salary,tax;
scanf("%d",&id);
scanf("%s",name);
scanf("%f",&salary);
tax=salary*10/100;
printf("%d\n",id);
printf("%s\n",name);
printf("%f\n",salary);
printf("%.2f\n",tax);
return 0;
}
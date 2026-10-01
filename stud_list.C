#include<stdio.h>
int main()
{
int n,i;
char name[50][20];
printf("Enter number of students: ");
scanf("%d",&n);
printf("Enter names:\n");
for(i=0;i<n;i++)
scanf("%s",name[i]);
printf("First %d students are:\n",n);
for(i=0;i<n;i++)
printf("%s \n",name[i]);
return 0;
}
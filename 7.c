//Develop a progrma to print the details of an employee using structures
#include<stdio.h>
struct employee
{
	char name[25];
	int num;
	float sal;
	char gender[10];
	char position[20];
}e;
int main()
{
	printf("Enter employee name\n");
	gets(e.name);
	printf("Enter employee number\n");
	scanf("%d",&e.num);
	printf("Enter employee salary\n");
	scanf("%f",&e.sal);
	printf("Enter employee gender\n");fflush(stdin);
	gets(e.gender);
	printf("Enter employee position\n");
	gets(e.position);
	printf("\nEmployee Details\nName: %s\nNumber: %d\nSalary: %f\nGender: %s\nPosition: %s\n",e.name,e.num,e.sal,e.gender,e.position);
	return 0;
}

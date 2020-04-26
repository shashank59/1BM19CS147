//creating struct student and printing student details with highest marks
#include<stdio.h>
struct student
{
	int roll;
	char name[25];
	char sec;
	char dep[3];
	int fees,marks;
}s[2];
int main()
{
	int i;
	for(i=1;i<=2;i++)
	{
		printf("Enter roll of student %d\n",i);fflush(stdin);
		scanf("%d",&s[i].roll);
		printf("Enter name of student %d\n",i);fflush(stdin);
		gets(s[i].name);		
		printf("Enter section of student %d\n",i);fflush(stdin);
		scanf("%c",&s[i].sec);
		printf("Enter Department of student %d\n",i);fflush(stdin);
		gets(s[i].dep);
		printf("Enter fees of student %d\n",i);fflush(stdin);
		scanf("%d",&s[i].fees);
		printf("Enter marks of student %d\n",i);fflush(stdin);
		scanf("%d",&s[i].marks);
	}
	if(s[1].marks>=s[2].marks)
		i=1;
	else
		i=2;
	printf("\nStudent %d has highest marks\nRoll: %d\nName: %s\nSection: %c\nDepartment: %s\nFees: %d\nMarks: %d\n",i,s[i].roll,s[i].name,s[i].sec,s[i].dep,s[i].fees,s[i].marks);
	return 0;
}

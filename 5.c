#include<stdio.h>
int main()
{
	int a[5][3],high[3]={0,0,0},i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter marks of student %d in subject %d\n",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
		for(j=0;j<5;j++)
		{
			if(a[j][i]>high[i])
			high[i]=a[j][i];		
		}
	for(i=0;i<3;i++)
	printf("Highest marks in subject %d:%d",i+1,high[i]);
}

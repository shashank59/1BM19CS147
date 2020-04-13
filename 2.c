//Develop a program to print transpose matrix
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],m,n,i,j;
	printf("Enter the number of rows and columns\n");
	scanf("%d%d",&m,&n);
	printf("Enter the matrix\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		b[i][j]=a[j][i];
	printf("original matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
	printf("Transpose matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d  ",b[i][j]);
		printf("\n");
	}
	return 0;
}

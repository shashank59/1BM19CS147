#include<stdio.h>
int main()
{
	char a[50],b[100],i,j,k,l;
	printf("Enter the 2 strings\n");
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{}
	for(j=0;b[j]!='\0';j++)
	{}
	for(k=0;k<j;k++,i++)
	{
		a[i]=b[k];
	}
	a[i]='\0';
	printf("%s",a);
	return 0;
	
}

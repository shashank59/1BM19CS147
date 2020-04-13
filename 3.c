#include<stdio.h>
int main()
{
	char a[50],i,j,k,check=0;
	printf("Enter string\n");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{}
	k=i-1;
	for(j=0;j<i;j++)
	{
		if(a[j]!=a[k])
		check=-1;
		k--;
	}
	if(check==-1)
	printf("Not a Pallindrome\n");
	else
	printf("Pallindrome\n");
	return 0;
	
}

//Interchanging largest and smallest numbers in array
#include<stdio.h>
int main()
{
	int a[50],n,i,temp,large=-32767,small=32768,j,k;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
			j=i;
		}	
		if(a[i]<small)
		{
			small=a[i];
			k=i;
		}
	}
	temp=a[j];
	a[j]=a[k];
	a[k]=temp;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}



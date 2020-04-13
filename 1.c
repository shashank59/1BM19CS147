//average of n numbers
#include<stdio.h>
int main()
{
   int num[50],n,i;
   float sum=0,avg;
   printf("Enter n value\n");
   scanf("%d",&n);
   printf("Enter the numbers\n");
   for(i=0;i<n;i++)
   {
   	scanf("%d",&num[i]);
   	sum+=num[i];
   }
   avg=sum/n;
   printf("Average of %d numbers is: %f",n,avg);
   return 0;
}

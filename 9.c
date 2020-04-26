//Develop a C program to perform arithmetic operations on a two integers using pointers
#include<stdio.h>
void add(float* a,float* b,float* r)
{
	*r=*a+*b;
}
void subtract(float* a,float* b,float* r)
{
	*r=*a-*b;
}
void multiply(float* a,float* b,float* r)
{
	*r=*a**b;
}
void divide(float* a,float* b,float* r)
{
	*r=*a/(*b);
}
void main()
{
	float x,y;
	char ch;
	float res;
	printf("enter the 2 numbers\n");
	scanf("%f%f",&x,&y);
	printf("enter the operator(+-*/)\n");fflush(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
			add(&x,&y,&res);
			break;
		case '-':
			subtract(&x,&y,&res);
			break;
		case '*':
			multiply(&x,&y,&res);
			break;
		case '/':
			divide(&x,&y,&res);
	}
	printf("Result =%f\n",res);
}

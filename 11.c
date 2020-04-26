//reading  and writing from FILE:INPUT
#include<stdio.h>
void main()
{
	FILE *fout,*fin;
	char name[20];
	fout=fopen("INPUT.txt","w");
	if(fout==NULL)
	{
		printf("file has not been opened successfully\n");
	}
	else
	{
		printf("Enter the name\n");
		gets(name);
		fprintf(fout,"Name: %s\n",name);
		fclose(fout);
		fin=fopen("INPUT.txt","r");
		while(fscanf(fin,"%s",name)!=EOF)
		{
			printf("%s ",name);
		}
		fclose(fin);
	}
	
	
}

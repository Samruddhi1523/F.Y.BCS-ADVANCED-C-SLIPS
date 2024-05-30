/*
Slip 18
2]Write a program to copy contents of one file to another.
*/
#include<stdio.h>
int main()
{
	FILE *f1,*f2;
	f1=fopen("yellow.txt","r");
	f2=fopen("pink.txt","w");
	char ch;
	if(f1==NULL)
	{
		printf("\nFILE NOT FOUND.");
		return 0;
	}
	while(!feof(f1))
	{
		ch=fgetc(f1);
		fputc(ch,f2);
	}
	printf("\nALL DONE");
	fclose(f1);
}

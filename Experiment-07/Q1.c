/*Write a program to calculate the length of a string using pointers.*/
#include<stdio.h>
int main()
{
	char str[100];
	char *ptr;
	int count=0;
int i;
	printf("enter string");
	gets(str);
	ptr=str;
for(i=0;*ptr!='\0';i++)
{
	    count++;
		ptr++;	
}	
printf("length of string=%d\n",count);
}

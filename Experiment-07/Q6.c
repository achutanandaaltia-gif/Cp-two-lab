/*Write a program to find the frequency of a given character in a string using
pointers.*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100] ,ch;
	char *ptr;
	int count=0;
	printf("enter string\n");
	gets(str);
	printf("enter character\n");
	scanf(" %c",&ch);
	ptr=str;
	for(ptr=str;*ptr!='\0';ptr++)
{ 
	if(*ptr==ch)
	{
		
		count++;
	}
}
printf(" frequency=%d\n",count);
return 0;
}
	
	
	
	

/*Write a program to copy one string to another using pointer.*/
#include<stdio.h>
int main()
{
	char str1[100], str2[100];
	char *ptr1,*ptr2;
	printf("enter string\n");
	gets(str1);
	ptr1=str1;
	ptr2=str2;
	strcpy(ptr2,ptr1);
	printf("copied string: %s\n",str2);
}

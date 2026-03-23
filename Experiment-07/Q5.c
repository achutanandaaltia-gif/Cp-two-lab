/*Implement a function to convert all lowercase characters in a string to uppercase
using pointers.*/
/*Develop a program to convert a string to uppercase using strupr. */
#include<string.h>
int main()
{	char str[200];
char *ptr;
	int i=0;
	printf("enter a string");
	gets(str);
	ptr=str;
	strupr(ptr);
	printf("after uppercase %s\n",ptr);
}

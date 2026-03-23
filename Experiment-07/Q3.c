/*Implement a function to compare two strings using pointers.*/
#include<stdio.h>
main()
{
	char str1[100], str2[100];
	char *ptr1,*ptr2;
	printf("enter 1st string\n");
	gets(str1);
	printf("enter 2nd string\n");
	gets(str2);
	ptr1=str1;
	ptr2=str2;
  {	
     if(strcmp(ptr2,ptr1)==0)
  
      printf("strings are equal");
  
     else
    {
    	printf("strings are not equal");
    }
  }

}



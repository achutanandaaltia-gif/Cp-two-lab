/*Implement a function to count the number of vowels in a string using pointers*/
#include<stdio.h>
#include<string.h>
int main()
{
    char vol[100];
    char *ptr;
    int i,count=0;
    printf("enter string\n");
    gets(vol);
    ptr=vol;
    for(i=0;ptr[i]!=0;i++)
    if(vol[i]=='a'||vol[i]=='e'||vol[i]=='i'||vol[i]=='o'||vol[i]=='u'||
        vol[i]=='A'||vol[i]=='E'||vol[i]=='I'||vol[i]=='O'||vol[i]=='u')
    {
        count++;
        ptr++;
    }

    {
        printf("the volume number is %d\n",count);
    }
}

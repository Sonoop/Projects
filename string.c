#include<stdio.h>
void main()
{
    char a[10][10],i;
    
    printf("Enter names");
    for(i=0;a[i]!='\0';i++)
    {
        gets(a);
    }
    
   for(i=0;a[i]!='\0';i++)
    {
        puts(a);
    }
    
}
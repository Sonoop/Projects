#include<stdio.h>
void sort(int a[],int n)
{
for(int i = 0 ; i<n ; i++)
{
    for(int j=0; j<n-1 ; j++)
    {
        if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;

        }
    }
}
}
void display(int a[],int n)
{
printf("the sorted order is ");

    for(int i=0;i<n;i++)
    {
    printf("%d\n",a[i]);
}
}


void main()
{
    int a[20], n,i,temp;
    printf("how far do you want to go");
    scanf("%d",&n);
    printf("enter the array numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("the numbers are \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);

    }
    sort(a,n);
    display(a,n);
}

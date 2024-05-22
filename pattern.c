#include<stdio.h>
void main()


{
  int a[10]={1,2,3,4,5,6,7,8,9,76},i,n,*p;
  p=a;
  for(i=0;i<10;i++)
  {
    printf("%d",*p+i);
  }
  printf("enter a number");
  scanf("%d",&n);
  int count=0;
  for(i=0;i<10;i++)
  {
    if(n==*p+i)
    count++;
    
  }
  if(count==0)
  printf("not in the array");
  else
  printf("in the array yaas yaas");
}
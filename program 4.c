#include<stdio.h>
void main()
{
  int n,i,sum=0;
  printf("enter the value of n\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    if(i/3==0)
    {
      sum=sum+1;
    }
  }
  printf("sum=%d\n",sum);
}

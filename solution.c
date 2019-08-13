#include<stdio.h>
void main()
{
  int a[10],b[10],i,n,found=0;
  printf("enter the number of elements of array\n");
  scanf("%d",&n);
  printf("enter the array a\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the array b\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]!=b[i])
    {
      found=1;
    }
  }
  if(found==0)
  {
    printf("arrays are equal\n");
  }
  else
  {
    printf("arrays are different\n");
  }
}

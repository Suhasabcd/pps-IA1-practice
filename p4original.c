#include <stdio.h>
int input_array_size() 
{ 
  int x;
  printf("how many number do you want to add ?\n ");
  scanf("%d",&x);
  return x;
}
void input_array(int n,int *a)
{
  int b,c,sum;
  sum=0;
  for(int b=0; b<n; b++)
  {
    printf("enter the number:");
    scanf("%d",&a[b]);
    sum=sum+a[b];
  }
  for(int c=0;c<n-1;c++)
  {
    printf("%d+",a[c]);
  }
    printf("%d=%d",a[n-1],sum);
}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  return 0;
}
#include<stdio.h>
int input()
{
  int a;
  printf("enter the numbers\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if(a>b && a>c)
  return a;
  else if(b>c)
  return b;
  else
  return c;
}
void output(int a,int b,int c,int largest)
{
  printf("The greatest number among %d,%d and %d is %d",a,b,c,largest);
}
int main()
{
  int a,b,c,lar;
  a=input();
  b=input();
  c=input();
  lar = cmp(a,b,c);
  output(a,b,c,lar);
  return 0;
}
#include<stdio.h>
int input()
{
  int x;
  printf("enter the nummber :-");
  scanf("%d",&x);
  return x;
}
int add(int a,int b)
{
  int x;
  x = a+b;
  return x;
}
void output(int a , int b , int c )
{
  printf("%d+%d=%d",a,b,c);
}
int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=add(a,b);
  output(a,b,c);
  return 0;
}
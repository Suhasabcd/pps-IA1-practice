#include<stdio.h>
int input()
{
  int x;
  printf("enter the number :-");
  scanf("%d",&x);
  return x;
}

int compare(int a,int b,int c)
{
  if (a>b)
  {
    if (a>c)
    {
      return a;
    }
    else
    {
      return c;
    }

  }
  else
  {
    if (b>c)
    {
      return b;
    }
    else 
    {
      return c;
    }
  }
}
void output(int d)
{
  printf("Greatest of the three numbers is %d",d);
}

int main()
{
  int a,b,c,d;
  printf("this program is to find the greatest of three numbers\n");
  a=input();
  b=input();
  c=input();
  d=compare(a,b,c);
  output(d);
  return 0;
}


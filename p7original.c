#include<stdio.h>
struct complexnumber
{
  int real,img;
};
struct complexnumber sumcomplex(struct complexnumber a,struct complexnumber b)
{
  struct complexnumber c;
  c.real = a.real+b.real;
  c.img = a.img+b.img;
  return c;
}
struct complexnumber complex_input()
{
  struct complexnumber x;
  scanf("%d %d",&x.real,&x.img);
  return x;
}

void output(struct complexnumber a, struct complexnumber b, struct complexnumber c)
{
  printf("Complex number a=%d+%di\n", a.real, a.img);
  printf("Complex number b=%d+%di\n", b.real, b.img);
  printf("sum of the Complex number: %d+%di\n", c.real, c.img);
}
int main()
{
  printf("this program is to add 2 complex numbers\n");
  struct complexnumber a,b,c;
  a = complex_input();
  b = complex_input();
  c = sumcomplex(a,b);
  output(a,b,c);
  return 0;
}
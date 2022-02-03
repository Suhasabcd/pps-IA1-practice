#include<stdio.h>
struct complexnum
{
  int real,img;
};
struct complexnum sumcomplex(struct complexnum a[],int x)
{
  struct complexnum x1;
  x1.img=0;
  x1.real=0;
  for(int z =0;z<x;z++)
  {
    x1.real=x1.real+a[z].real;
    x1.img=x1.img+a[z].img;
  }
  return x1;
}
void complex_input(struct complexnum *a,int n)
{
  for(int i=0;i<n;i++)
  {
    scanf("%d %d",&a[i].real,&a[i].img);
  }
}
int input_array_size() /*taking input for array size */
{ 
  int x;
  printf("how many complexnumber do you want to add ?\n ");
  scanf("%d",&x);
  return x;
}
void output(int x , struct complexnum a[x],struct complexnum c)
{
  printf("The entered complex numbers are\n");
  for(int g=0;g<x;g++)
  {
    printf("%d+%di\n",a[g].real,a[g].img);
  }
  printf("The sum of the give complexnumbers is: %d+%di\n",c.real,c.img);
}
int main()
{
  printf("This program is to add n different complec numbers\n");
  int x;
  x= input_array_size();
  struct complexnum a[x];
  struct complexnum c;
  complex_input(a,x);
  c = sumcomplex(a,x);
  output(x,a,c);
  return 0;
}
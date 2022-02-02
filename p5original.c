#include<stdio.h>
float input()
{
  float x;
  printf("enter the number :- ");
  scanf("%f",&x);
  return x;
}
float squareroot(float num)
{
  float root;
  float guess=num/2;
  int i=1;
  while(i!=0)
  {
    guess = (guess+(num/guess))/2;
    if(guess==(guess+(num/guess))/2)
    {
      i=0;
    }   
  }
  root= guess;
  return root;
}
void output(float num ,float root)
{
  printf("the square root of %f=%f",num,root);
}
int main()
{
  float num,root;
  num = input();
  root= squareroot(num);
  output(num,root);
  return 0;

}
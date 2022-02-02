#include<stdio.h>
void input(char *a,char *b)
{
  scanf("%s",a);
  scanf("%s",b);
}
void compare(char *a,char *b)
{
  for(int i=0;i<20;i++)
  {
    if (a[i] == b[i])
    {
      i=i;
    }
    else
    {
      if(a[i]>b[i])
      {
        printf("%s is greater than %s",a,b);
        break;

      }
      else
      {
        printf("%s is greater than %s",b,a);
        break;
      }

    }
  } 
}

int main()
{
  char a[20],b[20];
  input(a,b);
  compare(a,b);
}
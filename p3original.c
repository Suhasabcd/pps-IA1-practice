#include<stdio.h>
int input()
{
    int x;
    printf("enter the nth digit:\n");
    scanf("%d",&x);
    return x;
}
int sum(int z)
{
    int c=0;
    for(int b=1; b<z+1; b++)
    {
        c=c+b;
    }
    return c;
}
int output(int x)
{
    for(int i=1; i<x; i++)
    {
        printf("%d+",i);
    }
    printf("%d=",x);

    printf("%d\n",sum(x));
    return 0;
}
int main()
{
    int a;
    a=input();
    output(a);
    return 0;
}
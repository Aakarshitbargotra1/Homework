#include<stdio.h>
int add(int,int);
int main()
{
    int x,y,z;
    scanf("%d %d",&x,&y);
    z=add(x+y);
    printf("%d",z);
}
int add(int a,int b)
{
    return a+b;
}

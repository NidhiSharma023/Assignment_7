//1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a=0,b=1,c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d term of Fibonnaci series is %d",n,c);
    getch();
    return 0;
}



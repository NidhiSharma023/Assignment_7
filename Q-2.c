//2. Write a program to print first N terms of Fibonacci series.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a=0,b=1,c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("1 ");
    for(i=1;i<=n-1;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    getch();
    return 0;
}

//3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a=0,b=1,c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1; 1 ;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n)
        {
            printf("This number is in Fibonacci series.");
            break;
        }
        if(c>n)
        {
            printf("This number is not in Fibonacci series.");
            break;
        }
    }
    getch();
    return 0;
}


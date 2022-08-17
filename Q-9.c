//9. Write a program to check whether a given number is an Armstrong number or not.
#include<stdio.h>
#include<conio.h>
int  main()
{
    int a,n,rem,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if (sum==a)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number.");
    }
    getch();
    return 0;
}

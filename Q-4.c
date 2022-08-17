//4. Write a program to calculate HCF of two numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a,b,hcf;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    n=a>b?a:b;
    for(i=1;i<=n;i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            hcf=i;
        }
    }
    printf("HCF of %d and %d is %d",a,b,hcf);
    getch();
    return 0;
}


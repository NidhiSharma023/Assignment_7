//5. Write a program to check whether two given numbers are co-prime numbers or not.
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
    if(hcf==1)
    {
        printf("%d and %d are co-prime numbers",a,b);
    }
    else
    {
        printf("%d and %d are not co-prime numbers",a,b);
    }
    getch();
    return 0;
}


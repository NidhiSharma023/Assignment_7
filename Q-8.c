//8. Write a program to find next Prime number of a given number.
#include<stdio.h>
#include<conio.h>
int  main()
{
    int n,i,a;
    printf("Enter a number:");
    scanf("%d",&n);
    {
        for( n ; 1 ;n++)
        {
            a=0;
            for(i=2;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    a=1;
                }
            }
            if(a==0)
            {
                printf("%d ",n);
                break;
            }
        }
    }
    getch();
    return 0;
}


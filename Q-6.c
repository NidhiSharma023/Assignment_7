//6. Write a program to print all Prime numbers under 100.
#include<stdio.h>
#include<conio.h>
int  main()
{
    int n,i,a;
    {
        for(n=1;n<=100;n++)
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
            }
        }
    }
    getch();
    return 0;
}

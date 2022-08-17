//7. Write a program to print all Prime numbers between two given numbers.
#include<stdio.h>
#include<conio.h>
int  main()
{
    int i,a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    {
        for(  ;a<=b;a++)
        {
            c=0;
            for(i=2;i<=a/2;i++)
            {
                if(a%i==0)
                {
                    c=1;
                }
            }
            if(c==0)
            {
                printf("%d ",a);
            }
        }
    }
    getch();
    return 0;
}

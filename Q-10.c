//10. Write a program to print all Armstrong numbers under 1000.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,sum,n,count=0;
    for(i=1;i<=1000;i++)
    {
        n=i;
        while(n!=0)
        {
            n=n/10;
            count++;
        }
        n=i;
        sum=pow(n%10,count);
        if(sum==i)
        {
            printf("%d\n",i);
        }
        count=0;
    }
    getch();
    return 0;
}

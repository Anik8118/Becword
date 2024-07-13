#include<stdio.h>
int main()
{
    double x,i,y=0;
    for(i=1;i<=100;i++)
    {
       x=1/i;
       y=y+x;
    }
    printf("%.2lf\n",y);
    return 0;
}
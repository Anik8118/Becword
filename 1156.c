#include<stdio.h>
int main()
{
    double x,i,y=0,z=1;
    for(i=1;i<=39;i=i+2)
    {
       x=i/z;
       y=y+x;
       z=z*2;
    }
    printf("%.2lf\n",y);
    return 0;
}
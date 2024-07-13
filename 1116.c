#include<stdio.h>
int main()
{
    int a,b,c,i;
    double d;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d%d",&b,&c);
        if(c==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            d=b/(c*1.00);
            printf("%.1lf\n",d);  
        }
    }
    return 0;
}
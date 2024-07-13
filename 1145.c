#include<stdio.h>
int main()
{
    int x,y,i,a=0;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        a++;
        printf("%d",i);
        if(a==x)
        {
            printf("\n");
            a=0;
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}

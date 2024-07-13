#include<stdio.h>
int main()
{
    int i,x,y;
    for(i=0;i<100;i++)
    {
        scanf("%d%d",&x,&y);
        if(x==y)
        {
            break;
        }
        else if(x>y)
        {
            printf("Decrescente\n");
        }
        else
        {
            printf("Crescente\n");
        }
    }
    return 0;
}
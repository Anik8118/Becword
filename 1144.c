#include<stdio.h>
int main()
{
    int x,i,j;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
       for(j=1;j<=2;j++)
       {
            if(j==1)
            {
                printf("%d %d %d\n",i,i*i,i*i*i);
            }
            else
            {
                printf("%d %d %d\n",i,(i*i)+1,(i*i*i)+1);
            }
       }
            
    }
    return 0;
}
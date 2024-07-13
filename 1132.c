#include<stdio.h>
int main()
{
    int i,x,y,total=0,total1=0;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        for(i=y;i<=x;i++)
        {
            if(i%13!=0)
            {
                total+=i;
            }
        }
        printf("%d\n",total);
    }
    else if(x<y)
    {
        for(i=x;i<=y;i++)
        {
          if(i%13!=0)
          {
             total1+=i; 
          }
        }
        printf("%d\n",total1);
    }
    return 0;
}
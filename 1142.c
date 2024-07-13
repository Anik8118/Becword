#include<stdio.h>
int main()
{
    int x,i,j,y=1,z=4;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
      for(j=y;j<=z;j++)
      {
            if(j%4==0)
            {
                printf("PUM\n");
            }
            else
            {
                printf("%d ",j);
            }
      }
      y+=4; z+=4;
    }
    return 0;
}
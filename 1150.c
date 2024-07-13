#include<stdio.h>
int main()
{
    int x,y,i,a=1,c=0;
    scanf("%d%d",&x,&y);
    while(x>=y)
    {
        scanf("%d",&y);
    }
    for(i=x;i<=y;i++)
    {
        c+=i;
        if(c>y)
            break;
        a++;
    }
    printf("%d\n",a);
    return 0;
}

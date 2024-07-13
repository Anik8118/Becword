#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len,c,i,j;
    char s[100];
    cin>>n;
    for(i=0; i<n; i++)
    {
        c=0;
        cin>>s;
        len=strlen(s);
        for(j=0; j<len; j++)
        {
            if(s[j]=='0')
            {
                c=c+6;
            }
            else if(s[j]=='1')
            {
                c=c+2;
            }
            else if(s[j]=='2')
            {
                c=c+5;
            }
            else if(s[j]=='3')
            {
                c=c+5;
            }
            else if(s[j]=='4')
            {
                c=c+4;
            }
            else if(s[j]=='5')
            {
                c=c+5;
            }
            else if(s[j]=='6')
            {
                c=c+6;
            }
            else if(s[j]=='7')
            {
                c=c+3;
            }
            else if(s[j]=='8')
            {
                c=c+7;
            }
            else if(s[j]=='9')
            {
                c=c+6;
            }
        }
        cout<<c<<" leds"<<endl;
    }
    return 0;
}
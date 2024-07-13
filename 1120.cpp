#include<bits/stdc++.h>
using namespace std;
int main()
{
    char n,s[100];
    int i,cou,len;
    while(cin>>n)
    {
        cin>>s;
        len=strlen(s);
        cou=0;
        if(s[0]=='0' && n=='0')
        {
            break;
        }
        for(i=0;i<len;i++)
        {
            if(s[i]=='0')
            {
                if(cou!=0)
                {
                    cout<<s[i];
                }
            }
            else if(s[i]!=n)
            {
                cout<<s[i];
                cou=1;
            }
        }
        if(cou==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<endl;
        }
    }
    return 0;
}
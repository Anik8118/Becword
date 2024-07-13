#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,len1,len2,len,j;
    char s1[100],s2[100];
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>s1>>s2;
        len1=strlen(s1);
        len2=strlen(s2);
        if(len1>=len2)
        {
            len=len1;
        }
        else
        {
            len=len2;
        }
        for(j=0;j<len;j++)
        {
            if(j<len1)
            {
                cout<<s1[j];
            }
            if(j<len2)
            {
                cout<<s2[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
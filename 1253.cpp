#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100],str;
    int i,j,n,num,len;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        cin>>num;
        len=strlen(s);
        for(j=0;j<len;j++)
        {
            str=s[j]-num;
            if(str<65)
            {
                str+=26;
            }
            cout<<str;
        }
        cout<<endl;
    }
    return 0;
}
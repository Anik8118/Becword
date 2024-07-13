#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   int i,n,len;
   char s[10];
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>s;
       len=strlen(s);
       if(len==5)
       {
           cout<<"3"<<endl;
       }
       else if((s[0]=='o' && s[1]=='n') || (s[0]=='o' && s[2]=='e') || (s[1]=='n' && s[2]=='e'))
       {
           cout<<"1"<<endl;
       }
       else
       {
           cout<<"2"<<endl;
       }

   }
   return 0;
}
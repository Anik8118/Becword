#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,cont;
    char s1[1001],s2[1001];
    cin>>n;

    for(i=0; i<n; i++)
    {
        cont=0;
        cin>>s1>>s2;
        for(j=strlen(s2), k=strlen(s1); j>=0; j--, k--)
        {
            if(s1[k]==s2[j])
            {
                cont++;
            }
            else
            {
                break;
            }
        }
        if(cont==strlen(s2)+1)
        {
            cout<<"encaixa"<<endl;
        }
        else
        {
            cout<<"nao encaixa"<<endl;
        }
    }
    return 0;
}
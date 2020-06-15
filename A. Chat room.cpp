#include<bits/stdc++.h>

using namespace std;

int main()

{
    string a;

    int i,j,k,l,m,n,t,fh=0,fe=0,fl=0,fo=0;

    cin>>a;

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='h')
        {
            fh=1;
        }
        if(a[i]=='e' && fh==1)
        {
            fe=1;
        }
        if(a[i]=='l' && fh==1 && fe==1)
        {
            fl++;
        }
        if(a[i]=='o' && fh==1 && fe==1 && fl>1)
        {
            fo=1;
        }
    }
    if(fo==1 && fh==1 && fe==1 && fl>1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

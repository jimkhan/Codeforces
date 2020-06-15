#include<bits/stdc++.h>

using namespace std;

int main()

{
    string a;

    int i,j,k,l,n,m,t;

    cin>>a;

    l=a.size();

    for(i=0;i<l;i++)
    {
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
        {
            a[i]='0';
            a[i+1]='0';
            a[i+2]='0';
            i+=2;
        }
    }
    int fl=0,fl2=0;

    for(i=0;i<l;i++)
    {

        if(a[i]=='0')
        {
            continue;
        }
        if(fl==1 && a[i-1]=='0')
        {
            printf(" ");
        }

        printf("%c",a[i]);
        fl=1;
    }
    printf("\n");

}

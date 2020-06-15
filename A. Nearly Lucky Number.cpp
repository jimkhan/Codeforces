#include<bits/stdc++.h>

using namespace std;

int main()

{
    string a;
    int i,j,k,l,m=0,n,f,t;

    cin>>a;

    l=a.size();

    for(i=0;i<l;i++)
    {
        if(a[i]=='4' || a[i]=='7')
        {
            m++;
        }
    }
    k=m;
    n=0;
    j=log(m);
    while(k!=0)
    {
        f=k%10;
        if(f==4 || f==7)
        {
            n++;
        }
        k=k/10;
    }

    if(j==n && n!=0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }


}

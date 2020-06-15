#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j,k,l,n;
    while(cin>>n)
    {
        int ans=0;


        if(n>=100)
        {
            l=n%100;
            ans+=n/100;
            n=l;
        }

        if(n>=20)
        {
            l=n%20;
            ans+=n/20;
            n=l;
        }

        if(n>=10)
        {
            l=n%10;
            ans+=n/10;
            n=l;
        }

        if(n>=5)
        {
            l=n%5;
            ans+=n/5;
            n=l;
        }
        if(n)
        {
            ans+=n;
        }

        printf("%d\n",ans);





    }
}

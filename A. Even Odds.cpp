#include<bits/stdc++.h>

using namespace std;



int main()

{

    long long n,l,p,i,j,k,m,t;


    cin>>n>>p;
    m=0;
    l=n/2;
    if(n%2==1)
    {
        l++;
    }

    if(p<=l)
    {

        printf("%lld\n",p*2-1);
    }

    else
    {
        m=p-l;
        printf("%lld\n",m*2);
    }

}

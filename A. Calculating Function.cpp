#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long i,j,k,l,n;


    while(cin>>n)
    {
        if(n%2==0)
        {
            n=n/2;
            l=-(n*n);
            k=n*(n+1);
        }
        else
        {
            n=n/2;
            k=n*(n+1);
            n++;
            l=-(n*n);

        }


        printf("%lld\n",l+k);
    }
}


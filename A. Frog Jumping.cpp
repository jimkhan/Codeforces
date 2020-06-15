#include<bits/stdc++.h>

using namespace std;

int main()
{
        //freopen("input.txt", "r", stdin); // redirects standard input
        //freopen("output.txt", "w", stdout); // redirects standard output
        
    long long  i,j,k,l,p,q,n,m,t;
    
    cin>>t;

    while(t--)
    {
        cin>>n>>m>>l;
        if (l%2==1)
        {
            printf("%lld\n",(n-m)*(l/2)+n);
        }
        else
        {
            printf("%lld\n",(n-m)*l/2);
        }

    }
    
    return 0;
}

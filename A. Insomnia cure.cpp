#include<bits/stdc++.h>

using namespace std;

int main()

{

    int i,j,k,l,m,n,p,q;

    while(cin>>j>>k>>l>>m>>n)
    {

        int ans=n;
        for(i=1; i<=n; i++)
        {
            if(i%j!=0 && i%k!=0 && i%l!=0  && i%m!=0 )
            {
                ans--;
            }
        }
        printf("%d\n",ans);
    }
}




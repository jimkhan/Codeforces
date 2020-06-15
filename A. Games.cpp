#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j,k,l,m,n;

    while(cin>>n)
    {
        i=0;
        int a[n+1],b[n+1];

        for(i=0; i<n; i++)
        {
            cin>>k>>l;
            a[i]=k;
            b[i]=l;
        }

        int ans=0;
        for(i=0; i<n; i++)
        {

            for(j=0; j<n; j++)
            {
                if(i!=j &&a[i]==b[j])
                {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}

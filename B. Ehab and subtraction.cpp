#include<bits/stdc++.h>
#define pb push_back

typedef long long ll;

using namespace std;

vector<ll> v;

int main()

{
    ll i,j,k,l,m,n,val,r;

    while(cin>>n>>k)
    {
        for(i=0; i<n; i++)
        {
            cin>>l;
            v.pb(l);
        }

        sort(v.begin(),v.end());
        vector<ll> :: iterator it;

        m = 0;
        r=k;

        for(i=0; i<v.size(); i++)
        {
            val = v[i]-m;
            m = v[i];

            if(val<=0)
            {
                continue;
            }

            printf("%lld\n",val);

            k--;
            r--;
            if(k==0)
            {
                break;
            }



        }

        while(r>0)
        {
            printf("0\n");
            r--;
        }
        v.clear();

    }

}

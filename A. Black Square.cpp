#include<bits/stdc++.h>

using namespace std;

int main()
{
        //freopen("input.txt", "r", stdin); // redirects standard input
        //freopen("output.txt", "w", stdout); // redirects standard output
        
    int i,j,k,l,p,q,n,m,t;
    
    //cin>>t;

    int a[5]={0};

    while(cin>>a[1]>>a[2]>>a[3]>>a[4])
    {
   
        string s;

        int ans=0;

        cin>>s;

        for ( i = 0; i < s.size(); i++)
        {                   
            l=s[i]-'0';
            ans += a[l];
        }

        printf("%d\n",ans);
        
    }
    
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()

{
        //freopen("input.txt", "r", stdin); // redirects standard input
        //freopen("output.txt", "w", stdout); // redirects standard output
    int i,j=0,k,l,p,q,n,m,t;
    //string a,b,c,d,e,f;

    while(cin>>n)
    {
        k=sqrt(n);
        int ans=0;
        for(i=1;i<=k;i++)
        {
           if(n%i==0)
           {
               if(n/i==i)
               {
                   ans++;
               }
               else{
                ans+=2;
               }
           }
        }
        printf("%d\n",ans-1);
    }
}



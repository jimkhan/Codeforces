#include<bits/stdc++.h>

using namespace std;

int main()

{
    //freopen("input.txt", "r", stdin); // redirects standard input
    //freopen("output.txt", "w", stdout); // redirects standard output
    int i,j=0,k,l,p,q,n,m,t;
    string a,b,c,d,e,f;

    while(cin>>a)
    {
        //cin.ignore();
        cin>>b>>c>>d>>e>>f;

        if((a[0]==b[0] || a[0] == c[0] || a[0] == d[0] || a[0] == e[0] || a[0] == f[0]) || (a[1]==b[1] ||a[1]==c[1] ||a[1]==d[1] ||  a[1]==e[1] || a[1]==f[1] ) )
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }


    }
}




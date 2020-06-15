#include<bits/stdc++.h>

using namespace std;

int main()

{
    string a,b;

    int i,j,k,l,m,n,t;

    cin>>a>>b;

    reverse(b.begin(),b.end() );

    if(a==b)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

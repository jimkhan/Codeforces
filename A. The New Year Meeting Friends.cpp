#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j,k,l,m,n;

    while(cin>>n>>m>>l)
    {


        k=min(n,min(m,l));
        l=max(n,max(m,l));

        cout<<l-k<<endl;
    }
}



#include<bits/stdc++.h>

using namespace std;

int main()

{
        //freopen("input.txt", "r", stdin); // redirects standard input
        //freopen("output.txt", "w", stdout); // redirects standard output
    int i,j=0,k,l,p,q,n,m,t;


    while(cin>>n>>m>>l>>k)
    {
        int a[4]={0};
        a[0]=n;
        a[1]=m;
        a[2]=l;
        a[3]=k;

        sort(a,a+4);

        printf("%d %d %d\n",a[3]-a[0],a[3]-a[1],a[3]-a[2]);
    }
}


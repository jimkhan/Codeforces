
#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a[1010],b[1010];
    int i,j,k,l,m,n;

    cin>>n>>m;

    for(i=0; i<m; i++)
    {
        cin>>a[i];
    }

    sort(a,a+m);

    l=10000000;
    for(i=0; i<m-n+1; i++)
    {

        if(a[i+n-1]-a[i]<l)
        {
            l=a[i+n-1]-a[i];
        }

    }

    printf("%d\n",l);



}

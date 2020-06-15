#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j,k,l,m,n,t;

    cin>> t;
    l=0;
    for(i=1;i<=t;i++)
    {

        cin>>m>>n;

        k=n-m;

        if(k>=2)
        {
            l++;
        }

    }
    printf("%d\n",l);
}

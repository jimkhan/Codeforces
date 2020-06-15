#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a[50000];
    int i,j,k,l,m,n,sum;

    cin>>n;

    for(i=1;i<=n*2;i++)
    {
        cin>>a[i];
    }
    sum=0;
    k=0;
    for(i=1;i<=n*2;i++)
    {
        if(i%2!=0)
        {
            sum-=a[i];
        }
        if(i%2==0)
        {
            sum+=a[i];

        }
        if(sum>k)
        {
            k=sum;
        }
    }

    printf("%d\n",k);

    return 0;
}

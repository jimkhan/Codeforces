#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j,k,l,n;


    while(cin>>n)
    {
        int a[n+1];

        for(i=1;i<=n;i++)
        {
            cin>>l;
            a[l]=i;
        }
        printf("%d",a[1]);
        for(i=2;i<=n;i++)
        {
            printf(" %d",a[i]);
        }
        printf("\n");
    }
}

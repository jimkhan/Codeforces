#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a[10][10];

    int i,j,k,l,ans;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                k=i;
                l=j;
            }
        }
    }
    k=abs(k-3);
    l=abs(l-3);

    printf("%d\n",k+l);

    return 0;





}

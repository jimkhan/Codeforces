#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j,k,l,m,n,t;

    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>l;
        }
        for(i=1;i<=n;i++)
        {
            if(i>1 && i<n)
            {
                printf(" ");
            }
            if(i%4==0)
            {
                printf("2");
            }
            else
            {
                printf("1");
            }
        }
        cout<<endl;
    }
}

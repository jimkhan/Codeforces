#include<bits/stdc++.h>

using namespace std;

int main()

{
    string a;

    int i,j,k,l,m,n,t;

    while(cin>>n)
    {
        cin>>a;
        j=0;
        k=0;
        for(i=0;i<n;i++)
        {
            if(a[i]=='1' && a[i+1]=='1')
            {
                j=1;
                break;
            }
            if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='0')
            {
                j=1;
                break;
            }
        }

        if(n==1 && a[0]=='1')
        {
            printf("Yes\n");
        }

        else if(j==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

    }
}

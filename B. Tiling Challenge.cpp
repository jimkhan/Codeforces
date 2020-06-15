#include<bits/stdc++.h>

using namespace std;


int main()
{
    int i,j,k,l,n,m,t;

    cin>>n;

    char a[n+1][n+1],b[100];


    for(i=0; i<n; i++)
    {
        scanf(" %[^\n]",&b);
        for(j=0; j<n; j++)
        {
            a[i][j]=b[j];
        }
    }
    for(i=1; i<n-1; i++)
    {
        for(j=1; j<n-1; j++)
        {
            if(a[i][j]=='.' && a[i-1][j]=='.' && a[i][j-1]=='.' && a[i][j+1]=='.' && a[i+1][j]=='.')
            {
                a[i][j]=a[i-1][j]=a[i][j-1]=a[i][j+1]=a[i+1][j]='#';
            }
        }
    }
    int fl=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]=='.')
            {
                fl=1;
                break;
            }
        }
    }
    if(fl==1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

}

#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,k,l,j,t,n;

    int a[11][11]= {0};

    for(i=1; i<11; i++)
    {
        for(j=1; j<11; j++)
        {

            if(i==1 || j==1)
            a[i][j]=1;
            else
            {
                a[i][j]=a[i-1][j]+a[i][j-1];
            }

        }
    }


    while(cin>>n)
    {

        printf("%d\n",a[n][n]);
    }
}


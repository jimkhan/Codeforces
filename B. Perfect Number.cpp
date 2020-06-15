#include<bits/stdc++.h>

using namespace std;

long long a[1000009];

int main()

{
    long long  i,j,k,l,n,m=0,t,p;

    for(i=19; i<=11000000; i++)
    {
        k=i;
        j=0;
        while(k!=0)
        {
            t=k%10;
            j+=t;
            k/=10;
            if(j==10 && k==0)
            {
                a[m]=i;
                m++;
                j=0;
                break;
            }
        }
    }
    while(cin>>n)
    {

        printf("%d\n",a[n-1]);

    }
}

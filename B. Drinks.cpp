#include<bits/stdc++.h>

using namespace std;

int main()
{
    double n,m,l;
    int i,j,k;

    while(cin>>n)
    {
        m=0;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            m+=(l/100);
        }
        m=(m/n)*100;
        printf("%.12lf\n",m);
    }
}

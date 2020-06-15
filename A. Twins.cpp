#include<bits/stdc++.h>

using namespace std;

int myf(int a,int b)
{
    return(a>b);
}

int main()

{
    int a[200];
    int i,j,k,l,m,n,t;

    cin>>t;
    l=0;
    k=0;
    m=0;
    for(i=0;i<t;i++)
    {
        cin>>n;
        a[i]=n;
        m=m+n;
    }
    sort(a,a+t,myf);

    for(i=0;i<t;i++)
    {
        if(l<=m)
        {
            k++;
        }
        l=l+a[i];
        m=m-a[i];
    }
    printf("%d\n",k);


    return 0;
}

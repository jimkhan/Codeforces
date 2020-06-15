#include<bits/stdc++.h>

using namespace std;

int main()

{

    int i,j,k,l,m,n,t;

    cin>>n;

    if(n%4==0)
    {
        m=1;
    }
    else if(n%7==0)
    {
        m=1;
    }
    else if(n%47==0)
    {
        m=1;
    }
    else if(n%74==0)
    {
        m=1;
    }
    else if(n%474==0)
    {
        m=1;
    }
    else if(n%477==0)
    {
        m=1;
    }else if(n%744==0)
    {
        m=1;
    }
    else if(n%747==0)
    {
        m=1;
    }
    else
    {
        m=0;
    }



    if(m==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

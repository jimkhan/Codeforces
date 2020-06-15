#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,k;
    cin>>n;
    l=n%5;

    if(n>5)
    {
       k=((n-l)/5)+1;
       if(l==0)
        k--;
       cout<<k<<endl;
    }
    else
    {
        printf("1\n");
    }


}

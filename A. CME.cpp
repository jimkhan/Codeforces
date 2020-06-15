#include<bits/stdc++.h>

using namespace std;

int main()

{
        //freopen("input.txt", "r", stdin); // redirects standard input
        //freopen("output.txt", "w", stdout); // redirects standard output
    int i,j=0,k,l,p,q,n,m,t;
    //string a,b,c,d,e,f;

    cin>>t;
    while(t--)
    {
        cin>>n;

        if(n==2)
        {
            printf("2\n");
            continue;
        }
        if(n%2==0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }
}





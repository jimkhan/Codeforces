#include<bits/stdc++.h>

using namespace std;

int main()
{
        //freopen("input.txt", "r", stdin); // redirects standard input
        //freopen("output.txt", "w", stdout); // redirects standard output
        
    int i,j,k,l,p,q,n,m,t;
    
    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        if(n==m)
        {
            printf("0\n");
        }
        else if(n>m)        
        {
            if((n-m)%2==0)
            {
                printf("1\n");
            }
            else 
            {
                printf("2\n");
            }
        }
        else
        {
            if((m-n)%2==0)
            {
                printf("2\n");
            }
            else 
            {
                printf("1\n");
            }
            
        }
        
    }
    
    return 0;
}

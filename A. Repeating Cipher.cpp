#include<bits/stdc++.h>

using namespace std;

int main()
{
        //freopen("input.txt", "r", stdin); // redirects standard input
        //freopen("output.txt", "w", stdout); // redirects standard output
        
    int i,j,k,l,p,q,n,m,t;
    
    //cin>>t;

    while(cin>>n)
    {
        string s;
        cin>>s;

        l=1;
        k=2;


        while (l<=s.size())
        {
            printf("%c",s[l-1]);
            l+=k;
            k++;
        }
        
        printf("\n");
    }
    
    return 0;
}

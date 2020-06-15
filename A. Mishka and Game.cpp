#include <bits/stdc++.h>

using namespace std;

int main()

{
    int i,k,j,l,n,t;


    while(cin>>t)
    {
        int ms=0,ch=0;
        while(t--)
        {
            cin>>n>>k;

            if(n>k)
            {
                ms++;
            }
            if(k>n)
            {
                ch++;
            }
        }

        if(ms > ch)
        {
            printf("Mishka\n");
        }
        else if(ms < ch)
        {
            printf("Chris\n");
        }
        else
        {
            printf("Friendship is magic!^^\n");
        }

    }
}

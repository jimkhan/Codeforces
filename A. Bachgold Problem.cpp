#include <bits/stdc++.h>

using namespace std;

int main()

{
    int i,k,j,l,n,t;


    while(cin>>n)
    {


        if(n%2==0)
        {
            printf("%d\n",n/2);
            while(n!=2)
            {
                printf("2 ");
                n-=2;
            }
            printf("2\n");
        }

        else
        {
            l=n-3;
            printf("%d\n",(l/2)+1);
            while(l)
            {
                printf("2 ");
                l-=2;
            }
            printf("3\n");
        }

    }
}


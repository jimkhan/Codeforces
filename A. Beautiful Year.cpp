#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a,b,c;
    int i,j,k,l,m,n;

    cin>>a;

    a=a+1;
    m=a;

    i=a%10;
    a=a/10;

    j=a%10;
    a=a/10;

    k=a%10;
    l=a/10;

    while(1)
    {
        if((l!=k && l!=j && l!=i)&&(k!=j && k!=i)&& (j!=i))
        {
            printf("%d\n",m);
            break;
        }
        else
        {
            m++;
            a=m;

            i=a%10;
            a=a/10;

            j=a%10;
            a=a/10;

            k=a%10;
            l=a/10;
        }
    }

}

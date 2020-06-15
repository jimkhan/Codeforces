#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a[100009],b[100009],c[10],d[10];
    int i,j,k,l,m,n,o,p,t;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    int co=0;
    for(i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            if(co>2)
            {
                break;
            }
            c[co]=i+1;
            co++;
        }

    }
    sort(c,c+2);
    if(co<=2 && co!=0)
    {
        printf("yes\n");
        printf("%d %d\n",c[0],c[1]);
    }
    else if(co==0)
    {
        printf("yes\n");
        printf("1 1\n");
    }

    else
    {
        printf("no\n");
    }
}

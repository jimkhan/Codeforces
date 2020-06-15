#include<bits/stdc++.h>

using namespace std;

int a[1000009];
int b[100009];

int main()

{

    int i,j=0,k,l,m,n,t;

    cin>>n;
    k=0;
    l=0;
    m=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]>=k)
        {
            k=a[i];
            l++;
        }
        else
        {

            b[j]=l;
            j++;
            k=a[i];
            l=1;
        }

    }

    sort(b,b+j);
    m=b[j-1];
    if(m>l)
    {
        swap(m,l);
    }
     printf("%d\n",l);
}

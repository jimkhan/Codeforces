#include<bits/stdc++.h>

using namespace std;

int check(string a,string b)
{
    int x=0;
    reverse(b.begin(),b.end());
    if(a==b)
    {
        x=1;
    }

    return x;
}

int main()

{
    string a,b,c,d;
    int i,j,k,l,n,m,t;

    while(cin>>t)
    {
        while(t--)
        {
            cin>>a;
            l=a.size();
            if(l==1)
            {
                printf("-1\n");
                continue;
            }

            b=a;
            reverse(b.begin(),b.end());

            if(a!=b)
            {
                cout<<a<<endl;
                continue;
            }
            else
            {
                for(i=0; i<l-1; i++)
                {
                    swap(a[i],a[i+1]);
                    b=a;
                    m=check(a,b);
                    if(m==0)
                    {
                        break;
                    }
                }
                if(m==0)
                {
                    cout<<a<<endl;
                }
                else
                {
                    printf("-1\n");
                }
            }
        }
    }


}

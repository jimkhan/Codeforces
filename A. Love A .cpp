#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j,k,l,n;
    string s;

    while(cin>>s)
    {



        int sa=0,fs=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='a')
            {
                sa++;
            }
            else
            {
                fs++;
            }
        }
        if(sa>fs)
        {
            printf("%d\n",s.size());
        }
        else
        {
            printf("%d\n",s.size()-abs(fs-sa+1));
        }



    }
}


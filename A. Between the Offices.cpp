#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j,k,l,n;

    while(cin>>n)
    {
        string s;

        cin>>s;
        int sf=0,fs=0;
        for(i=0;i<s.size()-1;i++)
        {
            if(s[i]=='S' && s[i+1]=='F')
            {
                sf++;
            }
            else if(s[i]=='F' && s[i+1]=='S'){
                fs++;
            }
        }

        if(sf>fs)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}

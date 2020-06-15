#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j,k,l,n,t;

    cin>>t;

    while(t--)
    {

        string s;
        cin>>s;
        l=s.size();


       if(s[l-1]=='o' &&s[l-2]=='p')
       {
           printf("FILIPINO\n");
       }

       if((s[l-4]=='d' && s[l-3]=='e' && s[l-2]=='s' && s[l-1]=='u') || (s[l-4]=='m' &&s[l-3]=='a' &&s[l-2]=='s' &&s[l-1]=='u'))
       {
           printf("JAPANESE\n");
       }

       if( s[l-5]=='m' &&s[l-4]=='n' &&s[l-3]=='i' &&s[l-2]=='d' &&s[l-1]=='a')
       {
           printf("KOREAN\n");
       }



    }
}



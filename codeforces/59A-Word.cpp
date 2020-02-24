    #include<bits/stdc++.h>
    using namespace std ;
    int main()
    {
        string s ;
        cin>>s;
        int countLower =0;
        int countUpper =0 ;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' and s[i]<='z')
            {
                countLower++;
            }
            if(s[i]>='A' and s[i]<= 'Z')
            {
                countUpper++;
            }
     
        }
        if(countLower>=countUpper)
        {
            transform(s.begin(),s.end(),s.begin(),::tolower);
        }
        else
        {
            transform(s.begin(),s.end(),s.begin(),::toupper);
        }
        cout<<s<<endl;
        return 0 ;
    }

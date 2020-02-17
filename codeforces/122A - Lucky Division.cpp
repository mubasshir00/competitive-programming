    #include<bits/stdc++.h>
    using namespace std ;
     
    int string_to_int_converter(string str)
    {
        stringstream convert_to_int(str);
        int x =0;
        convert_to_int>>x;
        return x ;
    }
     
     
    int main()
    {
       string s ;
       cin>>s;
       int new_int = string_to_int_converter(s);
       int count=0;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='4' || s[i]=='7')
           {
               count++;
           }
       }
       if(count==s.length())
       {
           cout<<"YES"<<endl;
       }
       else
       {
           if(new_int%4 ==0 || new_int%7==0 || new_int%47 ==0 || new_int%744==0)
           {
               cout<<"YES"<<endl;
           }
           else cout<<"NO"<<endl;
       }
        return 0 ;
    }

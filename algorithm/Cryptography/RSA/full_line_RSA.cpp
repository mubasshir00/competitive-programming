#include<bits/stdc++.h>
using namespace std ;

string rsa_converter(string s){
    return s;
}

bool isPrimeCheck(int x){
    if(x<=1) return false;
    if(x<=3) return true;
    if(x%2==0 || x%3==0)
        return false;
    for(int i=5;i*i<=x;i=i+6){
        if(x%i==0 || x%(i+2)==0)
           return false;
    }
    return true ;
}

int main()
{
    string line_text = "";
    getline(cin,line_text);
    istringstream iss(line_text);
    vector<string>V;
    int first_prime_x ;
    int second_prime_y ;
    int flag ;
    cout<<"Enter 1st prime : "<<endl;
    cin>>first_prime_x;
    cout<<"Enter 2nd prime : "<<endl;
    cin>>second_prime_y;
     
    flag = isPrimeCheck(first_prime_x);
    cout<<flag<<endl;
    if(isPrimeCheck(first_prime_x) == 0)
    {
        cout<<"\n Invalid Input\n";
        exit(0);
    }
    if(isPrimeCheck(second_prime_y) == 0)
    {
        cout<<"\n Invalid Input\n";
        exit(0);
    }
    while(iss){
        string str;
        iss>>str;
        cout<<rsa_converter(str)<<endl;
    }
    return 0 ;
}

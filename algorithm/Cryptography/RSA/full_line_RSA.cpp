#include<bits/stdc++.h>
using namespace std ;
int x, y, n, t, i, flag;
long int e[50], d[50], temp[50], j;
char en[50], m[50];
char msg[100];
int prime(long int); // function to check for prime number
void encryption_key();
vector<string>encrypted_text;
vector<string>decrypted_text;
long int cd(long int);
void encrypt();
void decrypt();

bool isPrimeCheck(int x)
{
    if (x <= 1)
        return false;
    if (x <= 3)
        return true;
    if (x % 2 == 0 || x % 3 == 0)
        return false;
    for (int i = 5; i * i <= x; i = i + 6)
    {
        if (x % i == 0 || x % (i + 2) == 0)
            return false;
    }
    return true;
}


long int cd(long int a)
{
    long int k = 1;
    while (1)
    {
        k = k + t;
        if (k % a == 0)
            return (k / a);
    }
}
void encryption_key(){
    int k ;
    k=0;
    for(int i=2;i<t;i++){
        if(t%i==0)continue;
        flag = isPrimeCheck(i);
        if(flag == 1 && i!=x && i!=y){
            e[k] = i;
            flag = cd(e[k]);
            if(flag>0){
                d[k] = flag;
                k++;
            }
            if(k==99) break;
        }
    }
}

void encrypt(){
    long int pt ,ct,key = e[0],k,len;
    int i=0;
    len = strlen(msg);

    while(i!=len){
        pt = m[i];
        pt = pt - 96;
        k =1;
        for(j=0;j<key;j++){
            k = k *pt;
            k = k%n;
        }
        temp[i] = k;
        ct = k+96;
        en[i] = ct;
        i++;

        
    }
    en[i] = -1;
    encrypted_text.push_back(en);
    encrypted_text.push_back(" ");
    // for(int i=0;en[i]!=-1;i++){
    //     cout<<en[i];
    // }
}
void decrypt()
{
    long int pt, ct, key = d[0], k;
    i = 0;
    while (en[i] != -1)
    {
        ct = temp[i];
        k = 1;
        for (j = 0; j < key; j++)
        {
            k = k * ct;
            k = k % n;
        }
        pt = k + 96;
        m[i] = pt;
        i++;
    }
    m[i] = -1;
    decrypted_text.push_back(m);
    decrypted_text.push_back(" ");
  
}

void encryption_converted(string str){
    for(int i=0;i<str.size();i++){
        msg[i] = str[i];
    }
    for (i = 0; msg[i] != '\0'; i++)
        m[i] = msg[i];
    n = x * y;
    t = (x - 1) * (y - 1);
    encryption_key();

    encrypt();
    decrypt();
}

int main()
{
    string line_text = "";
    cout<<"Enter Plain Text "<<endl;
    getline(cin,line_text);
    istringstream iss(line_text);
    vector<string>V;
    
    cout<<"Enter 1st prime : "<<endl;
    cin >> x;
    cout<<"Enter 2nd prime : "<<endl;
    cin>>y;
     
    flag = isPrimeCheck(x);
    cout<<flag<<endl;
    if(isPrimeCheck(y) == 0)
    {
        cout<<"\n Invalid Input\n";
        exit(0);
    }
    if(isPrimeCheck(y) == 0)
    {
        cout<<"\n Invalid Input\n";
        exit(0);
    }
    while(iss){
        string str;
        iss>>str;
        // cout<<str<<" ";
        // cout << rsa_converter(str, first_prime_x,second_prime_y) << endl;
        // msg = str;
        encryption_converted(str);
    }

    cout<<"Encrypted Text : "<<endl;
    for(int i=0;i<encrypted_text.size()-1;i++){
        cout<<encrypted_text[i];
    }
    cout<<endl;
    cout << "Decrypted Text : " << endl;
    for (int k = 0; k < decrypted_text.size();k++){
        cout << decrypted_text[k];
    }
    cout<<endl;
    return 0;
}

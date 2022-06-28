class Solution {
public:
    string addBinary(string a, string b) {
    string res ;
    char c = '0';
    int max_len = max(a.length(), b.length()) ;
    int min_len = min(a.length(), b.length());
    int dif = max_len -min_len;
    string zero ;
    for(int i=0;i<dif;i++){
        zero.push_back('0');
    }
    if(a.length()>b.length()){
        b = zero+b;
    } else {
        a = zero+a;
    }
    for (int i = max_len - 1; i >=0; i--)
    {
        if(a[i] == '1' && b[i]=='1'){
            if(c=='1'){
                res.push_back('1');
                c = '1';
            } else {
                // res = res + '0';
                res.push_back('0');
                c = '1';
            }
        } else if(a[i]=='0' && b[i]=='0') {
            if( c=='1'){
                // res = res + '1';
                res.push_back('1');
                c = '0';
            } else {
                // res = res + '0';
                res.push_back('0');
                c = '0';
            }
        } else  {
            if(c=='1'){
                // res = res + '0';
                res.push_back('0');
                c = '1';
            } else {
                // res = res + '1';
                res.push_back('1');
                c = '0';
            }
        }
    }
    if(c=='1'){
        res.push_back(c);
    }
    reverse(res.begin(),res.end());
        return res ;
    }
};

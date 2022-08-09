//encrypt decrypt a character 

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int t;
    while (1)
    {
        t = a % b;
        if (t == 0)
        {
            return b;
        }
        a = b;
        b = t;
    }
}

void rsaEncryption(int a)
{
    double p = 17;    // prime number
    double q = 29;    // prime number
    double n = p * q; // calculate
    double track;
    double phi = (p - 1) * (q - 1); // public key
    double e = 7;
    // check 1<e<phi(n) and gcd(e,phi(n)) = 1
    while (e < phi)
    {
        track = gcd(e, phi);
        if (track == 1)
        {
            break;
        }
        else
            e++;
    }
    cout << "Phi " << phi << endl;
    cout << "e " << e << endl;
    double d1 = 1 / e;
    double d = fmod(d1, phi);
    double c = pow(a, e);
    double m = pow(c, d);
    c = fmod(c, n);
    m = fmod(m, n);
    cout << c << endl;
    cout << m << endl;
}

int main()
{
    string s = "A";
    rsaEncryption(s[0] - 0);
    // cout<<s[0]-0<<endl;
    cout << char(s[0]) << endl;
    return 0;
}
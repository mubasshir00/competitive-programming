#include<bits/stdc++.h>
#define PI 2*acos(0.0)
using namespace std ;
int main()
{
    int tc ;
    double a,e=0,b,c,d;
    int j=1;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%lf",&a);
         b = PI * pow(a,2);
         d = 4*a*a;
         e = d-b;
        printf("Case %d: %.2f\n",j++,e);

    }
    return 0 ;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
   set<int>s;
   /* s.insert(abs(x1));
    s.insert(abs(y1));
    s.insert(abs(x2));
    s.insert(abs(y2));
    if(x1==y1 and y1==x2 and y2==x2)
    {
        cout<<"-1"<<endl;
    }*/
   int a = abs(x1-x2);
   int b = abs(y1-y2);
  // cout<<max(a,b)<<endl;
  int c = max(a,b);

        if(y1!=y2 and x1!=x2 and (abs(x1-x2)!=abs(y1-y2)))
        {
            cout<<"-1"<<endl;
        }
        else if(x1==x2)
        {
                cout<<x1+b<<" "<<y1<<" "<<x2+b<<" "<<y2<<endl;
        }
        else if(y1==y2)
        {
              cout<<x1<<" "<<y1+a<<" "<<x2<<" "<<y2+a<<endl;
        }
        else
        {
             cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
        }


    return 0;
}

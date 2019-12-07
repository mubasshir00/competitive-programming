#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int n ;
    while(cin>>n)
    {
        queue<int>q;
        if(n==0)break;
        for(int i=1;i<=n;i++)
        {
            q.push(i);
        }
        cout<<"Discarded cards:";
        while(q.size()>1)
        {
            if(q.size()>2)
            {
                cout<<" "<<q.front()<<",";
                q.pop();
               q.push(q.front());
               q.pop();

            }
            else
            {
                cout<<" "<<q.front();
                q.pop();
                q.push(q.front());
                q.pop();
            }
        }
        cout<<endl;
        cout<<"Remaining card: "<<q.front()<<endl;

    }
    return 0 ;
}

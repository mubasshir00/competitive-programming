#include<bits/stdc++.h>
using namespace std ;
vector<int>v[300000];
int visited[300000];
int vampire=0;
int lyken = 0;

void dfs(int start)
{
    queue<int>q;
    q.push(start);
    visited[start]=1;
    vampire++;
    while(!q.empty())
    {
        int current = q.front();
        q.pop();
        for(int i=0;i<v[current].size();i++)
        {
            int next = v[current][i];
            if(!visited[next])
            {
                q.push(next);
                if(visited[current]==1){
                visited[next]=2;
                lyken++;
                }
                else
                {
                    visited[next]=1;
                    vampire++;
                }
            }
        }
    }
}

int main()
{
    int tc ;
    cin>>tc;
    int ca=1;
    while(tc--)
    {
        for(int i=0;i<300000;i++)
        {
            v[i].clear();
        }
        int n ,ans=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
        }

        memset(visited,0,sizeof(visited));
        for(int i=0;i<300000;i++)
        {
            if(!v[i].empty() && visited[i]==0)
            {
                vampire=0;
        lyken=0;
                dfs(i);
                ans=ans+max(vampire,lyken);
            }
        }
        cout<<"Case "<<ca++<<": "<<ans<<endl;
        vampire=0;
        lyken=0;
        ans=0;
    }
    return 0;
}

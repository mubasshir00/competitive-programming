#include<bits/stdc++.h>
using namespace std ;
char arr[50][50];
bool visited[50][50];
 int n,m;
vector<int>v[10];
bool visit[10];
void dfs(int start)
{
    visit[start] = true ;
    for(int i=0;i<v[start].size();i++)
    {
        if(visit[v[start][i]] == false)
            dfs(v[start][i]);
    }
}
int ans=1;
void applydfs(int i,int j)
{

    if(arr[i+1][j] == '.' && i+1<m && visited[i+1][j] == false)
    {
         ans++;
        visited[i+1][j]=true;
        applydfs(i+1,j);

    }
    if( arr[i][j+1]=='.' && j+1<n && visited[i][j+1]==false)
    {
         ans++;
        visited[i][j+1]=true;
        applydfs(i,j+1);
    }
    if( arr[i-1][j]=='.' && i-1>-1 && visited[i-1][j]==false)
    {
         ans++;
        visited[i-1][j]=true;
        applydfs(i-1,j);
    }
    if( arr[i][j-1]=='.' && j-1>-1 && visited[i][j-1] == false)
    {
         ans++;
        visited[i][j-1]=true;
        applydfs(i,j-1);
    }
}


int main()
{
    int tc,x,y ;
    int ca =1;
    cin>>tc;
    while(tc--)
    {
ans=0;
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='@')
                {
                    x=i;
                    y=j;
                }
            }
        }
        memset(visited,false,sizeof(visited));
        applydfs(x,y);
        cout<<"Case "<<ca++<<": "<<ans+1<<endl;
    }
    return 0 ;
}

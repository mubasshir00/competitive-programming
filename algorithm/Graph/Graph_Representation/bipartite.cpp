bool isBipartite(vector<vector<int>>& graph) {
  int vertex = graph.size();
  vector<int>col(vertex,-1);
  //vertex , color
  queue<pair<int,int>>q;
  for(int i=0;i<vertex;i++){
    //index color na kora thakle
    if(col[i] == -1){
      q.push({i,0});
      col[i] = 0;
      while(!q.empty()){

        pair<int,int>p = q.front();
        q.pop();
        // current vertex
        int current_vertex = p.first;
        //0 2 1 3
        //cout<<current_vertex<<endl;
        //color of current vertex
        int c = p.second;
        //0 1 0 1
        //cout<<"c"<<c<<endl;

        for(int j :graph[current_vertex]){
          if(col[j] == c) {
            return 0;
          }
          if(col[j] == -1){
            col[j] = c ? 0 : 1;
            q.push({j,col[j]});
          }
        }
      }
    }
  }
   return 1;
    }

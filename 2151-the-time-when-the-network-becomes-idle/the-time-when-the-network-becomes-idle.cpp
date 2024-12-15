class Solution {
public:
    void dijkstra(int n,vector<vector<int>> &adj,vector<int> &dis)
    {   
        dis[0]=0; vector<bool> vis(n,false);
        auto comp =[](const pair<int,int> &p1,const pair<int,int> &p2){return p1.first>p2.first;};
        priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(comp)> pq(comp);

        pq.push({0,0});
        while(!pq.empty())
        {
           int curr = pq.top().second; pq.pop();
           if(vis[curr])continue;
           vis[curr]=true;
           for(auto node:adj[curr])
           {
               if(dis[node]>dis[curr]+1){dis[node]=dis[curr]+1; pq.push({dis[node],node});}
           }
        }
        for(int &i:dis)
        {
            i*=2;
        }
    }
    int networkBecomesIdle(vector<vector<int>> edges, vector<int>& patience) 
    {   
        int n =patience.size();
        vector<vector<int>> adj(n); vector<int> dis(n,INT_MAX);
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]); 
            adj[i[1]].push_back(i[0]);
        }
        dijkstra(n,adj,dis);
        int max_last_time = 0;
        for(int i=1;i<n;i++)
        {
            int more = (dis[i]%patience[i]==0? (dis[i]/patience[i]-1): dis[i]/patience[i]);
            int last_time = more*patience[i]+dis[i];
            max_last_time = max(max_last_time,last_time);
        }
      return max_last_time+1;
    }
};
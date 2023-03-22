class Solution {
public:
    int solve(vector<vector<pair<int, int>>> adj, vector<bool> visited)
    {
        int ans = INT_MAX;
        queue<int> q;

        q.push(1);
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();

            if(visited[curr] == false)
            {
                visited[curr] = true;
            }

            for(auto child: adj[curr])
            {
                if(!visited[child.first])
                {
                    q.push(child.first);
                    ans = min(ans, child.second);
                }
            }
        }
        
        return ans;
    }

    int minScore(int n, vector<vector<int>>& roads) {
        
        vector<vector<pair<int, int>>> adj(n+1, vector<pair<int, int>>());
        vector<bool> visited(n+1, false);
        int edge = roads.size();

        for(int i=0; i<edge; i++)
        {
            int source = roads[i][0];
            int desti = roads[i][1];
            int distance = roads[i][2];

            adj[source].push_back({desti, distance});
            adj[desti].push_back({source, distance});

        }

        return solve(adj, visited);
    }
};
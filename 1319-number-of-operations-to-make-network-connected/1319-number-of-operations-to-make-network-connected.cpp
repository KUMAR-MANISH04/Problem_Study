class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n);
        int cw = 0;   // count wires
        for(auto &c : connections)
        {
            adj[c[0]].push_back(c[1]);
            adj[c[1]].push_back(c[0]);
            cw++;
        }
        vector<bool> visited(n,false);
        int networks  = 0;  // isollated networks
        queue<int> q;
        for(int i = 0; i<n; i++)
        {
            if (visited[i]) continue;
            visited[i] = true;
            networks++;
            q.push(i);
            while(!q.empty())
            {
                int j = q.front();
                q.pop();
                for(auto i : adj[j])
                {
                    if (visited[i]) continue;
                    visited[i] = true;
                    // networks++;
                    q.push(i);
                }
            }
        }
        if (cw<n-1) return -1;  // not enough wires to connect n nodes
        return networks-1;  // wires reconnection to connect isolated networks
    }
};
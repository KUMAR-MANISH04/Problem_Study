class Solution {
public:
    Node* recurse(int t, int b, int l, int r, vector<vector<int>> &grid) {
        Node* n = new Node(false, true);
        if(l==r && r==t && t==b) {
            n->val = (grid[l][l]==1);
            return n;
        }
        int one = 0, zero = 0;
        int h = (t+b)/2;
        int w = (l+r)/2;
        for(int i = t; i <= b; i++) {
            for(int j = l; j <= r; j++) {
                if(grid[i][j] == 1) one++;
                if(grid[i][j] == 0) zero++;
            }
        }
        if(zero>0 && one>0) {
            n->isLeaf = false;
            n->topLeft = recurse(t, h, l, w, grid);
            n->topRight = recurse(t, h, w+1, r, grid);
            n->bottomLeft = recurse(h+1, b, l, w, grid);
            n->bottomRight = recurse(h+1, b, w+1, r, grid);
        }
        else if(zero) n->val = false;
        else n->val = true;
        return n;
    }
    Node* construct(vector<vector<int>>& grid) {
        int n = grid.size();
        return recurse(0, n-1, 0, n-1, grid);
    }
};
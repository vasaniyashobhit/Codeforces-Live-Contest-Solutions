#include <bits/stdc++.h>
using namespace std;

// By Shobhit Vasaniya

// codeforces contest div-2 1106

// Problem C

void dfs(int n, vector<int> &parent, vector<vector<int>> &nums, vector<vector<int>> &adj, int u)
{
    int m = adj[u].size();
    for (int i = 0; i < m; i++)
    {
        int v = adj[u][i];
        if (v == parent[u])
            continue;
        for (int j = 0; j < nums[u].size(); j++)
            nums[v].push_back(nums[u][j]);
        dfs(n, parent, nums, adj, v);
    }

    return;
}

vector<vector<int>> getLevels(int numNodes, int root, const vector<vector<int>> &adj)
{

    vector<vector<int>> levels;

    if (numNodes == 0 || root < 0 || root >= adj.size())
    {
        return levels;
    }

    queue<int> q;

    vector<bool> visited(adj.size(), false);

    q.push(root);
    visited[root] = true;

    while (!q.empty())
    {

        int levelSize = q.size();

        vector<int> currentLevel;

        for (int i = 0; i < levelSize; ++i)
        {
            int currentNode = q.front();
            q.pop();

            currentLevel.push_back(currentNode);

            for (int neighbor : adj[currentNode])
            {

                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        levels.push_back(currentLevel);
    }

    return levels;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> parent(n);
    vector<vector<int>> adj(n);
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        x--;
        parent[i] = x;

        adj[i].push_back(x);
        adj[x].push_back(i);
    }

    vector<vector<int>> nums(n);
    for (int i = 0; i < n; i++)
        nums[i].push_back(i);

    dfs(n, parent, nums, adj, 0);
    vector<vector<int>> levels = getLevels(n, 0, adj);

    long long ans = 0;

    for (int i = 0; i < levels.size(); i++)
    {
        vector<int> points;
        for(int j=0;j<levels[i].size();j++){
            int node = levels[i][j];
            for(int it=0;it<nums[it].size();it++){
                points.push_back(it);
            }
        }
        map<int,int> mp; // num,freq;
        

    }

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
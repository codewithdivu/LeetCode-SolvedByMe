class Solution {
private:
    void dfs(vector<vector<int>>& graph,int node,vector<int>&path,vector<vector<int>>& answer){
        int destination = graph.size()-1;
        if(node==destination){
            answer.push_back(path);
            return;
        }
        
        for(int item : graph[node]){
            path.push_back(item);
            dfs(graph,item,path,answer);
            path.pop_back();
        }
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>path;
        vector<vector<int>>answer;
        
        path.push_back(0);
        dfs(graph,0,path,answer);
        return answer;
    }
};
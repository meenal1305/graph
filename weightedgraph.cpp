vector<pair<int,int>>graph[10];
int visited[10];
void printgraph(int n)
{
    for(int i=1;i<n;i++)
    {
        cout<<i<<"=>";
        for(pair<int,int> x:graph[i])
        {
            cout<<x.first<<x.second<<" ";
            
        }
        cout<<endl;
    }
}


int main() {
    int n,e;
    cin>>n>>e;
    
    for(int i = 0;i<e;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        
        graph[a].push_back({b,w});
        graph[b].push_back({a,w});
    }
    
    printgraph(n);
}

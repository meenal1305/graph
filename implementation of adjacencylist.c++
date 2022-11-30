vector<int>graph[10];
int visited[10];
void printgraph(int n)
{
    for(int i=1;i<n;i++)
    {
        cout<<i<<"=>";
        for(int x:graph[i])
        {
            cout<<x<<"";
        }
    }
}


int main() {
    int n,e;
    cin>>n>>e;
    
    for(int i = 0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    printgraph(n);
}

const int N = 100;
int graph[N][N];
int visited[N];

void BFS(int start, int n)
{
    queue<int> q;
    q.push(start);
    
    while(q.size() > 0)
    {
        int curr = q.front();
        cout<<curr<<" ";

        visited[curr] = 1;
        for(int i = 1;i<=n;i++)
        {
            if(graph[curr][i] == 1 && visited[i] == 0)
            {
                q.push(i);
            }
        }
        
        q.pop();
        
    }
}

void printGraph(int n)
{
    for(int i =  1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main() {
    
    int n, e;
    cin>>n>>e;
    
    
    for(int i = 0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
   BFS(1,6);
    
    
}

//.........................................input...................................
6 5
1 6
1 5
2 5
4 5
3 5

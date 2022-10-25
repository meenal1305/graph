const int N=100;
int graph[N][N];
void printgraph(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main() {
    int n,e;
    cin>>n>>e;
    printgraph(n);
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a][b]=1;
        
    }
    cout<<endl;
    printgraph(n);
}
//.....................................input..........................................
6 11
1 2
1 3
1 5
2 4
3 5
3 6
4 6
5 1
5 3
6 4
6 5

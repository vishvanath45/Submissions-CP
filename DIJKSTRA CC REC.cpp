
#include<bits/stdc++.h>

using namespace std;

int n;


int minDistance(int dist[], bool sptSet[],int n)
{

    int min = INT_MAX, min_index;

    for (int v = 0; v < n; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}


void printPath(int parent[], int j)
{
    if (parent[j]==-1)
        return;

    printPath(parent, parent[j]);

    printf("%d ", j);
}


void dijkstra(int graph[][1000], int src,int ending,int n)
{
    int dist[n];  // The output array. dist[i] will hold
                  // the shortest distance from src to i

    // sptSet[i] will true if vertex i is included / in shortest
    // path tree or shortest distance from src to i is finalized
    bool sptSet[n];

    // Parent array to store shortest path tree
    int parent[n];

    // Initialize all distances as INFINITE and stpSet[] as false
    for (int i = 0; i < n; i++)
    {
        parent[src] = -1;
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }

    // Distance of source vertex from itself is always 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < n-1; count++)
    {
        // Pick the minimum distance vertex from the set of
        // vertices not yet processed. u is always equal to src
        // in first iteration.
        int u = minDistance(dist, sptSet,n);

        // Mark the picked vertex as processed
        sptSet[u] = true;

        // Update dist value of the adjacent vertices of the
        // picked vertex.
        for (int v = 0; v < n; v++)
            {
            // Update dist[v] only if is not in sptSet, there is
            // an edge from u to v, and total weight of path from
            // src to v through u is smaller than current value of
            // dist[v]
            if (!sptSet[v] && graph[u][v] && dist[u] + graph[u][v] < dist[v])
            {
                parent[v]  = u;
                dist[v] = dist[u] + graph[u][v];
            }
            }
    }

    // print the constructed distance array


    //printSolution(dist, n, parent);


    cout<<dist[ending]<<"\n";

    cout<<src<<" ";

    printPath(parent, ending);
    cout<<"\n";


}

int main()
{

int t;
cin>>t;

while(t--)
{

cin>>n;

int graph[1000][1000]={0};

for(int i =0 ;i <n;i++)
    for(int j =0; j <n; j ++)
    cin>>graph[i][j];

    int src,ending;

    cin>>src>>ending;


    dijkstra(graph,src,ending,n);
 }

    return 0;
}

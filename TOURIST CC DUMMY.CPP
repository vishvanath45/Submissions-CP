// A C++ program print Eulerian Trail in a given Eulerian or Semi-Eulerian Graph
#include <iostream>
#include <string.h>
#include <algorithm>
#include <list>
using namespace std;
int a,b,f=1;


class Graph
{
  int V;
  list<int> *adj;
public:

  Graph(int V)  { this->V = V;  adj = new list<int>[V];  }
  ~Graph()      { delete [] adj;  }

  void addEdge(int u, int v) {  adj[u].push_back(v); adj[v].push_back(u); }
  void rmvEdge(int u, int v);

  void printEulerTour();
  void printEulerUtil(int s);

  bool isConnected();

    int isEulerian();
    void DFSUtil(int v, bool visited[]);
  int DFSCount(int v, bool visited[]);


  bool isValidNextEdge(int u, int v);
};

void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;

    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}

bool Graph::isConnected()
{
    // Mark all the vertices as not visited
    bool visited[V];
    int i;
    for (i = 0; i < V; i++)
        visited[i] = false;

    // Find a vertex with non-zero degree
    for (i = 0; i < V; i++)
        if (adj[i].size() != 0)
            break;

    // If there are no edges in the graph, return true
    if (i == V)
        return true;

    // Start DFS traversal from a vertex with non-zero degree
    DFSUtil(i, visited);

    // Check if all non-zero degree vertices are visited
    for (i = 0; i < V; i++)
       if (visited[i] == false && adj[i].size() > 0)
            return false;

    return true;
}


int Graph::isEulerian()
{
    // Check if all non-zero degree vertices are connected
    if (isConnected() == false)
        return 0;

    // Count vertices with odd degree
    int odd = 0;
    for (int i = 0; i < V; i++)
        if (adj[i].size() & 1)
            odd++;

    // If count is more than 2, then graph is not Eulerian
    if (odd > 2)
        return 0;

    // If odd count is 2, then semi-eulerian.
    // If odd count is 0, then eulerian
    // Note that odd count can never be 1 for undirected graph
    return (odd)? 1 : 2;
}

void Graph::printEulerTour()
{

  int u = 0;
  for (int i = 0; i < V; i++)
      if (adj[i].size() & 1)
        {   u = i; break;  }

        cout<<"nfiuef\n";

  // Print tour starting from oddv
  printEulerUtil(u);
  cout << endl;
}


void Graph::printEulerUtil(int u)
{

  list<int>::iterator i;
  for (i = adj[u].begin(); i != adj[u].end(); ++i)
  {
      int v = *i;



      if (v != -1 && (isValidNextEdge(u, v)))
      {
      if(f==1)
      {a=u;
      f=0;
      }


        b=v;

        int xx=v;

          cout << u << " " << v << "\n";

          rmvEdge(u, v);


          printEulerUtil(v);


      }
  }
}


bool Graph::isValidNextEdge(int u, int v)
{

  int count = 0;
  list<int>::iterator i;
  for (i = adj[u].begin(); i != adj[u].end(); ++i)
     if (*i != -1)
        count++;
  if (count == 1)
    return true;


  bool visited[V];
  memset(visited, false, V);
  int count1 = DFSCount(u, visited);

  rmvEdge(u, v);
  memset(visited, false, V);
  int count2 = DFSCount(u, visited);

  addEdge(u, v);


  return (count1 > count2)? false: true;
}


void Graph::rmvEdge(int u, int v)
{

  list<int>::iterator iv = find(adj[u].begin(), adj[u].end(), v);
  *iv = -1;


  list<int>::iterator iu = find(adj[v].begin(), adj[v].end(), u);
  *iu = -1;
}


int Graph::DFSCount(int v, bool visited[])
{

  visited[v] = true;
  int count = 1;


  list<int>::iterator i;
  for (i = adj[v].begin(); i != adj[v].end(); ++i)
      if (*i != -1 && !visited[*i])
          count += DFSCount(*i, visited);

  return count;
}


int main()
{

  /*Graph g1(4);
  g1.addEdge(0, 1);
  g1.addEdge(0, 2);
  g1.addEdge(1, 2);
  g1.addEdge(2, 3);
  g1.printEulerTour();
*/
/*cout<<"$#$% "<<a<<" "<<b<<"\n";
  if(a==b)
  {
  cout<<"NO\n";
  f=1;

  }
  */

  /*Graph g2(3);
  g2.addEdge(0, 1);
  g2.addEdge(1, 2);
  g2.addEdge(2, 0);
  g2.printEulerTour();
*/int nn;

cin>>nn;
  Graph g3(nn);
  int nnn=nn;
  while(nnn--)
  {int pp,qq;
  cin>>pp>>qq;
  g3.addEdge(pp,qq);
  }

  int res = g3.isEulerian();
    if (res == 0)
        cout << "NO\n";
    else if (res == 1)
        cout << "NO\n";
    else
        {cout << "YES\n";

        g3.printEulerTour();
        cout<<"fuck happens\n";
        }





  /*  cout<<a<<" "<<b<<"\n";
  if(a!=b)
  {
  cout<<"NO\n";
  f=1;

  }
  else
  cout<<"YES\n";
  */
  return 0;
}


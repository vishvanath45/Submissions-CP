#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define trace(x) cerr << #x << ": " << x << '\n'
#define trace2(x,y) cerr << #x << ": " << x << " | " << #y << ": " << y << '\n';
#define trace3(x,y,z) cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << '\n';
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define sz(v) ((int)v.size())
#define clr(v,x) memset(v, x, sizeof(v))
#define REP(i,x,y) for(int (i)=(x);(i)<(y);(i)++)
#define RREP(i,x,y) for(int (i)=(x);(i)>=(y);(i)--)
#define mp make_pair
#define mt(x,y,z) make_pair(mp(x,y),z)
#define fst first
#define snd second
typedef long long ll;
typedef pair<ll,ll> ii;
typedef long double ld;
typedef pair<ii, ll> tri;
#define itm1 fst.fst
#define itm2 fst.snd
#define itm3 snd
//#define N 100002
 
inline ll ma(ll a, ll b){ return ((a-b>0)? a:b);}
inline ll mi(ll a, ll b){return ((a-b>0)? b:a);}
 
const int MAX = 1e5 + 2;
const int LGMAX = 21;
//LCA construction in O(n*log(n)) with O(log(n)) queries.
struct LCATree{
  int n;
  vector<int> adj[MAX];
  int p[MAX][LGMAX];  // 2^j ancestor of node i
  int L[MAX];         // Depth of node i
  int q[MAX];         // (Queue used internally).
 
  LCATree(){}
  LCATree(int N):n(N){}
 
  void dfs(int u, int h){
      L[u] = h;
      REP(i,0,sz(adj[u])){
          int v = adj[u][i];
          if (v != p[u][0]) {
              p[v][0] = u;            
              dfs(v, h+1);
          }
      }
  }
  void buildlca(int r){
    REP(i,0,n) REP(pw,0,LGMAX) p[i][pw] = -1;
      dfs(r, 0);
    for (int pw = 1; (1<<pw) < n; pw++){
          REP(i,0,n) if (p[i][pw-1] != -1) p[i][pw] = p[p[i][pw-1]][pw-1];
    }
  }
  int lca(int u, int v){
    if (L[u] < L[v]) swap(u,v);
    for (int pw = LGMAX-1; pw >= 0; pw--)
      if (L[u] - (1<<pw) >= L[v]) 
        u = p[u][pw];
    if (u == v) return u;
    for (int pw = LGMAX-1; pw >= 0; pw--){
      if (p[u][pw] != p[v][pw]) {
        u = p[u][pw];
        v = p[v][pw];
      }
    }
    return p[u][0];
  }
}T;
 
#define N 100002
 
struct CD{
  vector< int > graph[N];
  int sub[N],p[N];
  //sub[i]: size del nodo i luego de descomponer el tree
  //p[i]: padre del nodo i luego de descomponer el tree
  //notar que el padre del centroid es -2
  // el tree es 1 ó 0 base
  //para inicializar addEddge(a,b);
  //para construir el centroid tree, solo llamar init(root); root: root del tree
  void addEdge(int a, int b){
    graph[a].pb(b);
    graph[b].pb(a);
  }
  inline void dfs(int cur, int parent){
    sub[cur] = 1;
    for(int i = 0; i < sz(graph[cur]); ++i){
      int to = graph[cur][i];
      if(to != parent && p[to] == -1){
        dfs(to, cur);
        sub[cur] += sub[to];
      }
    }
  }
  inline void decompose(int cur, int parent, int sb, int prevc){
    for(int i = 0; i < sz(graph[cur]); ++i){
      int to = graph[cur][i];
      if(to != parent && p[to] == -1 && (2 * sub[to] > sb)){
        decompose(to, cur, sb, prevc);
        return;
      }
    }
    p[cur] = prevc;
    for(int i = 0; i < sz(graph[cur]); ++i){
      int to = graph[cur][i];
      if(p[to] == -1){
        dfs(to, - 1);
        decompose(to, cur, sub[to], cur);
      }
    }
  } 
  inline void init(int start){
    for(int i = 0; i < N; ++i) p[i] = -1;
    dfs(start, - 1);
    decompose(start, -1, sub[start], -2);
  }
}cd;
 
vector<int> adj[N];
int d[N];
inline void make(int &u, int x, int depth){
  d[u]=depth;
  for(auto v :adj[u]) if(v!=x) make(v,u,depth+1);
}
 
set<int> s;
 
/*inline void solve(ll nod){
  queue<ll >q;
  q.push(nod);
  while(sz(nod)){
    ll ts=q.top(); q.pop();
    if(vis[ts]==1) continue;
    vis[ts]=1;
    for(auto xd: )
  }
}*/
int main() {
  fastio;

  int n; cin>>n;
  //CD cd; //cd.n=n;
  REP(i,0,n-1) {
    ll a,b; cin>>a>>b;
    cd.addEdge(a,b);
  }
  cd.init(1);
  int pa, root;
  REP(i,1,n+1) {
    pa=cd.p[i];
    if(pa==-2) root=i;
    if(pa!=-2) { 
      adj[i].pb(pa);
      adj[pa].pb(i);
    }
  }
  make(root,0,1);
  T.n = n;
  ll flag=1;
  REP(i,1,n+1){
    ll val=sz(cd.graph[i]);
    if(val<3 && val!=1) flag=0; break;
    //REP(j,0,sz(cd.graph[i])){
      //T.adj[i-1].pb(cd.graph[i][j]-1);
      //cout << i-1 << " " << cd.graph[i][j] -1 << endl;
    //}
  }
 
  REP(i,1,n+1){
  	REP(j, 0, sz(cd.graph[i])){
  		T.adj[i-1].pb(cd.graph[i][j]-1);
  	}
  }
  T.buildlca(root-1);
  if(flag) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  //cout << "Root:" << root << endl;
  /*T.buildlca(root-1);
  solve(root-1);
  int m; cin >> m;
  REP(i,0,m){
    int a,b; cin >> a >> b;
    a --; b --;
  //  cout << a << " " << b << endl;
  //  cout << T.lca(a,b) << endl;
    s.insert(T.lca(a,b) + 1);
  }
  cout << sz(s) << endl;
  for(auto x: s) cout << x << " ";
  cout << endl;
  */
  return 0;
}
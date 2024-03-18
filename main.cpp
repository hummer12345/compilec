#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
const long long INF = 1LL<<60;

#pragma macro region
void cint(){}
template <class Head,class... Tail>
void cint(Head&& head,Tail&&... tail){
    cin>>head;
    cint(move(tail)...);
}
#define int long long
#define icin(...) int __VA_ARGS__;cint(__VA_ARGS__);
#define scin(...) string __VA_ARGS__;CINT(__VA_ARGS__);
#define vcin(x) for(auto&youso_: (x) )cin>>youso_;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define all(a) (a).begin(), (a).end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define co(x) cout<<(x);
#define coel(x) cout<<(x)<<endl;
#define scout(x) cout<<(x)<<" ";
#define pb(a) push_back(a);
#pragma endregion

int modPow(int a, int b, int mod) { int result = 1; while (b > 0) { if (b & 1) result = result * a % mod; a = a * a % mod; b >>= 1; } return result; }
map<int, int> primeFactorization1(int K) { map<int, int> factors; for (int i = 2; i * i <= K; i++) { while (K % i == 0) { factors[i]++; K /= i; } } if (K > 1) factors[K]++; return factors; }
void primeFactorization2(int n, map<int, int>& factors) { while (n % 2 == 0) { factors[2]++; n /= 2; } for (int i = 3; i * i <= n; i += 2) { while (n % i == 0) { factors[i]++; n /= i; } } if (n > 2) factors[n]++; }
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return a * (b / gcd(a, b)); }
int binomial_coefficient(int n, int k) { if (k > n - k) k = n - k; int result = 1; for (int i = 0; i < k; ++i) { result *= (n - i); result /= (i + 1); } return result; }
vector<int> sieveOfEratosthenes(int n) { vector<bool> prime(n + 1, true); vector<int> primes; prime[0] = prime[1] = false; for (int p = 2; p * p <= n; p++) { if (prime[p]) { for (int i = p * p; i <= n; i += p) prime[i] = false; } } for (int i = 2; i <= n; i++) { if (prime[i]) primes.push_back(i); } return primes; }
class UnionFind { private: vector<int> parent, size; public: UnionFind(int n) : parent(n), size(n, 1) { for (int i = 0; i < n; ++i) parent[i] = i; } int find(int x) { return parent[x] == x ? x : parent[x] = find(parent[x]); } void unite(int x, int y) { x = find(x); y = find(y); if (x != y) { if (size[x] < size[y]) swap(x, y); parent[y] = x; size[x] += size[y]; } } bool same(int x, int y) { return find(x) == find(y); } int getSize(int x) { return size[find(x)]; } };
class TopologicalSort { private: vector<vector<int>> adj; vector<int> in_degree; priority_queue<int, vector<int>, greater<int>> pq; vector<int> order; public: TopologicalSort(int n) : adj(n), in_degree(n, 0) {} void addEdge(int u, int v) { adj[u].push_back(v); in_degree[v]++; } vector<int> sort() { for (int i = 0; i < in_degree.size(); i++) if (in_degree[i] == 0) pq.push(i); while (!pq.empty()) { int u = pq.top(); pq.pop(); order.push_back(u); for (int v : adj[u]) if (--in_degree[v] == 0) pq.push(v); } return order.size() == adj.size() ? order : vector<int>(); } };

signed main() {
    
}

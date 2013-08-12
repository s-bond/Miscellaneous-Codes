#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<bool> vb;
typedef pair<int,int> pii;

void dijkstra(vii &G, int N, int S, int D, vi &dist, vii &prev) {
	vb in(N, false);
	priority_queue<pii> pq;
	dist[S] = 0;
	pq.push(make_pair(0,S));
	in[S] = true;
	while (!pq.empty()) {
		pii p = pq.top();
		pq.pop();
		int u = p.second;
		in[u] = true;
		if (u == D) break;
		for (int v = 0; v < N; v++) {
			if (!in[v] && G[u][v] != -1) {
				int alt = dist[u] + G[u][v];
				if (dist[v] == -1) {
					dist[v] = alt;
					prev[v].push_back(u);
					pq.push(make_pair(-alt,v));
				} else if (alt < dist[v]) {
					dist[v] = alt;
					prev[v].clear();
					prev[v].push_back(u);
					pq.push(make_pair(-alt,v));
				} else if (alt == dist[v]) {
					prev[v].push_back(u);
					pq.push(make_pair(-alt,v));
				}
			}
		}
	}
}

void remove(vii &G, vii &prev, int v) {
	for (int i = 0; i < prev[v].size(); i++) {
		int u = prev[v][i];
		//cerr << "Removing " << u << " " << v << " " << G[u][v] << endl;
		G[u][v] = -1;
		remove(G, prev, u);
	}
}

int main(void) {
	int t, U, V, P, N, M, S, D;
	while (true) {	
        cin >> N >> M;
		if(N==0)break;
		cin >> S >> D;		
		vii G(N+2, vi(N+2, -1));
		for (int m = 0; m < M; m++) {
			cin >> U >> V >> P;
			G[U][V] = P;
		}
		vi dist1(N+2, -1);
		vii prev1(N+2, vi(0));
		dijkstra(G, N, S, D, dist1, prev1);
		remove(G, prev1, D);
		vi dist2(N, -1);
		vii prev2(N, vi(0));
		dijkstra(G, N, S, D, dist2, prev2);
		cout << dist2[D] << endl;
	}
	return 0;
}

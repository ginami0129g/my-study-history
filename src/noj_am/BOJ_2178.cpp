#include <iostream>
#include <queue>
using namespace std;

queue<pair<int, int> > q;
int v[101][101], d[] = {0, 0, -1, 1};
int N, M;

int main(void) {
  cin >> N >> M;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      scanf("%1d", &v[i][j]);
    }
  }
  q.push(make_pair(0, 0));
  v[0][0] = 0;
  while (!q.empty()) {
    int x = q.front().first, y = q.front().second;
    for (int i = 0; i < 4; ++i) {
      int nx = x + d[i], ny = y + d[3 - i];
      if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
      if (v[nx][ny] == 1) {
        q.push(make_pair(nx, ny));
        v[nx][ny] = v[x][y] + 1;
      }
    }
    q.pop();
  }
  cout << v[N - 1][M - 1] + 1 << '\n';
}
#include <algorithm>
#include <iostream>
#define MAX 1000000
using namespace std;

int main(void) {
  int N;
  int num[MAX] = {0};
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> N;
  for (int i = 0; i < N; ++i) {
    cin >> num[i];
  }
  sort(num, num + N);
  for (int i = 0; i < N; ++i) {
    cout << num[i] << '\n';
  }
}
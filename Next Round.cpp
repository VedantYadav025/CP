#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n,k; cin >> n >> k;
  vector<int> score(n);
  for (int i = 0; i < n; i++){
    cin >> score[i];
  }
  int ans = 0;
  for (int i = 0 ; i < n; i++){
    if (score[i] >= score[k - 1] && score[i] > 0) ans++;
  }
  cout << ans << "\n";
  return 0;
}

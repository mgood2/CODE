#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

using namespace std;

char s[1234567];

void solve(){
  int N;
  cin >> N;
  
  vector<int> res;
  REP(i,10) {
    res.push_back(i);
  }
  REP(i,N) cout << res[i] << " \n"[i == N-1];
}


int main() {
  int T;
  cin >> T;
  for (int cas = 1; cas <= T; ++cas) {
    cout << "Case $" << cas << ": ";
    solve();
  }
  return 0;
}


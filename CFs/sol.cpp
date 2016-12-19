#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("in", "r", stdin);
  freopen("out", "w", stdout);
  int n,m,a;
  int ans = 0;
  scanf("%d %d %d", &n, m, a);
  ans += ceil((double) m / (double) a) * ceil((double) n / (double) a);
  printf("%d\n", ans);
  
  return 0;
}

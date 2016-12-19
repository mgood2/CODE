#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,m,a;
  int ans = 0;
  scanf("%d %d %d", &n, &m, &a);
  ans = ceil((double) m / (double) a) * ceil((double) n / (double) a);
  printf("%d", ans);

  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("in", "r", stdin);
  freopen("out", "w", stdout);
  int tt;
  scanf("%d", &tt);
  for (int qq = 1; qq <= tt; qq++) {
    printf("Case #%d: ", qq);
    int n;
    int elem;
    scanf("%d", &n);
    int ans = 0;
    
    int ar[n];  
    vector<int> arvec;
    vector<vector<int>> totvec;
    int tot[2*n-1];
    for (int i = 0; i < 2*n-1; i++){
      for (int j = 0; j < n; j++){
        
        scanf("%d", &elem);
        arvec.push_back(elem);
      }
      totvec.push_back(arvec);

    } 
    for (int i =0; i < n; i++){
      for (int j = 0; 
    }
    cout<< totvec << endl;
  }
  return 0;
}


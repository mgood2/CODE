#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("in", "r", stdin);
  freopen("out", "w", stdout);
  int tt;
  scanf("%d", &tt);
  for (int qq = 1; qq <= tt; qq++) {
    printf("Case #%d: ", qq);
    int K,C,S;
    scanf("%d %d %d", &K, &C, &S);
    int pos = ceil(pow(2,K));
    int size = ceil(pow(K,C));
    int sq[pos];

    if( S > (K-C) ){          
     
     //cout << K-C+1 << endl;
     if(K == 1){
       cout << "1" << endl;
     } else if(K-C <= 0){
       cout << "2" << endl;
     } else {
       for(int i = 0 ; i < K-C+1; i++){
         for(int j = 0; j < size; j++){
           sq[j] = pos/2;
           cout << sq[j];
         }
         
         cout << "IDK ";
         //cout << 2 + (K+1)*i << " ";
       } cout << endl;
     }
    } else {
    
     cout << "IMPOSSIBLE" << endl;
    }
    cout << endl;
    
    }
  return 0;
}


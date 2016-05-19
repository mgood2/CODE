#include <bits/stdc++.h>

using namespace std;

int b;
             

void method(vector<int> x){
  for(int j =0; j < b; j++){
          
    cout << x[j];
   
  }
}

int main() {
  freopen("in", "r", stdin);
  freopen("out", "w", stdout);
  int tt;
  scanf("%d", &tt);
  for (int qq = 1; qq <= tt; qq++) {
    printf("Case #%d: ", qq);
    int m;
    scanf("%d %d", &b, &m);
    if(m > pow(2,b-2)){
    cout << "IMPOSSIBLE" << endl;
    continue;    
    }
    else{
      cout << "POSSIBLE" << endl;

      vector<int> bi(b);
     
    
      for( int i = 0; i < m; i++){
        method(bi);
        cout << endl;
      }
      
      cout << string(b,'0') << endl;
    }
  }            
  return 0;
}


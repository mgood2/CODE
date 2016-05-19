#include <bits/stdc++.h>

using namespace std;



int main() {
  freopen("in", "r", stdin);
  freopen("out", "w", stdout);
  int tt;
  scanf("%d", &tt);
  for (int qq = 1; qq <= tt; qq++)
  {
    printf("Case #%d: ", qq);
    int c;
    int items;
    int p[2345];
    int sum;
    int ans1, ans2;
    scanf("%d", &c);
    scanf("%d", &items);
    for (int i=0  ; i < items; i++)
    {
      scanf("%d", &p[i]);
    }
    for (int i =0 ; i < items; i++)
    {
      for (int j = 0 ; j < items; j++)
      {
        if ( i != j)
        {
          sum = p[i] + p[j];
          if ( c == sum)
          {
            ans1 = j+1;
            ans2 = i+1;
          }
        }
      }   
    }


    printf("%d %d\n", ans1,ans2);
  }
  return 0;
}


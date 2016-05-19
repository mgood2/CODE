#include <bits/stdc++.h>

using namespace std;

vector<string> split(string str, char delimiter)
{
  vector<string> internal;
  stringstream ss(str);
  string tok;

  while(getline(ss, tok, delimiter))
  {
    internal.push_back(tok);
  }

  return internal;
}

char s[1234];


int main() 
{
  freopen("in", "r", stdin);
  freopen("out", "w", stdout);
  int tt;
  int tmp;
  scanf("%d", &tt);
  gets(s);
  for (int qq = 1; qq <= tt; qq++) {
    printf("Case #%d: ", qq);

    
    stringstream ss;
    
    gets(s);
   
    for(int j = 0; s[j] ; j++) ss << s[j]; 
    
    vector<string> w = split(ss.str(), ' ');    
    for(int i = w.size()-1; i >= 0; --i)
    {
      printf("%s ", w[i].c_str());
    }
   
    printf("\n");
 
  }
  return 0;
}


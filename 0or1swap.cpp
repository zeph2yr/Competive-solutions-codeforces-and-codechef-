#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int p[10000];
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  int q[10000];
  for (int i = 0; i < n; i++) {
    q[i] = p[i];
  }
  sort(q,q+n);

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (q[i] != p[i]) {
      count++;
    }
    if (count > 2) {
      break;
    }
  }

  if(count < 3){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }

}

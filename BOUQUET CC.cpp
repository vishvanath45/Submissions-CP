/*= compile: g++ -std=c++11 -Wall $src -o $exe =*/
/*= run: $exe < /home/vishva_nath/input_bou.txt =*/
// BOUQUET CC
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
  ll int arr[3][3];
  ll int sum[6];

  ll int knp;

  ll int t;
  cin >> t;

  while (t--) {
    ll int maxodd = -1;

    ll int temp;

    ll int i, j;

    for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
        cin >> temp;
        arr[i][j] = temp;
        if (temp % 2 != 0) {
          if (temp > maxodd) {
            maxodd = temp;
          }
        }
      }
    }
    ll int pos = 0;
    for (i = 0; i < 3; i++) {
      ll knp = 0;
      for (j = 0; j < 3; j++) {
        knp += arr[i][j];
      }
      sum[pos] = knp;
      pos++;
    }
    pos = 3;
    for (i = 0; i < 3; i++) {
      knp = 0;
      for (j = 0; j < 3; j++) {
        knp += arr[j][i];
      }
      sum[pos] = knp;
      pos++;
    }

    sort(sum, sum + 6);

    ll int answer = -1;

    if (sum[5] % 2 != 0) {
      answer = sum[5];
    } else {
      answer = sum[5] - 1;
    }

    if (answer > 0 || maxodd > 0) {
      if (answer > maxodd) {
        cout << answer << "\n";
      } else
        cout << maxodd << "\n";
    } else
      cout << "0\n";
  }
  return 0;
}

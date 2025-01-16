#include <bits/stdc++.h>
#define ariful                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define lb lower_bound
#define ub upper_bound
#define ll long long
#define vi vector<long long>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define line "\n"
#define shesh return 0;
using namespace std;
int main()
{
  ariful
      int t;
  cin >> t;
  while (t--)
  {
    int n, c = 0;
    cin >> n;
    for (int i = 1; i * i <= n; i++) // o(n) sqrt o(logn)
    {
      if (n % i == 0)
      {
        c++;
        if (i * i != n)
          c++;
      }
    }
    cout << c << line;
  }
  shesh
}
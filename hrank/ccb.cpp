#include <bits/stdc++.h>
using namespace std;

#define inf 1e9
#define mod 1000000007
typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<float> vf;
typedef vector<ld> vd;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pdd;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define vec(x) vector<x>
#define sz(a) int((a).size())
#define get(x) cin >> x
#define put(x) cout << x
#define pls(x) cout << x << ' '
#define pln(x) cout << x << "\n"
// #define f(i, a, b) for (int i = a; i < b; i++)
// #define F(i, a, b) for (int i = b - 1; i >= a; i--)
#define rep(i, begin, end)                                                     \
  for (__typeof(end) i = (begin) - ((begin) > (end));                          \
       i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

#define vput(a)                                                                \
  rep(i, 0, a.z) pls(a[i]);                                                    \
  nl;
#define vget(v) rep(i, 0, v.z) get(v[i]);
#define vsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define vuni(v) v.erase(unique(all(v)), v.end())
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define vmin(v) *min_element(all(v))
#define vmax(v) *max_element(all(v))
#define total(v) accumulate(all(v), ll(0))
#define tr(c)                                                                  \
  for (auto it : (c)) {                                                        \
    cout << it << " ";                                                         \
  }
#define present(c, x) ((c).find(x) != (c).end())
#define cpresent(c, x) (find(all(c), x) != (c).end())
#define watch(x) cerr << (#x) << " is " << (x) << endl
#define eb(a, b) (a).emplace_back(b)

#define bs(v, x) binary_search(all(v), x)
#define parray(a, n)                                                           \
  rep(i, 0, n) pls(a[i]);                                                      \
  nl;
#define ppair(x)                                                                         \
  cout                                                                                   \
      << x.first                                                                         \
      << 'cond line of each testcase contains nn space-separated integers a1,a2,…,an ' \
      << x.second << "\n";
#define vp(x, y) vector<pair<x, y>>
#define p(x, y) pair<x, y>
#define endl '\n'
#define nl cout << '\n';
#define w(a) while (a--)
#define wh(a) while (a)

ll maxi = LLONG_MAX;
ll mini = LLONG_MIN;

void fast() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
// macro to debug function
#define error(args...)                                                         \
  {                                                                            \
    string _s = #args;                                                         \
    replace(_s.begin(), _s.end(), ',', ' ');                                   \
    stringstream _ss(_s);                                                      \
    istream_iterator<string> _it(_ss);                                         \
    err(_it, args);                                                            \
  }

void err(istream_iterator<string> it) {}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
  cout << *it << " = " << a << "\n";
  err(++it, args...);
}

#define con continue
#define bk break
#define ret return
#define fl flush
#define setpr fixed << setprecision
#define gl(a) getline(cin, a)
#define ppb pop_back
#define pow2(x) ((x) * (x))
#define modnum(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define pq priority_queue
#define fl flush

int main() {
  fast();
  int tc;
  cin >> tc;
  w(tc) {
    int n, val = 0, next, nextLine, res = 1, temp;
    cin >> n;
    temp = 0;
    for (int i = 0; i < n; i++) {
      for (int j = n - 1; j >= 0; j--) {
        cin >> val;
        if (temp == i && i != 0) {
          if (val != nextLine) {
            res = 0;
          }
        }
        if (i == 0 && j == 0) {
          next = nextLine = !val;
        }
        if (val == next && j != 0 && temp != i) {
          next = !val;
          continue;
        } else {
          res = 0;
        }
      }
      temp++;
      nextLine = !nextLine;
    }
    if (res)
      pln("Yes");
    else
      pln("No");
  }
  return 0;
}
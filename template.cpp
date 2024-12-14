#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define mii map<int, int>
#define si set<int>
#define sc set<char>



#define FOR(i,s,e) for(long long int i=s;i<e;i++)
#define FORN(i, n) for(long long int i = 0; i < n; i++)
#define ROF(i,e,s) for(long long int i=e-1;i>=s;i--)
#define sz(x) (int)(x).size()
#define all(a) (a).begin(),(a).end()
#define each(i, a) for(auto i: a)
#define pb push_back
#define eb emplace_back

template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

template<class T>
void print_p(pair<T, T> &v) {cout << "{" << v.f << "," << v.s << "}\n";}

ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
ll mod = 998244353;
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);

    int t;
    cin >> t;
    FORN(tt, t)
    {

    }
}
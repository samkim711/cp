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

ll gcd(ll a,ll b) {
    if (b==0) return a; return gcd(b, a%b);
}
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
        int n;
        cin >> n;

        int q;
        cin >> q;

        vi v(n);
        FORN(i, n)
        {
            int x;
            cin >> x;
            v[i] = x;
        }

        vi d(n - 1);
        FORN(i, n - 1)
        {
            d[i] = abs(v[i + 1] - v[i]);
        }

        vi two = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144};

        vector<vector<int>> g(n - 1, vector<int>(19, 0));
        for (int i = 0; i < n - 1; ++i)
        {
            g[i][0] = d[i];
        }

        for (int j = 1; j < 19; ++j)
        {
            for (int i = 0; i < n - 1; ++i)
            {
                if (i + two[j] - 1 < n - 1 )
                {
                    g[i][j] = gcd(g[i][j - 1], g[i + two[j - 1]][j - 1]);
                }
            }
        }
        //cout << gcd(0, 4) << endl;
//        for (int i = 0; i < n - 1; ++i)
//        {
//            cout << g[i][1] << " ";
//        }
        //cout << endl;
        for (int qq = 0; qq < q; ++qq)
        {
            int a, b;
            cin >> a >> b;
            --a;
            --b;
            if (a == b)
                cout << 0 << " ";
            else
            {
                //cout << a << " " << b << endl;
                --b;
                int dif = b-a+1;
                int gd = 0;
                int idx = a;
                int pow = 0;
                while(dif > 0)
                {
                    if (dif % 2 == 1)
                    {
                        //cout << gd << " " << idx << " " << pow << " " << g[idx][pow] << endl;
                        gd = gcd(gd, g[idx][pow]);
                        idx += two[pow];
                    }
                    ++pow;
                    dif = dif / 2;
                }
                cout << gd << " ";
            }
        }
        cout << endl;


    }
}
#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define mod9 998244353
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(),(v).end()
#define tests int t; cin>>t; while(t--)

typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<vl> vvl;
typedef vector<vi> vvi;
typedef vector<bool> vb;

void io(){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
template<typename K>unordered_set<K>hashset(){unordered_set<K>s;s.max_load_factor(0.25);s.reserve(512);return s;}
template<typename K,typename V>unordered_map<K,V>hashmap(){unordered_map<K,V>m;m.max_load_factor(0.25);m.reserve(512);return m;}

const ll inf = 10000000000000ll;

int main() {
    io();
    tests {
        int n; cin >> n;
        
        int odd=0;
        int evn=0;

        for (int i=0; i<n; i++) {
            int t; cin >> t;
            if (t%2==0) {
                evn++;
            } else {
                odd++;
            }
        }

        if (odd == 0 || (evn == 0 && odd%2 == 0)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
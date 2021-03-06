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
typedef pair<string,string> ps;
typedef vector<bool> vb;

void io(){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
template<typename K>unordered_set<K>hashset(){unordered_set<K>s;s.max_load_factor(0.25);s.reserve(512);return s;}
template<typename K,typename V>unordered_map<K,V>hashmap(){unordered_map<K,V>m;m.max_load_factor(0.25);m.reserve(512);return m;}

const ll inf = 10000000000000ll;

char desired(char a, char b) {
    if (a==b) {
        return a;
    } 
    return (char)(236-a-b);
}

int main() {
    io();

    int n; int k;
    cin >> n >> k;

    auto pos = hashmap<string,int>();
    auto sets = hashset<string>();

    int ans=0;

    vs cards(n); 
    for (int i=0; i<n; i++) {
        cin >> cards[i];
    }

    sort(cards.begin(), cards.end());

    for (int i=0; i<n; i++) {
        pos[cards[i]] = i;
    }

    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {

            string a = cards[i];
            string b = cards[j];
            string c; 
            for (int q=0; q<k; q++) {
                c.pb(desired(a[q], b[q]));
            }

            if (pos.find(c) != pos.end()) {

                bool ab = sets.find(a+b) != sets.end();
                bool ac = sets.find(a+c) != sets.end();
                bool bc = sets.find(b+c) != sets.end();

                if (!ab && !ac && !bc) {
                    sets.insert(a+b);
                    sets.insert(a+c);
                    sets.insert(b+c);
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define mp make_pair
#define pb push_back

#define FAR(i, a, b) for (int i=a; i<b; i++)
#define FOR(i, a) for (int i=0; i<a; i++)

#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define endl "\n"

int main () {
    ifstream cin("reststops.in");
    int L, N, F, B;
    cin >> L >> N >> F >> B;
    vector<pair<int, int> > stops;
    stops.resize(N);
    FOR(i, N) {
        cin >> stops[i].second >> stops[i].first;
    }
    sort(stops.begin(), stops.end());
    for(auto x : stops) {
        cout << x.first << x.second << endl;
    }
    int currentTime = 0, currentB = 0, currentJ = 0;
    for(auto x : stops) {
        currentTime = x.second;
        
    }
    return 0;
}

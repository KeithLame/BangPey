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

int N;
vector<pair<int, int> > inp;
vector<pair<int, int> > interest;
int main () {
    ifstream cin("reduce.in");
    cin >> N;
    inp.resize(N);
    FOR(i, N) {
        cin >> inp[i].first >> inp[i].second;
    }
    sort(inp.begin(), inp.end());
    FOR(i, 3) {
        interest.pb(inp[i]);
        interest.pb(inp[N - i - 1]);
    }

    sort(inp.begin(), inp.end(), );
    FOR(i, 3) {
        interest.pb(inp[i]);
        interest.pb(inp[N - i - 1]);
    }


    return 0;

}

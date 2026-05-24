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

int N, K;
vi cowpos;

bool solve(int R) {
    int currentStep = cowpos[0];
    FOR(i, K) {
        currentStep += 2 * R;
        FOR(j, N) {
            if(cowpos[j] > currentStep) {
                // cout << "too large" << endl;
                currentStep = cowpos[j];
                break;
            }
            // cout << i << ":" << j << ":" << currentStep << ":" << cowpos[j] << endl;
        }
    }
    if(currentStep < cowpos[N - 1]) {
        return false;
    }
    return true;
}

int bsearch(int lo, int hi) {
    for(hi ++; lo < hi; ) {
        int mid = lo+(hi-lo)/2;
        if(solve(mid)) hi = mid;
        else lo = mid+1;
    }
    return lo;
}

int main () {
    ifstream cin("1.in");
    cin >> N >> K;
    cowpos.resize(N);
    FOR(i, N) { cin >> cowpos[i]; }
    sort(cowpos.begin(), cowpos.end());
    cout << bsearch(0, cowpos[N-1]) << endl;
    return 0;
}

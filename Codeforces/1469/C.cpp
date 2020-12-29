#include<bits/stdc++.h>

using namespace std;

#define lli long long
#define TC int TC;cin>>TC;while(TC--)
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0)
#define uMin(a, b) a = min(a, b)
#define uMax(a, b) a = max(a, b)
#define mset(a, arr) memset(arr, a, sizeof(arr))
#define piii pair<lli, pair<lli, lli>>
#define piiii pair<pair<lli, lli>, pair<lli, lli>>
#define ff first
#define ss second

#define rep(i, a, b) for(int i = (a) ; i < (b) ; i++)
#define rep1(i, a, b) for(int i = (a) ; i <= (b) ; i++)
#define rep2(i, a, b) for(int i = (a) ; i >= (b) ; i--)

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int main(){
    fastIO();

    TC{
        int n, k;
        cin >> n >> k;

        lli h[n];
        rep(i, 0, n) cin >> h[i];

        lli a = h[0];
        lli b = h[0] + k;

        bool ans = true;
        rep(i, 1, n-1){
            if(a + 1 > h[i] + k - 1 + k) ans = false;

            if(h[i] >= b) ans = false;

            a = max(h[i], a - k + 1);
            b = min(b + k - 1, h[i] + k + k - 1);
        }

        if(a > h[n-1] + k - 1 || b < h[n-1] + 1) ans = false;

        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector <int>
#define vc vector <char>
#define vl vector <ll>
#define mp make_pair
#define lcm(a, b) a * b / __gcd(a,b)
#define endl cout << "\n";
const int MOD = 1e9+7;
using namespace std;

void solve(){
    int n = 6;
    int arr[n] = {0, 1, 2, 3, 4, 5};
    int mak_sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
            
            if (sum > mak_sum)
                mak_sum = sum;
        }
    }
    cout << mak_sum;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   
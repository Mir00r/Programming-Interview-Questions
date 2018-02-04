#include <bits/stdc++.h>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 205
#define col 205
#define MAX 100006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define MOD 7477777
#define PI 3.1415926535897932384626433832795


/*ll GCD (ll x, ll y){
    if (y == 0) return x;
    else return GCD (y, x%y);
}
ll LCM (ll x, ll y){
    return (x / GCD(x, y)*y);
}
int main(){
    ll a, b, ans, res;
    int n, i;
    /*while (scanf ("%d", &n) == 1){
        if (n == 0) break;
        scanf ("%lld", &a);
        for (i = 1; i <= n; i++){
            scanf ("%lld", &b);
            a = LCM (a, b);
        }
    }*/
    //printf ("%lld\n", a);
    /*while (scanf ("%lld%lld", &a, &b) == 2){
        res = GCD (a, b);
        printf ("Res of GCD = %lld\n", res);
        ans = LCM (a, b);
        printf ("ans of LCM = %lld\n", ans);
    }
    return 0;
}*/

ll lcm(ll a,ll b, ll c){
    int n;
    for(n = 1;  ;n++){
        if(n%a == 0 && n%b == 0 && n % c == 0)
            return n;
    }
}
int main(){
    ll a, b, c, ans;
    while(scanf("%lld%lld%lld", &a, &b, &c) == 3){
        ans = lcm(a, b, c);
        if (ans == c) printf("%lld\n", ans);
        else printf ("impossible\n");
    }
    return 0;
}

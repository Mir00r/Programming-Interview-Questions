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


LL ncr(LL n,LL r);

int main(){
    LL n,r;
    scanf("%lld %lld",&n,&r);
    printf("%lld\n",ncr(n,r));
    return 0;
}

LL ncr(LL n,LL r){
    r = min(r,n-r);
    LL ans = 1;

    for(int i=1; i<=r; i++)
        ans = ans * (n - r + i), ans/=i;

    return ans;
}

#include <bits/stdc++.h>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 105
#define col 105
#define MAX 1000000 + 5
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define MOD 7477777
#define PI 3.1415926535897932384626433832795
#define PrimeRange 1000000
#define CharRange 255



int main () {
    string str;

    cin >> str;
    int len = str.length(), i;

    for ( i = 0; i < len; i++ ){

        int ans = count( str.begin(), str.end(), str[i] );
        //printf ("%d\n",  ans);
        cout << str[i] << " -> " << ans << endl;
    }
    return 0;
}

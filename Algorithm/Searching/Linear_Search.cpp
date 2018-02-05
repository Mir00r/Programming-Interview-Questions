#include <bits/stdc++.h>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 105
#define col 105
#define MAX 100000 + 5
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

bool Linear_Search ( int arr[], int n, int val ) {
    int i;
    for ( i = 0; i < n; i++ )
        if ( arr[ i ] == val )
            return true;
    return false;
}

int main () {
    int arr[ MAX ], i, val, n;
    scanf ("%d", &n);
    for (i = 0; i < n; i++ ) scanf ("%d", &arr[ i ]);
    scanf ("%d", &val);

    if ( Linear_Search( arr, n, val ) )
        puts ("Got the value");
    else
        puts ("Did'n get the value");
    return 0;
}

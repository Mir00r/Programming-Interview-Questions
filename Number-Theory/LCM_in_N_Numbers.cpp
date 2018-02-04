#include <bits/stdc++.h>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 5
#define col 5
#define MAX 10000
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
#define LIMIT 100


int GCD ( int x, int y ) {
    if ( y == 0 )
        return x;
    else
        return GCD ( y, x % y );
}

int LCM ( int arr[], int n ) {
    int res = 1, i;

    for ( i = 0; i < n; i++ )
        res = res * arr[ i ] / GCD ( res, arr[ i ]);

    return res;
}


int main () {
    int arr[ MAX ], n, i;

    printf ("Enter the size of Array : ");
    scanf ("%d", &n);
    printf ("Enter the %d number of elements in array : ", n);
    for ( i = 0; i < n; i++ ) scanf ("%d", &arr[ i ] );

    printf ("The lcm result of %d numbers is : %d\n", n, LCM ( arr, n ) );

    return 0;
}

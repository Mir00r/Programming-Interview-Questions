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


void DeleteDuplicateNumber ( int arr[], int n ) {
    int cnt = 0, i, j, ans[ MAX ];
    for ( i = 0; i < n; i++ ) {
        for ( j = 0; j < cnt; j++ ) {
            if ( arr[ i ] == ans[ j ] ) break;
        }

        if ( j == cnt )
            ans[ cnt++ ] = arr[ i ];
    }

    printf ("After Removing the Duplicate Element the array is -> " );
    for ( i = 0; i < cnt; i++ ) printf ("%d ", ans[ i ]);
    NL;
}

int main () {

    int arr[ MAX ], i, n;

    scanf ("%d", &n);
    for ( i = 0; i < n; i++ ) scanf ("%d", &arr[ i ] );

    //printf ("The Duplicate Number is -> %d\n", FindDuplicateNumber ( arr, n ) );
    DeleteDuplicateNumber ( arr, n );
    return 0;
}

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


int Binary_Search ( int arr[], int n, int val ) {
    int i, low, high, mid;

    low = 0;
    high = n - 1;

    while ( low <= high ) {
        mid = ( low + high ) / 2;

        if ( arr[ mid ] == val )
            return mid;
        else if ( arr[ mid ] > val )
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main () {
    int arr[ MAX ], i, val, n, ans;
    scanf ("%d", &n);
    for (i = 0; i < n; i++ ) scanf ("%d", &arr[ i ]);
    scanf ("%d", &val);

    sort ( arr, arr + n );
    ans = Binary_Search ( arr, n, val );

    if ( ans > 0 )
        printf ("The value is: %d\n", arr[ ans ]);
    else
        puts ("The value is not here");
    return 0;
}

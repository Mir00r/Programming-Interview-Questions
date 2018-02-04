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
#define memo(arr, value) memset(arr, value, sizeof(arr))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define MOD 7477777
#define PI 3.1415926535897932384626433832795
#define PrimeRange 1000000
#define CharRange 255
#define LIMIT 1000




int main () {

    int i, n, pos, val, arr[ MAX ];

    printf("Enter number of elements in arr\n");
    scanf ("%d", &n);

    printf("Enter %d elements\n", n);
    for ( i = 0; i < n; i++ ) scanf ("%d", &arr[ i ]);

    printf("Enter the location where you wish to insert an element\n");
    scanf ("%d %d", &pos );

    printf("Enter the value to insert\n");
    scanf("%d", &val);

    for ( i = n - 1; i >= pos - 1; i-- ) {
        arr[ i + 1 ] = arr[ i ];
        //arr[ pos - 1 ] = val;
    }
    arr[ pos - 1 ] = val;

    for ( i = 0; i <= n; i++ ) printf ("%d ", arr[ i ]);
    NL;

    return 0;
}

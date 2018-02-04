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

    int i, n, loc, arr[ MAX ];

    printf("Enter number of elements in arr\n");
    scanf ("%d", &n);

    printf("Enter %d elements\n", n);
    for ( i = 0; i < n; i++ ) scanf ("%d", &arr[ i ]);

    printf("Enter the location of the element to be Deleted\n");
    scanf ("%d", &loc );


    while ( loc < n ) {
        arr[ loc - 1 ] = arr[ loc ];
        loc++;
    }
    n--;


    for ( i = 0; i < n; i++ ) printf ("%d ", arr[ i ]);
    NL;

    return 0;
}

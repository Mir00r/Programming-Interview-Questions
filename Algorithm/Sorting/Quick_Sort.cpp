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

int arr[ MAX ], tmp[ MAX ];

int Sort ( int low, int high ) {
    int i, j, pivot;

    bool check = true;

    pivot = arr[ low ]; // store first element as a pivot
    i = low;
    j = high;

    while ( i < j ) {
        if ( check ) {
            if ( pivot > arr[ j ] ){
                arr[ i ] = arr[ j ];
                i++;
                check = false;
            }
            else
                j--;
        }
        else{
            if ( pivot < arr[ i ] ) {
                arr[ j ] = arr[ i ];
                j--;
                check = true;
            }
            else
                i++;
        }
    }
    arr[ j ] = pivot;
    return j;
}

void Divide ( int low, int high ) {
    int pivot;

    if ( low >= high )
        return;
    else{
        pivot = Sort ( low, high );
        Divide ( low, pivot - 1 );
        Divide ( pivot + 1, high );
    }
}


int main () {
    int n, i;

    scanf ("%d", &n);
    for ( i = 0; i < n; i++ ) scanf ("%d", &arr[ i ]);

    Divide ( 0, n - 1 );

    for ( i = 0; i < n; i++ ) printf ("%d ", arr[ i ]);
    NL;

    return 0;
}


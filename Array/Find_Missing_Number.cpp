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


int FindMissingNumber ( int arr[], int n ) {
    int i, tot = 0;

    tot = ( n + 2 ) * ( n + 1 ) / 2;
    for ( i = 0; i < n; i++ )
        tot -= arr[ i ];
    return tot;
}

int main () {

    int arr[ MAX ], i, n;

    scanf ("%d", &n);
    for ( i = 0; i < n; i++ ) scanf ("%d", &arr[ i ]);

    printf ("The Missing Number is -> %d\n", FindMissingNumber( arr, n ) );
    return 0;
}

int FindMissingNumber (int a[], int n)
{
    int i;
    int x1 = a[0]; /* For xor of all the elements in array */
    int x2 = 1; /* For xor of all the elements from 1 to n+1 */
     
    for (i = 1; i< n; i++)
        x1 = x1^a[i];
            
    for ( i = 2; i <= n+1; i++)
        x2 = x2^i;         
    
    return (x1^x2);
}
 

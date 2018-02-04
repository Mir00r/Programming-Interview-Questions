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

// Method 1

void Find_Frequency ( int arr[], int n ) {
    int i, j;
    for ( j = 0; j < n ; j++ )
        arr[ j ] = arr[ j ] - 1;

    for ( i = 0; i < n; i++ )
        arr[ arr[ i ] % n ] = arr[ arr[ i ] % n ] + n;

    for ( i = 0; i < n; i++ )
        printf ("%d -> %d\n", i + 1, arr[ i ] / n );
}


int main () {
    int arr[ MAX ], freq[ MAX ], i, j, n, cnt;
    scanf ("%d", &n);
    for ( i = 0; i < n; i++ ) {
        scanf ("%d", &arr[ i ]);
       // freq[ i ] = -1;
    }

    Find_Frequency( arr, n );
    return 0;
}


// Method 2

// Function to find counts of all elements present in
// arr[0..n-1]. The array elements must be range from
// 1 to n
void findCounts(int *arr, int n)
{
    // Traverse all array elements
    int i = 0;
    while (i<n)
    {
        // If this element is already processed,
        // then nothing to do
        if (arr[i] <= 0)
        {
            i++;
            continue;
        }
 
        // Find index corresponding to this element
        // For example, index for 5 is 4
        int elementIndex = arr[i]-1;
 
        // If the elementIndex has an element that is not
        // processed yet, then first store that element
        // to arr[i] so that we don't loose anything.
        if (arr[elementIndex] > 0)
        {
            arr[i] = arr[elementIndex];
 
            // After storing arr[elementIndex], change it
            // to store initial count of 'arr[i]'
            arr[elementIndex] = -1;
        }
        else
        {
            // If this is NOT first occurrence of arr[i],
            // then increment its count.
            arr[elementIndex]--;
 
            // And initialize arr[i] as 0 means the element
            // 'i+1' is not seen so far
            arr[i] = 0;
            i++;
        }
    }
 
    printf("\nBelow are counts of all elements\n");
    for (int i=0; i<n; i++)
        printf("%d -> %d\n", i+1, abs(arr[i]));
}
 



// method 3
int main () {
    int arr[ MAX ], freq[ MAX ], i, j, n, cnt;
    scanf ("%d", &n);
    for ( i = 1; i <= n; i++ ) {
        scanf ("%d", &arr[ i ]);
        freq[ i ] = -1;
    }

    for ( i = 1; i <= n; i++ ) {
        cnt = 1;
        for ( j = i + 1; j < n; j++ ) {
            if ( arr[ i ] == arr[ j ] ) {
                cnt++;
                freq[ j ] = 0;
            }
        }

        if ( freq[ i ] != 0 ) freq[ i ] = cnt;
    }

    for ( i = 1; i <= n; i++) {
        if ( freq[ i ] != 0 )
            printf ("%d Occurs %d times\n", arr[ i ], freq[ i ] );


    }
    return 0;
}

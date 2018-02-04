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


// Method 1 using Quicksort Algorithm 
int Partiiotn ( char str[], int st, int ed ) {
    char x = str[ ed ];
    int i = ( st - 1 );
    int j;

    for ( j = st; j < ed; j++ ) {
        if ( str[ j ] <= x ) {
            i++;
            swap ( str[ i ], str[ j ] );
        }
    }
    swap ( str[ i + 1], str[ ed ] );
    return ( i + 1 );
}


void QuickSort ( char str[], int st, int ed ) {
    int perti;

    if ( st < ed ) {
        perti = Partiiotn( str, st, ed );
        QuickSort ( str, st, perti - 1 );
        QuickSort ( str, perti + 1, ed );
    }
}


bool IsAnagram ( char *str1, char *str2 ) {
    int len1 = strlen ( str1 );
    int len2 = strlen ( str2 );
    int i;

    // if the both string length is not same then they can not br anagram
    if ( len1 != len2 ) return false;


    // sort both string
    QuickSort ( str1, 0, len1 - 1 );
    QuickSort ( str2, 0, len2 - 1 );

    for ( i = 0; i < len1; i++ )
        if ( str1[ i ] != str2[ i ] )
            return false;

    return true;
}


int main () {
    char str1[ MAX ];
    char str2[ MAX ];

    gets ( str1 );
    gets ( str2 );

    if ( IsAnagram( str1, str2 ) )
        puts ("The two string is Anagram of each other");
    else
        puts ("The two string is not Anagram of each other");

    return 0;
}


/*
//Method 2 (Count characters)
//This method assumes that the set of possible characters in both strings is small. In the following implementation, it is assumed that the characters are stored using 8 bit and there can be 256 possible characters.
//1) Create count arrays of size 256 for both strings. Initialize all values in count arrays as 0.
//2) Iterate through every character of both strings and increment the count of character in the corresponding count arrays.
//3) Compare count arrays. If both count arrays are same, then return true.

bool IsAnagram ( char *str1, char *str2 ) {
    int cnt1[ CharRange ] = {0};
    int cnt2[ CharRange ] = {0};
    int i;

    for ( i = 0; str1[ i ] && str2[ i ]; i++ ) {
        cnt1[ str1[ i ] ]++;
        cnt2[ str2[ i ] ]++;
    }

     // If both strings are of different length. Removing this
    // condition will make the program fail for strings like
    // "aaca" and "aca"
    if ( str1[ i ] || str2[ i ] ) return false;

    for ( i = 0; i < CharRange; i++ )
        if ( cnt1[ i ] != cnt2[ i ] )
            return false;

    return true;
}
*/

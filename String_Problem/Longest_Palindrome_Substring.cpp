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


// 1st Way 
char str[ MAX ];
int memo[ row ][ col ];

int longestPalin( int l, int r ) {
	if ( l == r )
		return 1;
	if ( l + 1 == r ) {
		if ( str[ l ] == str[ r ] )
			return 2;
		else
			return 1;
	}

	if ( memo[ l ][ r ] != -1 )
		return memo[ l ][ r ];

	if ( str[ l ] == str[ r ] )
		return memo[ l ][ r ] = 2 + longestPalin( l + 1, r - 1 );
	else
		return memo[ l ][ r ] = max ( longestPalin ( l, r - 1 ), longestPalin ( l + 1, r ) );
}

int main() {
	int tc, len;
	scanf("%d", &tc);
	getc( stdin );

	while ( tc-- ) {
		gets( str );
        len = strlen ( str );

		if ( len == 0) {
			printf("0\n");
			continue;
		}

		memset( memo, -1, sizeof( memo ) );
		int ans = longestPalin( 0, len - 1 );

		printf("%d\n", ans);
	}
	return 0;
}


// 2nd Way 

// A utility function to print a substring str[low..high]
void printSubStr( char* str, int low, int high )
{
    for( int i = low; i <= high; ++i )
        printf("%c", str[i]);
}
 
// This function prints the longest palindrome substring
// of str[].
// It also returns the length of the longest palindrome
int longestPalSubstr( char *str )
{
    int n = strlen( str ); // get length of input string
 
    // table[i][j] will be false if substring str[i..j]
    // is not palindrome.
    // Else table[i][j] will be true
    bool table[n][n];
    memset(table, 0, sizeof(table));
 
    // All substrings of length 1 are palindromes
    int maxLength = 1;
    for (int i = 0; i < n; ++i)
        table[i][i] = true;
 
    // check for sub-string of length 2.
    int start = 0;
    for (int i = 0; i < n-1; ++i)
    {
        if (str[i] == str[i+1])
        {
            table[i][i+1] = true;
            start = i;
            maxLength = 2;
        }
    }
 
    // Check for lengths greater than 2. k is length
    // of substring
    for (int k = 3; k <= n; ++k)
    {
        // Fix the starting index
        for (int i = 0; i < n-k+1 ; ++i)
        {
            // Get the ending index of substring from
            // starting index i and length k
            int j = i + k - 1;
 
            // checking for sub-string from ith index to
            // jth index iff str[i+1] to str[j-1] is a
            // palindrome
            if (table[i+1][j-1] && str[i] == str[j])
            {
                table[i][j] = true;
 
                if (k > maxLength)
                {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }
 
    printf("Longest palindrome substring is: ");
    printSubStr( str, start, start + maxLength - 1 );
 
    return maxLength; // return length of LPS
}
 
// Driver program to test above functions
int main()
{
    char str[] = "forgeeksskeegfor";
    printf("\nLength is: %d\n", longestPalSubstr( str ) );
    return 0;
}

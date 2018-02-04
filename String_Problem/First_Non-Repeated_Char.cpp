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

int *GetCharCount ( char *ch ) {
    int *cnt = ( int *)calloc( sizeof( int ), CharRange );
    int i;
    for ( i = 0; *( ch + i); i++ )
        cnt[ *( ch + i ) ]++;

    return cnt;
}


int FirstNonRepeating ( char *str ) {
    int *cnt = GetCharCount( str );
    int indx = -1, i;

    for ( i = 0; *( str + i ); i++ ) {
        if ( cnt[ *( str +i )] == 1 ) {
            indx = i;
            break;
        }
    }

    return indx;
}


int main () {
    char str[ MAX ];
    int len, ans;

    printf ("Enter String: ");
    //scanf ("%s", str);
    gets( str );
    ans = FirstNonRepeating( str );

    if ( ans == -1 )
        puts ("Either all character are repeating or string is empty");
    else
        printf ("First Non-repeating character is %c", str[ ans ]);
    return 0;
}

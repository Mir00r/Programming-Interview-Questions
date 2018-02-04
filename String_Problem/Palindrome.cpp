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

char str[ MAX ];

bool IsPallindrome () {
    int len = strlen ( str );
    int i = 0;
    int j = len - 1;

    while ( i < j ) {
        if ( str[ i ] != str[ j ] ) return false;
        i++;
        j--;
    }
    return true;
}

int main () {

    scanf ("%s", str);

    if ( IsPallindrome() == true ) puts ("Hurreh Pallindrome");
    else
        puts ("Not Pallindrome");

    return 0;
}

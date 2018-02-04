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
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define MOD 7477777
#define PI 3.1415926535897932384626433832795
#define PrimeRange 1000000
#define CharRange 255
#define LIMIT 1000

int gcd(int a, int b){

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

// Function to return LCM of two numbers
int lcm(int a, int b){

    return ( a * b ) / gcd( a, b );
}

int LCM (int x,int y, int z){

    long max,lcom, i, check = 0;
    if( x >= y && x >= z )
        max = x;

    else if( y >= x && y >= z )
        max = y;

    else if( z >= x && z >= y )
        max = z;

    for( i = 1; check == 0; i++ ){

        lcom = max * i;
        if( lcom % x == 0 && lcom % y == 0 && lcom % z == 0 ){
            check = 1;
        }
    }
    return lcom;
}




// Driver program to test above function
int main(){

    int a, b , x, y, z;
    //scanf ("%d %d", &a, &b);
    scanf ("%d %d %d", &x, &y, &z);

    //printf("LCM of %d and %d is %d ", a, b, lcm(a, b));

    printf("LCM of %d, %d and %d is %d ", x, y, z, LCM (x, y, z) );
    return 0;
}

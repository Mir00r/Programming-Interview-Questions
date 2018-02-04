#include <bits/stdc++.h>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 205
#define col 205
#define MAX 100006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define MOD 7477777
#define PI 3.1415926535897932384626433832795


int fibo[MAX], n;

// Way 1
void fibo_save (){
    int i;
    fibo[0] = 0;
    fibo[1] = 1;
    for (i = 2; i <= MAX; i++)
        fibo[i] = fibo[i-1] + fibo[i-2];
}

int main(){
    fibo_save();
    int ans;
    while (scanf ("%d", &n) == 1){
        printf ("The Fibonacci number for %d is %d\n", n, fibo[n]);
    }
    return 0;
}


// Way 2
int fib(int x) {
    if (x == 1) {
        return 1;
    } else {
        return fib(x-1)+fib(x-2);
    }
}

int main() {
    printf ("%d\n", fib(5));
}

// Way 3
long long Fibonacci(unsigned int n){
    if(n <= 0)
        return 0;
    if(n == 1)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {
    printf ("%d\n", Fibonacci(5));
}


//  Test ES
int Fiboo ( int n ){
    printf ("%d\n", n);
    if ( n <= 1)
        return n;
    else
        return ( Fiboo(n - 1) + Fiboo(n - 2) );
}

int main (){
    Fiboo(10);
    return 0;
}

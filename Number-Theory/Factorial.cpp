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
#define Mod 4294967296
#define PI 3.1415926535897932384626433832795

// Way 1
unsigned long long  factorial[100];

int main (){
    unsigned int i,n;
    int tc, cs = 1;
    factorial[0] = 1;
    for (i = 1; i <= 33; i++)
        factorial[i] = ((factorial[i-1]%Mod)*(i%Mod))%Mod;

    scanf ("%d", &tc);
    while (tc--){
        scanf ("%llu", &n);
        printf ("Case %d: ",cs++);
        if (n <= 33) printf ("%llu\n",factorial[n]);
        else printf ("0\n");
    }
    return 0;
}

// Way 2
int fact(int);
int main(){
  int num,f;
  printf("\nEnter a number: ");
  scanf("%d",&num);
  f=fact(num);
  printf("\nFactorial of %d is: %d",num,f);
  return 0;
}

int fact(int n){
   if(n==1)
       return 1;
   else
       return(n*fact(n-1));
 }

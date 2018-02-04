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


LLI GCD(LLI a, LLI b){
    if(b == 0)
        return a;
    else
        return GCD(b, a%b);
}

int main(){
    LLI x, y, ans;
    while (scanf ("%lld %lld", &x, &y) == 2){
        printf ("%lld\n", GCD (x, y));
    }
    return 0;
}



/*
int gcd( int x, int y);
int main(){
    int kase, ar[101];
    string s;
    scanf("%d\n", &kase);
  //  getline (cin, s);
    while(kase--){
        //cin.ignore();
        getline(cin,s);
        int l = s.length();
        //ar[0]=0;
        memset(ar, 0, sizeof ar);
        int k = 0;
        for(int i = 0; i<l; i++){
            if(s[i]==' '){
                    k++;
                    ar[k]=0;
                    continue;
            }
            ar[k] = ar[k]*10 + s[i]-'0';
        }
        int gNumber= 0;
        for(int i = 0; i < k; i++){
          for(int j = i + 1; j < k; j++)
            gNumber = max ( gNumber, gcd ( ar[i], ar[j] ) );
        }
        cout    << gNumber <<endl;
    }
    return 0;
}
int gcd(int x,int y){
     if(x)
        return gcd(y%x, x);
    else
        return y;
}
*/

/*ll int GCD(ll int x, ll int y){
    x = x % y;
    if (x == 0)
        return y;
    y = y % x;
    else
        return GCD(y , x%y);
}
ll int GCD(ll int x, ll int y){
    if (x % y == 0)
        return y;
    else
        return GCD(x, x%y);
}*/


/*int GCD(int a, int b){
    if(a > b){
        if(a % b == 0){
            return b;
        }
        else{
            b = a % b;
            GCD(a, b);
        }
    }
    else{
        if(b % a == 0){
            return a;
        }
        else{
            a = b % a;
            GCD(a, b);
        }
    }
}*/

/*bool RelativelyPrime (int a, int b) { // Assumes a, b > 0
  for ( ; ; ) {
    if (!(a %= b)) return b == 1 ;
    if (!(b %= a)) return a == 1 ;
  }
}
unsigned int gcd (unsigned int a, unsigned int b){
      unsigned int x;
      while (b)
        {
          x = a % b;
          a = b;
          b = x;
        }
      return a;
    }
int main(){
    ll int ax, ay, bx, by;
    int t, i;
    sc("%d", &t);
    for (i = 1; i <= t; i++){
        //sc("%lld%lld%lld%lld", &ax, &ay, &bx, &by);
        sc ("%lld%lld", &ax, &by);
//        if (GCD (ax, by) == 1) puts ("Coprime");
//        else puts ("Not Coprime");
//        if (RelativelyPrime (ax, by) == true) puts ("Coprime");
//        else puts ("Not Coprime");
        if (gcd (ax, by) > 1){
            puts ("Not Coprime");
        }
        else puts ("Coprime");
        //pf("Case %d: %lld\n", i, GCD(ax, by));
    }
    return 0;
}
*/

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

//int prime[200],c,vis[1005],arr[1005];

/*void prime_gen();
LLI prime[MAX], cnt;
bool isprime[MAX];

void prime_gen(){
    LLI root, i, j;
    for (i = 2; i < MAX; i++)
        isprime[i] = true;
    root = sqrt(MAX);
    for (i = 3; i <= root; i++)
        for (j = i*i; j < MAX; j += i)
            if (isprime[j] == true)
                isprime[j] = false;
    cnt = 0;
    prime[cnt++] = 2;
    for (i = 3; i < MAX; i += 2)
        if (isprime[i] == true)
            prime[cnt++] = i;
}
*/

/*void prime_gen(){
    c = 2;
    prime[0]=arr[1]=1;
    prime[1]=arr[2]=2;

    for(int i = 3; i < 100; i+=2){
        if(!vis[i]){
            puts ("ok");
            prime[c++]=i;
            for(int j=i*3; j<=100; j+=2*i)
                vis[j]=1;
        }
        puts ("Another ok");
        arr[i]=arr[i+1]=c;
       // printf ("A = %d     A+1 = %d\n", arr[i], arr[i+1]);
        //printf ("Prm = %d\n", prime[i]);
    }
    //puts ("");
}*/

/*void prime_gen(){
    int i, j, cnt = 0;
    for (i = 4; i <= MAX; i += 2)
        prime[i] = 1;

    for (i = 3; i <= MAX; i += 2){
        if (prime[i] == 0)
            for (j = i*i; j <= MAX; j += i)
                prime[j] = 1;
    }
}*/

bool sive[1000];
int prime[1000], cnt;

void prime_gen(){
    int root, i, j;
    root = sqrt(MAX);
    cnt = 0;
    prime[cnt++] = 1;
    prime[cnt++] = 2;

    for(i = 3 ; i <= root ; i = i + 2)
        if(sive[i] == true)
            for(j = i * i ; j < MAX ; j = j + (2 * i))
                sive[j] = true;

    for(i = 3 ; i < MAX ; i = i + 2)
        if(sive[i] == true)
            prime[cnt++] = i;
   // printf ("%d " , cnt);
}


int main(){
    prime_gen();
    LLI i, n;
    vector <int> vt;
    //printf ("%d\n", cnt);
    scanf ("%d", &n);
    for (i = 0; i <= cnt; i++)
        //vt.pb(prime[i]);
        printf ("%d ", prime[i]);

    //printf ("%d\n",vt.size());

    return 0;
}

/*int marked[MAX];

bool is_prime(int n){
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    return marked[n] == false;
}

void seive(int n){
    int i, j;
    for (i = 3; i*i <= n; i += 2)
        if (marked[i] == false)         // i is prime
            for (j = i*i; j <= n; j += i*i)
                marked[j] = true;
}*/

/*bool is_prime(int x){
    if (x == 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i*i < x; i += 2)
        if (i % x == 0) return false;
    return true;
}

int main(){
    int tc, cs=1, a, b, ans, tmp, cnt;
    while (scanf ("%d", &a) == 1){
        if (is_prime(a) == true) printf ("Prime number\n");
        else printf ("Not prime number\n");
    }
    return 0;
}*/


// Bit-wise Seive Method

/*#define MAX 100000000
#define LMT 10000

unsigned flag[MAX>>6];

#define ifc(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define isc(n) (flag[n>>6]|=(1<<((n>>1)&31)))

void sieve(){
    unsigned i, j, k;
    for(i=3; i<LMT; i+=2)
        if(!ifc(i))
            for(j=i*i, k=i<<1; j<MAX; j+=k)
                isc(j);
}*/

/*#include <stdio.h>
#include <string.h>
#include <math.h>
#define pf printf

void isprime();

int prime[500], k;
bool cheak_prime[500];
const int N = 500;

int main(){
    isprime();
    for(int i = 0; i < k; i++)
        pf("%d ", prime[i]);
    return 0;
}
void isprime(){
    for(int i = 2; i < N; i++) cheak_prime[i] = true;
    int sqrtN = sqrt(N);
    for(int i = 2; i <= sqrtN; i++)
        for(int j = i * i; j < N; j += i)
            if(cheak_prime[j] == true) cheak_prime[j] = false;

    k = 0;
    prime[k++] = 2;
    for(int i = 3; i < N; i += 2)
        if(cheak_prime[i] == true)
            prime[k++] = i;
}*/

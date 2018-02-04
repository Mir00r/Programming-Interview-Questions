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

void seive();
int prime_list[MAX];
bool is_prime[MAX];
int i, j, cnt;


void seive(){
    int root;
    for (i = 2; i <= MAX; i++)
        is_prime[i] = true;
    root = sqrt(MAX);
    for (i = 3; i <= root; i++)
        for (j = i*i; j < MAX; j += i)
            if (is_prime[j] == true)
                is_prime[j] = false;
    cnt = 0;
    prime_list[cnt++] = 2;
    for (i = 3; i < MAX; i += 2)
        if (is_prime[i] == true)
            prime_list[cnt++] = i;
}

int div_cnt(int x){
    int divisor = 1;
    for (i = 0; i < cnt; i++){
        if (x % prime_list[i] == 0){
            int count = 1;
            while (x % prime_list[i] == 0){
                x /= prime_list[i];
                count++;
            }
            divisor *= count;
        }
    }
    return divisor;
}


int main(){
    int n, ans;
    seive();
    for (i = 0; i < 100; i++)
        printf ("%d\n", div_cnt(i));
    return 0;
}

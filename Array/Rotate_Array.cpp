#include <bits/stdc++.h>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 105
#define col 105
#define MAX 100000 + 5
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


void Rotate ( vector < int >& nums, int k ) {
    vector < int > v( nums );
    int len = nums.size(), tmp, i;

    for ( i = 0; i < len; i++ ) {
        tmp = ( k + i ) % len;
        printf ("Tmp -> %d\n", tmp );
        nums[ tmp ] = v[ i ];
    }

    for ( i = 0; i < len; i++) printf ("%d ", nums[ i ]);
    NL;
}


int main () {
    int n, k, num, i;
    vector < int > vt;

    scanf ("%d %d", &n, &k);
    for ( i = 0; i < n; i++ ) {
        scanf ("%d", &num );
        vt.pb( num );
    }

    Rotate( vt, k );
    return 0;
}



// Another way 2
void rotate(vector<int>& nums, int k) {
        if ((k <= 0) || (nums.size() <= 1)) {
            return;
        }
        k %= nums.size();
        for (int i = 0; i < k; ++i) {
            nums.insert(nums.begin(), nums[nums.size() - 1]);
            nums.pop_back();
        }
}
    
// way 3
void rotate(vector<int>& nums, int k) {
        if ((k <= 0) || (nums.size() <= 1)) {
            return;
        }
        k %= nums.size();
        if (k > 0) {
            reverse(nums.begin(), nums.begin() + nums.size() - k);
            reverse(nums.end() - k, nums.end());
            reverse(nums.begin(), nums.end());
        }
}

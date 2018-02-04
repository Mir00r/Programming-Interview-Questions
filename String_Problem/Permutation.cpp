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


char *store[] = {};
int ind;


void swp (char *ch1, char *ch2){
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}

void permut (char *ch, int indx, int len){
    int i;
    ind = 0;
    if (indx == len){
        printf ("%s\n", ch);
        //store[ind] = ch;
        //ind++;
    }
    else {
        for (i = indx; i <= len; i++){
            //swep ((ch+indx), (ch+i));
            swp ((ch+indx), (ch+i));
            permut(ch, indx+1, len);
            //swep ((ch+indx), (ch+i));  // call for backtrack
            swp ((ch+indx), (ch+i));
        }
    }
    //printf ("\n");
}

int main(){

    #ifdef Mir00r

//        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);

    #endif

    int tc, cs=1, len, res, tmp, cnt;
    char str[MAX];
    scanf ("%d", &tc);
    while (tc--){
        //scanf ("%d", &cnt);
        scanf ("%s", str);
        len = strlen (str);
        permut (str, 0, len-1);
        //printf ("%s\n", store[cnt]);
    }
    return 0;
}


int main(){
   std::string s="123";
   do{
      std::cout<<s<<std::endl;
   }while(std::next_permutation(s.begin(),s.end()));
}

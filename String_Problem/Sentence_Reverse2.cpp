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



int main(){

	// freopen("input.txt", "r", stdin);
	// freopen("result.txt", "w", stdout);

    int i, j, k, num, test, kase = 0;
	char str[100005];
	gets(str);
	char *p;
	string st;
	vector <string> v;
	p = strtok(str, " ");
	while( p != NULL ){
		v.pb(p);
		p = strtok(NULL, " ");
	}
	
	int len = v.size();
	for( i=v.size()-1 ; i>=0 ; i-- ){
		if( v[i][0] > 90 )   v[i][0] -= 32;
		cout << v[i];
		if(i!=0) printf (" ");
	}
	
	NL;
	
    return 0;
}




void Reverse(char* sentence){

    int index = strlen(sentence) - 1;
    int hold, last = '\0';

    /*For the 1st iteration last is `\0` for all others it is ` `*/
    while ( index >= 0){


        while ( index >= 0 && sentence[ index ] != ' ') {
            index--;
            //printf ("Index -> %d\n", index );
        }
        //printf ("Index - > %d\n", index );

        /* You can print the whitespace later*/

        hold = index - 1;   // This keeps track of the last character
                            // of preceding word

        //printf ("Before Index -> %d\n", index );
        index++; //character after space
        //printf ("After Index -> %d\n", index );

        while ( sentence[ index ] != last ){

           // cout << sentence[index];
            printf ("%c", sentence[ index ] );
            index++;
        }
        //printf ("Index - > %d\n", index );

        last = ' ';
        index = hold;

        /* Dont print space after 1st word*/
        if( index > 0 )
            printf (" ");
    }
}



int main () {
    char str[ MAX ];
    gets ( str );

    Reverse ( str );
    //printf ("%s", str);

    NL;
    return 0;
}


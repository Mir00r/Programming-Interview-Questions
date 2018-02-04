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


void Delete_Char ( char str[], char ch ) {
    char tmp[ MAX ];
    char tmp_ch;
    int len, i, indx = 0;

    len = strlen ( str );
    for ( i = 0; i < len; i++ ) {
        if ( str[ i ] != ch ) {
            tmp_ch = str[ i ];
            tmp[ indx++ ] = tmp_ch;
        }
    }

    tmp[ indx ] = '\0';
    printf ("%s", tmp);

}



int main () {
    char str[ MAX ];
    char ch;

    printf ("Enter String: ");
    //scanf ("%s", str);
    gets( str );
    puts("Enter Character which one you want to delete");
    scanf ("%ch", &ch );

    Delete_Char( str, ch );
    return 0;
}


/*
// In java 
public class Main {
   public static void main(String args[]) {
      String str = "this is Java";
      System.out.println(removeCharAt(str, 3));
   }
   public static String removeCharAt(String s, int pos) {
      return s.substring(0, pos) + s.substring(pos + 1);
   }
}
*/

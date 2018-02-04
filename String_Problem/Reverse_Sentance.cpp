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

/*Function to reverse any sequence starting with pointer
  begin and ending with pointer end  */

void Reverse ( char *beg, char *end ) {
    char tmp;

    while ( beg < end ) {
        tmp = *beg;
        *beg++ = *end;
//        printf ("Beg -> %s", beg);
//        NL;
        *end-- = tmp;
//        printf ("End -> %s", end);
//        NL;
    }
}

/*Function to reverse words*/
void Reverse_Word ( char *str ) {
    char *Word_beg = str;
    char *tmp = str;

//    printf ("Word_Beg -> %s", Word_beg );
//    NL;
//    printf ("Tmp -> %s", tmp );
//    NL;
    *Word_beg = Word_beg[ 0 ] - 32;
    while ( *tmp ) {
        tmp++;
//        printf ("Loop Tmp -> %s", tmp );
//        NL;

        if ( *tmp == '\0' )
            Reverse ( Word_beg, tmp - 1 );

        else if ( *tmp == ' ' ) {
//            printf ("Loop Word_Beg -> %s", Word_beg );
//            NL;
//            printf ("Loop Tmp -> %s", tmp - 1 );
//            NL;

            Reverse ( Word_beg, tmp - 1 );
            Word_beg = tmp + 1;
            *Word_beg = Word_beg[ 0 ] - 32;
            //printf ("Loop Word_Beg -> %s", Word_beg );
            //NL;
        }
    }

    Reverse ( str, tmp - 1 );
}



/*
The above code doesn’t handle the cases when the string starts with space. 
The following version handles this specific case and doesn’t make unnecessary 
calls to reverse function in the case of multiple space in between. 
*/

void reverseWords(char *s){

    char *word_begin = NULL;
    char *temp = s; /* temp is for word boundry */
 
    /*STEP 1 of the above algorithm */
    while( *temp ){
    
        /*This condition is to make sure that the string start with
          valid character (not space) only*/
        if (( word_begin == NULL ) && (*temp != ' ') )
            word_begin=temp;
        
        if(word_begin && ((*(temp+1) == ' ') || (*(temp+1) == '\0'))){
            reverse(word_begin, temp);
            word_begin = NULL;
        }
        temp++;
    } /* End of while */
 
    /*STEP 2 of the above algorithm */
    reverse(s, temp-1);
}




int main () {
    char str[ MAX ];
    gets ( str );

    Reverse_Word ( str );
    printf ("%s", str);

    NL;
    return 0;
}

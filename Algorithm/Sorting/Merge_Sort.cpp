#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 205
#define col 205
#define MAX 1000006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777


int arr[MAX], tmp[MAX], n, cnt;

void merge (int beg, int mid, int end){
    int i, j, k;
    cnt = 0;
    for (i = beg; i <= end; i++)
        tmp[i] = arr[i];

    i = beg;
    j = mid + 1;
    k = beg;

    while (i <= mid && j <= end){
        if (tmp[i] <= tmp[j]){
            arr[k] = tmp[i];
            i++;
            cnt++;
        }
        else{
            arr[k] = tmp[j];
            j++;
        }
        k++;
    }

    while (i <= mid){
        arr[k] = tmp[i];
        k++;
        i++;
    }
}


void merge_sort_with_Partition (int beg, int end){
    int left, right, mid, a, b;

    if (beg < end){
        mid = (beg + end) / 2;

        merge_sort_with_Partition (beg, mid);
        merge_sort_with_Partition (mid+1, end);
        merge (beg, mid, end);
    }
}



int main(){
    int i , j, k, cs=1, ans;
    while (scanf ("%d", &n) == 1){
        for (i = 0; i < n; i++)
            scanf ("%d", &arr[i]);

//        printf ("Before Sorting:\n");
//        for (i = 0;i < n; i++)
//            printf ("%d ", arr[i]);
//        NL;

        merge_sort_with_Partition ( 0, n - 1 );

//        printf ("After Sorting:\n");
//        for (i = 0;i < n; i++)
//            printf ("%d ", arr[i]);
//        NL;

        //printf ("Case %d: %d\n", cs++, cnt);
        printf ("%d\n", cnt+1);
    }
    return 0;
}

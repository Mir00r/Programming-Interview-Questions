#include <bits/stdc++.h>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 100
#define col 100
#define MAX 100000
#define jora pair <int, int>
#define memo(arr, value) memset(arr, value, sizeof(arr))
#define pb push_back
#define eb emplace_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define MOD 7477777
#define PI 3.1415926535897932384626433832795
#define PrimeRange 1000000
#define CharRange 255
#define LIMIT 1000
#define MINX INT_MAX
#define MAXN INT_MIN
#define null NULL


/**
 * Link list node
 */
struct Node {
    int val;
    Node *next;
};


class Solution {
public:

    /**
     * A utility function to create a new node for BST
     * @param val
     * @return
     */
    struct Node *NewNode(int val) {
        struct Node *node = (struct Node *) malloc(sizeof(struct Node)); // Creating a new Tree_Node

        node->val = val;
        return (node);
    }


    /**
     * A Utility function to print link list
     * @param node
     */
    void printLinkList(struct Node *node) {
        while (node != null) {
            printf("%d -> ", node->val);
            node = node->next;
        }
        NL;
    }

    /**
     * A utility function to insert a new node with given key in BST
     * @param node
     * @param value
     * @return
     */
    struct Node *Insertion(struct Node **node, int value) {

        /*put in the data*/
        struct Node *newNode = NewNode(value);

        /*link the old list off the new node*/
        newNode->next = *node;

        /* Move the head to point to the new node */
        return *node = newNode;
    }

    /**
     * Function to get middle element from the link list
     *
     * Traverse linked list using two pointers. Move one pointer by one and other pointer by two.
     * When the fast pointer reaches end slow pointer will reach middle of the linked list.
     * @param head
     */
    void printMiddleElement(struct Node *head) {
        struct Node *slowPtr = head;
        struct Node *fastPtr = head;

        while (fastPtr != null && fastPtr->next) {
            fastPtr = fastPtr->next->next;
            slowPtr = slowPtr->next;
        }
        printf("The Middle element is %d\n", slowPtr->val);
    }

    /**
     * Initialize mid element as head and initialize a counter as 0.
     * Traverse the list from head, while traversing increment the counter and change mid
     * to mid->next whenever the counter is odd. So the mid will move only half of the total
     * length of the list.Thanks to Narendra Kangralkar for suggesting this method.
     * @param head
     */
    void printMiddleSecondWay(struct Node *head) {
        int count = 0;
        struct Node *mid = head;

        while (head != NULL) {
            /* update mid, when 'count' is odd number */
            if (count & 1)
                mid = mid->next;

            ++count;
            head = head->next;
        }

        /* if empty list is provided */
        if (mid != NULL) {
            printf("The middle element is [%d]\n\n", mid->val);
        }
    }
};


int main() {

    Node *root = NULL;
    Solution sol;

    int tc;
    scanf("%d", &tc);
    for (int i = 1; i <= tc; i++) {
        root = sol.Insertion(&root, i);
        sol.printLinkList(root);
        sol.printMiddleElement(root);
    }
    NL;

    return 0;
}


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
     * Calculate the length of Linked List. Let the length be len.
     * Print the (len – n + 1)th node from the begining of the Linked List.
     * @param head
     * @param n
     */
    void printNthFromLastOne(struct Node *head, int n) {
        int len = 0, i;
        struct Node *temp = head;

        // 1) count the number of nodes in Linked List
        while (temp != NULL) {
            temp = temp->next;
            len++;
        }

        // check if value of n is not more than length of the linked list
        if (len < n)
            return;

        temp = head;

        // 2) get the (n-len+1)th node from the begining
        for (i = 1; i < len - n + 1; i++)
            temp = temp->next;

        printf("%d", temp->val);

        return;
    }


    /**
     * Maintain two pointers – reference pointer and main pointer.
     * Initialize both reference and main pointers to head.
     * First move reference pointer to n nodes from head.
     * Now move both pointers one by one until reference pointer reaches end.
     * Now main pointer will point to nth node from the end. Return main pointer.
     * @param head
     * @param position
     */
    void printNthFromLast(struct Node *head, int position) {
        struct Node *mainPtr = head;
        struct Node *refPtr = head;

        int count = 0;
        if (head != null) {
            while (count < position) {
                if (refPtr == null) {
                    printf("%d is greater then the no. of nodes in the list", position);
                    return;
                }
                refPtr = refPtr->next;
                count++;
            }

            while (refPtr != null) {
                mainPtr = mainPtr->next;
                refPtr = refPtr->next;
            }
            printf("Node no %d from last is %d ", position, mainPtr->val);
        }
    }

};


int main() {

    Node *head = NULL;
    Solution sol;


    head = sol.Insertion(&head, 20);
    sol.Insertion(&head, 4);
    sol.Insertion(&head, 15);
    sol.Insertion(&head, 10);

    sol.printNthFromLast(head, 3);
    NL;

    return 0;
}


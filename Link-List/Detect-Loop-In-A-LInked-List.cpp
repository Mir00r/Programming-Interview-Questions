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
     * Traverse the list one by one and keep putting the node addresses in a Hash Table.
     * At any point, if NULL is reached then return false and if next of current node points
     * to any of the previously stored nodes in Hash then return true.
     * @param head
     * @return
     */
    bool findingLoop(struct Node *head) {
        unordered_set<Node *> set;

        while (head != null) {
            /**
             * If we have already has this node
             * in hashmap it means their is a cycle
             * (Because you we encountering the
             * ode second time).
             */
            if (set.find(head) != set.end()) {
                return true;
            }

            /**
             * If we are seeing the node for
             * the first time, insert it in hash
             */
            set.insert(head);
            head = head->next;
        }
        return false;
    }

    /**
     * Floyd’s Cycle-Finding Algorithm:
     * This is the fastest method. Traverse linked list using two pointers.
     * Move one pointer by one and other pointer by two.
     * If these pointers meet at some node then there is a loop.
     * If pointers do not meet then linked list doesn’t have loop.
     * @param head
     * @return
     */
    bool detectLoop(struct Node *head) {
        struct Node *slowPtr = head;
        struct Node *fastPtr = head;

        while (slowPtr && fastPtr && fastPtr->next) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;

            if (fastPtr == slowPtr) {
                return true;
            }
        }
        return false;
    }
};


int main() {

    Node *head = NULL;
    Solution sol;


    head = sol.Insertion(&head, 20);
    sol.Insertion(&head, 4);
    sol.Insertion(&head, 15);
    sol.Insertion(&head, 10);

    /*create a loop for testing */
    head->next->next->next->next = head;

    if (sol.detectLoop(head)) {
        puts("Loop Found");
    } else {
        puts("No loop found");
    }

    NL;

    return 0;
}





#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    Node(int val) : data(val), next(NULL){}
};
class Solution
{
private:
public:
    Solution();
     struct Node *reverseLinkedList(struct Node *head);
};
Solution::Solution(){}
struct Node *Solution::reverseLinkedList(struct Node *head)
{
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    struct Node *head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(14);
    head->next->next->next = new Node(44);
    head->next->next->next->next = new Node(24);
    head->next->next->next->next->next = new Node(34);

    struct Node *ptr = sol.reverseLinkedList(head);
    while(ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    return 0;
}

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
    struct Node *mergeSortedLinkedsList(struct Node *head1, struct Node *head2);
};

Solution::Solution(){}
struct Node *Solution::mergeSortedLinkedsList(struct Node *head1, struct Node *head2)
{
    if(head1 == NULL)
    {
        return head2;
    }
    if(head2 == NULL)
    {
        return head1;
    }
    if(head1->data < head2->data)
    {
        head1->next = mergeSortedLinkedsList(head1->next, head2);
        return head1;
    }
    else
    {
        head2->next = mergeSortedLinkedsList(head1, head2->next);
        return head2;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    struct Node *head1 = new Node(2);
    head1->next = new Node(4);
    head1->next->next = new Node(14);
    head1->next->next->next = new Node(24);
    head1->next->next->next->next = new Node(34);
    head1->next->next->next->next->next = new Node(54);
    head1->next->next->next->next->next->next = new Node(64);
    head1->next->next->next->next->next->next->next = new Node(100);

    struct Node *head2 = new Node(20);
    head2->next = new Node(44);
    head2->next->next = new Node(47);
    head2->next->next->next = new Node(54);
    head2->next->next->next->next = new Node(64);
    head2->next->next->next->next->next = new Node(84);

    struct Node *ptr = sol.mergeSortedLinkedsList(head1, head2);
    while(ptr != NULL)
    {
        cout << ptr->data <<"  ";
        ptr = ptr->next;
    }
    cout << endl;
    return 0;
}

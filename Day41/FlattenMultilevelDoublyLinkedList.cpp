/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {

        if (!head)
            return head;

        stack<Node*> st;
        st.push(head);

        Node* prev = NULL;

        while (!st.empty()) {

            Node* curr = st.top();
            st.pop();

            if (prev) {
                prev->next = curr;
                curr->prev = prev;
            }

            if (curr->next)
                st.push(curr->next);

            if (curr->child) {
                st.push(curr->child);
                curr->child = NULL;
            }

            prev = curr;
        }

        head->prev = NULL;

        return head;
    }
};

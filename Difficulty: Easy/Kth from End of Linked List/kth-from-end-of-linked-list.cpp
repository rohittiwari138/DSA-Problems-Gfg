class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        int cnt = 0;
        Node* temp = head;

        while (temp) {
            cnt++;
            temp = temp->next;
        }

        if (k > cnt) return -1;

        int pos = cnt - k;
        temp = head;

        while (pos--) {
            temp = temp->next;
        }

        return temp->data;
    }
};
class Solution {
public:
    // Function to convert reversed linked list into a number
    long long getNumber(ListNode* head) {
        long long num = 0;
        long long place = 1;

        while (head != NULL) {
            num += head->val * place;
            place *= 10;
            head = head->next;
        }

        return num;
    }

    // Function to convert a number into reversed linked list
    ListNode* convertToList(long long num) {
        // Edge case: if sum is 0
        if (num == 0) return new ListNode(0);

        ListNode* head = NULL;
        ListNode* tail = NULL;

        while (num > 0) {
            int digit = num % 10;
            ListNode* newNode = new ListNode(digit);

            if (head == NULL) {
                head = tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }

            num /= 10;
        }

        return head;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long num1 = getNumber(l1);
        long long num2 = getNumber(l2);

        long long sum = num1 + num2;

        return convertToList(sum);
    }
};

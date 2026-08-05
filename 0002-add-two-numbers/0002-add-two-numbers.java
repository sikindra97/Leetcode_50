class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {

        ListNode head1 = l1;
        ListNode head2 = l2;

        ListNode dummy = new ListNode(0);
        ListNode curr = dummy;

        int carry = 0;

        while(head1 != null && head2 != null){
            int sum = head1.val + head2.val + carry;
            carry = sum / 10;

            curr.next = new ListNode(sum % 10);
            curr = curr.next;

            head1 = head1.next;
            head2 = head2.next;
        }

        while(head1 != null){
            int sum = head1.val + carry;
            carry = sum / 10;

            curr.next = new ListNode(sum % 10);
            curr = curr.next;

            head1 = head1.next;
        }

        while(head2 != null){
            int sum = head2.val + carry;
            carry = sum / 10;

            curr.next = new ListNode(sum % 10);
            curr = curr.next;

            head2 = head2.next;
        }

        if(carry != 0){
            curr.next = new ListNode(carry);
        }

        return dummy.next;
    }
}
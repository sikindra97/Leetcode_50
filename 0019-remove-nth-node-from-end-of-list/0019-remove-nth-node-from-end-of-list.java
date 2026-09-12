class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        List<Integer> list = new ArrayList<>();

        ListNode temp = head;

        while(temp != null) {
            list.add(temp.val);
            temp = temp.next;
        }

        int size = list.size() - n;

        ListNode dummy = new ListNode(0);
        ListNode ans = dummy;

        for(int i = 0; i < list.size(); i++) {
            if(size == i) {
                continue;
            }

            ans.next = new ListNode(list.get(i));
            ans = ans.next;
        }

        return dummy.next;
    }
}
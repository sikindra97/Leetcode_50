import java.util.*;

class Solution {

    public int openLock(String[] deadends, String target) {

        Set<String> maps = new HashSet<>();

        for (int i = 0; i < deadends.length; i++) {
            maps.add(deadends[i]);
        }

        if (maps.contains("0000")) {
            return -1;
        }

        Queue<String> q = new LinkedList<>();

        q.add("0000");
        maps.add("0000");

        int level = 0;

        while (!q.isEmpty()) {
            int size = q.size();
            while (size > 0) {
                String curr = q.poll();
                size--;
                if (curr.equals(target)) {
                    return level;
                }
                for (int i = 0; i < 4; i++) {
                    char[] up = curr.toCharArray();
                    char[] down = curr.toCharArray();
                    up[i] = (up[i] == '9') ? '0' : (char)(up[i] + 1);
                    down[i] = (down[i] == '0') ? '9' : (char)(down[i] - 1);
                    String upStr = new String(up);
                    String downStr = new String(down);

                    if (!maps.contains(upStr)) {
                        q.add(upStr);
                        maps.add(upStr);
                    }

                    if (!maps.contains(downStr)) {
                        q.add(downStr);
                        maps.add(downStr);
                    }
                }
            }

            level++;
        }

        return -1;
    }
}
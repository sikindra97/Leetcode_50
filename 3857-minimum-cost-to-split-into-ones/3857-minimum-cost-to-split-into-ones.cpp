class Solution {
public:
/* 
        4
    2       2
  1    1   1   1

        3
      2    1
    1   1
*/

    int minCost(int n) {
        return n*(n-1)/2;
    }
};
class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int end=plants.size()-1;
        int val1=capacityA,val2=capacityB;
        int start=0;
        int ans=0;
        while(start<end){
          if(plants[start]>capacityA){
            ans++;
            capacityA=val1;
          }
          capacityA-=plants[start];

          if(plants[end]>capacityB){
            ans++;
            capacityB=val2;
          }
          capacityB-=plants[end];


          start++;
          end--;
        }
        if(start==end){
           if (capacityA >= capacityB) {
                if (capacityA < plants[start])
                    ans++;
            } else {
                if (capacityB < plants[start])
                    ans++;
            }
        }
        return ans;

    }
};
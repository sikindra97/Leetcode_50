class Solution {
public:
    string reorganizeString(string s) {
        string ans="";

        unordered_map<char,int>maps;
        for(char c:s){
            maps[c]++;
        }

        priority_queue<pair<int,char>>pq;
        for(auto it:maps){
            pq.push({it.second,it.first});
        }
        while(!pq.empty()){
            int num=pq.top().first;
            char c=pq.top().second;
            pq.pop();
            ans+=c;
            num--;
            if(num>0){
                if (pq.empty()) {
                return "";
                }
            int num1=pq.top().first;
            char c1=pq.top().second;
            num1--;
            pq.pop();
            ans+=c1;
            pq.push({num,c});
            if(num1>0)pq.push({num1,c1});

            }
        }
        return ans;
    }
};
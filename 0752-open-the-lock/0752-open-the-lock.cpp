class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string>maps;
        for(string it:deadends ){
            maps.insert(it);
        }
        if(maps.count("0000")){
            return -1;
        }
        maps.insert("0000");
        queue<string>q;
        q.push("0000");
        int level=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                string curr=q.front();
                q.pop();
                if(curr==target){
                    return level;
                }
                for(int i=0;i<4;i++){
                    string up=curr;
                    string down=curr;
                    up[i]=(curr[i]=='9')?'0':curr[i]+1;
                    down[i]=(curr[i]=='0')?'9':curr[i]-1;
                    if(!maps.count(up)){
                        q.push(up);
                        maps.insert(up);
                    }
                    if(!maps.count(down)){
                        q.push(down);
                        maps.insert(down);
                    }
                  
                }
            }
            level++;

        }
return -1;

    }
};
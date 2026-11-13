class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>>q;
        unordered_set<string>maps(wordList.begin(),wordList.end());
        q.push({beginWord,1});
        maps.erase(beginWord);
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            if(p.first==endWord){
                return p.second;
            }
            for(int i=0;i<p.first.size();i++){
                string word=p.first;
                for(int c='a';c<='z';c++){
                    word[i]=c;
                    if(maps.count(word)){
                        maps.erase(word);
                        q.push({word,p.second+1});
                    }
                }
            }

        }
        return 0;
        


    }
};
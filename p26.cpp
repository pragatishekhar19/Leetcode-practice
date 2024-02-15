class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words=0;
        for(int i=0;i<sentences.size();i++){
            int c=1;
            for (int j=0;j<sentences[i].size();j++)
            if(sentences[i][j]== ' '){
                c++;
            }
            max_words= max(c,max_words);
            
        }
        return max_words;
    }
};

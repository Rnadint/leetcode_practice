class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.size()==1){return strs[0];}
        if (strs.size()==0){return "";}
        int min_length = strs[0].size();
        int min_index = 0;
        for (int i=1; i<strs.size(); i++){
            if (strs[i].size()<min_length){
                min_length = strs[i].size();
                min_index = i;
            }
        }
        string common = "";
        char cur;
        for (int i=0; i<min_length; i++){
            cur = strs[min_index][i];
            for (int j=0; j<strs.size(); j++){
                if (cur!=strs[j][i]){return common;}
            }
            common += cur;
        }
        return common;
    }
};
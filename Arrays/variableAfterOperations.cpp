class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int initial = 0;
        for(int i=0; i<operations.size(); i++) {
            if(operations[i]=="++X" || operations[i]=="X++") {
                initial++;
            }else {
                initial--;
            }
        }
        return initial;
    }
};
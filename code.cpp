class Solution {
public:
    vector<vector<int>> ans;
    void check(int s , int k , int n ,vector<int>&test){
        if(k==0 && n==0){
            ans.push_back(test);
            return ;
        }
        if(k==0 && n<=0) return;
        for(int i = s;i<=9;i++){
            test.push_back(i);
            check(i+1,k-1,n-i,test);
            test.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> test;
        check(1,k,n,test);
        return ans;
    }
};

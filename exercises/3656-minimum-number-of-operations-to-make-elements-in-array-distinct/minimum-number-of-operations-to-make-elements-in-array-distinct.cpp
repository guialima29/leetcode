class Solution { 
public:
    int minimumOperations(vector<int>& nums) {
        int operations = 0;

        if (nums.size()<=1) {
            return operations;
        }

        for (int i = 0;i<nums.size();i++) {
            for (int j = i+1;j<nums.size();j++) {

                if (nums[i] == nums[j]) {
                    operations++;
                    if(nums.size() < 3) {
                        nums.clear();
                    } else {
                        nums.erase(nums.begin(),nums.begin()+3);
                    }

                    j=0;
                    i=0;
                }
            }
        }
        return operations;
    }
};
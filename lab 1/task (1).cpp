class NumArray {
public:
    int prefix[10010];
    NumArray(vector<int>& nums) {
        
        for (int q = 0; q<nums.size(); q++)
        {
          if (q==0) prefix[q]=nums[q];
          else   prefix[q] = nums[q] + prefix[q-1];
        }
        return;
        
        
    }
    
    int sumRange(int i, int j) {
        if (i == 0) {
            return prefix[j];
        }
        else {
            return prefix[j] - prefix[i-1];
        }
     
    }
};


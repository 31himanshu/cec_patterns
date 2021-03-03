 int majorityElement(vector<int>& nums) {
        int count=1;
       int minele=nums[0];
        for(int  i=1;i<nums.size();i++){
            if(nums[i]==minele){
                count++;
            }
            else if(count==0){
                minele=nums[i];
                count=1;
            }else{
                count--;
            }
        }
        return majele;
    }
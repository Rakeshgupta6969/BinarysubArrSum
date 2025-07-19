class Solution {
     
     private:

     int count(vector<int> &nums,int goal){
        int l = 0,r = 0,sum = 0,count1 = 0;

        int n = nums.size();
        while(r<n){
            sum += nums[r];
            while(l<=r && sum>goal){
                sum -= nums[l];
                l++;

            }
            count1 += (r - l +1);
            r = r +1 ;
         }

         return count1;

     } 


public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
      // using the brute force solution.

    //   int result = 0;

    //   int n = nums.size();

    //   for(int i = 0; i<n; i++){
    //    int sum = nums[i];

    //    if(sum == goal) result++;

    //    for(int j = i+1; j<n; j++){
    //       sum += nums[j];
    //       if(sum == goal){
    //         result++;
    //       }
    //    }


        
    //   }


    // return result;



    // using the optimal solution.

    return count(nums,goal) - count(nums,goal-1);

    }
};
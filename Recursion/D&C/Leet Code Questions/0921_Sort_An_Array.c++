class Solution {
public:
    void mergeInPlace(vector<int>&v, int start,int mid,int end){
        int tot_len = end - start +1;
        int gap = (tot_len/2) + (tot_len%2);
        while(gap > 0){
        int i = start;
        int j = start+gap;
            while(j <= end){
                if(v[i] > v[j]){
                swap(v[i], v[j]);
                     }
                ++i,++j;
            }
            gap = gap <= 1 ? 0 : (gap/2) +(gap%2);
        }
    }
    void mergesort(vector<int>&v,int start,int end){
    //base condition 
        if(start >=end){
       return ;
        }
        int mid = (start+end)/2;
        mergesort(v,start,mid);
        mergesort(v,mid+1,end);
        mergeInPlace(v,start,mid,end);

    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
        

};
//high time complexity


//         void merge(vector<int>&v, vector<int>&temp,int start,int mid,int end){
//             int i= start;
//             int j=mid+1;
//             int k = start;
//             while(i <= mid && j <= end){
//                 if(v[i] <= v[j]){
//                     temp[k++] = v[i++];
//                 }
//                 else{
//                 temp[k++] = v[j++];
//                 }
//             }
//            while(i <= mid) {
//             temp[k++] = v[i++];
//             } 
//             while( j <= end)   {
//                 temp[k++] = v[j++];
//             }     
//                 while(start <= end){
//                 v[start] = temp[start];
//                     start++;
//                 }
//             }
// void mergesort(vector<int>&v, vector<int>&temp,int start,int end){
//     //base condition 
//         if(start >=end){
//        return ;
//         }
//         int mid = (start+end)/2;
//         mergesort(v,temp,start,mid);
//         mergesort(v,temp,mid+1,end);
//         merge(v,temp,start,mid,end);

//     }
//     vector<int> sortArray(vector<int>& nums) {
//       vector<int>temp(nums.size(),0);  
//         mergesort(nums,temp,0,nums.size()-1);
//         return nums;
//     }
        
// };
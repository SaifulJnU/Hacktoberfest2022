class Solution{   
public:
    // sliding window
    long long maximumSumSubarray(int K, vector<int> &Arr , int N){
       int i=0; 
       int j=0;
       long long sum=0;
       long long MaxSum=INT_MIN;
       while(j<N){
          sum+=Arr[j];
          if(j-i+1<K){
              j++;
          }else {
              MaxSum= max(sum, MaxSum);
              sum-=Arr[i];
              i++;j++;
       }
    }
    
    return MaxSum;
    }
};

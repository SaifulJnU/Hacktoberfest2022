class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergeInterval;
        if(intervals.size()==0){
            return mergeInterval;
        }
        
        vector<int> timeInterval;
        sort(intervals.begin(), intervals.end());
        timeInterval= intervals[0];
        
        
        
        for(auto i: intervals){
            if(i[0]<=timeInterval[1]){
                // merge
                timeInterval[1]=max(timeInterval[1], i[1]);
                
            }else{
                mergeInterval.push_back(timeInterval);
                timeInterval=i;
            }
            
        }
        
        mergeInterval.push_back(timeInterval);
        
        return mergeInterval;
    }
};

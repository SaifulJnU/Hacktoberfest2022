class Solution {
public:
     int n;
    int dp[301][11];
    int solve(int i, int d, vector<int>& jd){
	  // all jobs are scheduled and at least one job is scheduled each day
        if(i==n and d==0){
            return 0;
        }
        
		// either jobs are remaining with days completed or vice versa
        if(i==n or d==0) return 1e7;
        if(dp[i][d]!=-1) return dp[i][d];
        int cur_max = jd[i];
        int ans = solve(i+1,d-1,jd)+jd[i];
        
        for(int j=i+1;j<n;j++){
            cur_max = max(cur_max,jd[j]);
            ans = min(ans,solve(j+1,d-1,jd)+cur_max);
        }
        
        return dp[i][d] = ans;
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
       n = jobDifficulty.size();
        memset(dp,-1,sizeof(dp));
        int ans = solve(0,d,jobDifficulty);
        
        return ans>=1e7 ? -1 : ans; 
    }
};
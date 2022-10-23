class Solution {
public:
    bool static sortbysec(const pair<int,string> &a,
              const pair<int,string> &b){
        
        if(a.first==b.first){
             return (a.second < b.second);
        }else{
            return a.first>b.first;
        }
        
    
}
    vector<string> topKFrequent(vector<string>& words, int k) {
      
        priority_queue<pair<int, string> > pq;
        
        map<string,int>m;
        for(auto i: words){
            m[i]++;
        }
        
        vector<pair<int,string>>v;
        
        for(auto i:m){
           v.push_back({i.second, i.first});
        }
        
        vector<string>ans;
        sort(v.begin(), v.end(), sortbysec );
        
        for(auto vi:v){
            cout<<vi.first<<" "<<vi.second<<endl;
        }
        int i=0;
        while(i<k){
            ans.push_back(v[i].second);
            i++;
        }
        
        return ans;
        
//         for(auto i:m){
//            cout<<i.first<<" "<<i.second<<endl;
//             pq.push({i.second, i.first});
//         }
        
//         vector<string>ans;
//         while(!pq.empty() && k--){
//             string p=pq.top().second;
//             pq.pop();
//             ans.push_back(p);
//         }
        
//         sort(ans.begin(), ans.end());
//         return ans;
    }
};
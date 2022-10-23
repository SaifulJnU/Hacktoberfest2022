class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        // firstly store the arrival time of target time 
        // since after sorting it will get lost 
        
        int tf=times[targetFriend][0];
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;// this will store pair of leaving time and current chai
        
        sort(times.begin(),times.end());
        set<int>s;// koi puraani available chair store karega 
        int n=0;// pehli chair 
        
        for(auto f:times){
            int at=f[0];
            int lt=f[1];
            int cs;
            // agar queue empty nhi h ..means pehle koi aa chuka jo kisi chair par already baitha hua h 
            
            while(!q.empty()&& q.top().first<=at){// matlab purana wala bnda pehle hi chle ish wale bnde k aane se pehle 
                s.insert(q.top().second);
                q.pop();
                
            }
            
            if(s.size()!=0){// matlab koi puraani chair khaali padi h
                cs=*(s.begin());
                s.erase(s.begin());
            }else{
                cs=n;
                n++;
            }
            
            q.push(make_pair(lt,cs));
            
            if(tf==at){
                return cs;
            }
        }
        
        return 0;
        
         
        
    }
};

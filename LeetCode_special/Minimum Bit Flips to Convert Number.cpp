class Solution {
public:
    int minBitFlips(int start, int goal) {
        vector<int>v1,v2;
        int k ;
        int count =0;

        int n = start;
        int g = goal;
        for(int i =0 ; n>0; i++){
            k=n%2;
            v1.push_back(k);
            n=n/2;
        }
         for(int i =0 ; g>0; i++){
            k=g%2;
            v2.push_back(k);
            g=g/2;
        }
        reverse(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());
        int p = v1.size()-v2.size();
        p = abs(p);
        if(v1.size()<=v2.size()){
            for(int i =0 ; i<p;i++){
                v1.insert(v1.begin(),0);
            }
        }
        else{
            for(int i =0 ; i<p;i++){
                v2.insert(v2.begin(),0);
            }
            
        }
        for(int i =0 ; i<v1.size(); i++){
            if(v1[i]!=v2[i]){
                count++;
            }
            // cout<<v2[i]<<"//"<<v1[i]<<endl;
        }
        
        
        
      return count;  
    }
};
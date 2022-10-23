class MyQueue {
    stack<int> st;
    stack<int> st1;
public:
    MyQueue() {
        
                       
        
    }
    
    void push(int x) {
        while(!st.empty()){
            int num=st.top();
            st.pop();
            st1.push(num);
        }
        st.push(x);
        while(!st1.empty()){
            int num=st1.top();
            st1.pop();
            st.push(num);
        }
        
    }
    
    int pop() {
            
            int num=st.top();
            st.pop();
            return num;
        
    }
    
    int peek() {
             
            int num=st.top();
            // cout<<num<<endl;
            return num;
        
    }
    
    bool empty() {
        return st.empty();
    }
};


#include <iostream>
using namespace std;
class c2;
class c1{
    friend void exchange (c1&,c2&);
    int val1;
    
public:
    ;
    void data(int a){
        val1 = a;
    }
    void display(void){
    
        cout << val1 <<endl;
    }
};
class c2{
    friend void exchange (c1&,c2&);
    int val2;
public:
    void data(int a){
        val2 = a;
    }
    void display(void){
        cout << val2 <<endl;
    }
};
void exchange (c1 & x ,c2 & y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main(){
    c1 oc1;
    c2 oc2;
    oc1.data(12);
    oc2.data(89);
    exchange(oc1,oc2);
    
    cout<<"The value after exchange ";
    oc1.display();
    cout<<"The value after exchange ";
    oc2.display();
    return 0;
    
}

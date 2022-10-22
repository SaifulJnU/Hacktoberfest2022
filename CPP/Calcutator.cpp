#include<iostream>
using namespace std;
int count=1;
int history[100];
void add();
void sub();
void div();
void mul();
void his();
int main(){
    while(1){
    int input;
    
    
    cout<<"\n1.) Add (+)\n";
    cout<<"2.) Sub (-)\n";
    cout<<"3.) Div (/)\n";
    cout<<"4.) Multi (*)\n";
    cout<<"5.) History\n";
    cout<<"6.) Exit \n";

    cin>>input;
    
    if(input==1){
            cout<<"Selected Add (+) : \n";
            add();
            count++;
            
                }
    else if(input==2){
                cout<<"Selected Sub (-) : \n";
                sub();
                count++;
                    }
    else if(input==3){
                cout<<"Selected Div (/) : \n";
                div();
                count++; 
                     }

    else if(input==4){
                cout<<"Selected Multi (*) : \n";
                mul();
                count++;
    }
    else if(input==5){
                cout<<"Selected History : \n";
                his();
                     }  
    else if (input==6){
                cout<<"Exit \n";
                break;
                      }
    else {cout<<"Enter valid input \n";
        
    }
    cout<<"\n------------------------------------\n";
    
    
    }

    }

    void add(){
        int a,b;
        cin>>b>>a;
        cout<<"Add = "<<a+b;
        history[count]=a+b;

        
    }
    void sub(){
        int a,b;
        cin>>a>>b;
        cout<<"Sub = "<<a-b;
        history[count]=a-b;

        
    }
    void div(){
        int a,b;
        cin>>a>>b;
        cout<<"Div = "<<(float)a/b;
        history[count]=(float)a/b;

        
    }
    void mul(){
        int a,b;
        cin>>b>>a;
        cout<<"Multi = "<<a*b;
        history[count]=a*b;

        
    }
    void his(){
        for(int i=1;i<count;i++){
            cout<<"\n"<<i<<".) "<<history[i]<<"\n ";
        }
    }

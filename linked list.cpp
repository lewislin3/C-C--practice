#include <iostream>
#include <cstdlib>
using namespace std;
class node{
private:
    int nodenum;
    int cnt;
    node* ptr;
public:
    void setnum(int a){
        nodenum=a;
    }
    void setcnt(int a){
        cnt=a;
    }
    void setptr(node* a){
        ptr=a;
    }
    int returnnum(){
        return nodenum;
    }
    int returncnt(){
        return cnt;
    }
    node* returnptr(){
        return ptr;
    }
    
    
};


int main() {
    int exist=0;
    int figure;
    int num;
    node* newn=nullptr;
    node* str = nullptr;
    node* now = nullptr;
    node* run = nullptr;
    
    while(1){
        cout<<"Enter 0 to new a node"<<endl<<"Enter 1 to find a node"<<endl;
        cin>>figure;
        if(figure==0){
            if(exist==0){
                str= new node;
                str->setcnt(exist);
                now=str;
                cout<<"input a number"<<endl;
                cin>>num;
                now->setnum(num);
                now->setptr(str);
                exist++;
            }
            else{
                
                newn=new node;
                now->setptr(newn);
                now=newn;
                now->setcnt(exist);
                cout<<"input a number"<<endl;
                cin>>num;
                now->setnum(num);
                now->setptr(str);
                exist++;
                
            }
            run=str;
            if(exist==1)
            cout<<"number"<<run->returncnt()<<" data:"<<run->returnnum()<<endl;
            while(run->returnptr()!=str){
                cout<<"number"<<run->returncnt()<<" data:"<<run->returnnum()<<endl;
                run=run->returnptr();
            }
            
        }
        
        else if (figure==1) {
            cout<<"enter a number"<<endl;
            cin>>num;
            if(num>=exist){
                cout<<"no exist"<<endl;
            }
            else{
                run=str;
                while(run->returncnt()!=num){
                    run=run->returnptr();
                }
                cout<<"number"<<run->returncnt()<<" data:"<<run->returnnum()<<endl;;
            }
        }
        else{
            cout<<"WTF"<<endl;
        }
        
    }
    
    return 0;
}

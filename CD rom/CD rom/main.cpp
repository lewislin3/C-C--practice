#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class Device{
protected:
    int m_nID;
    char* m_sName;
public:
    Device();
    Device(char* sName){
        m_sName=new char[30];
        strcpy(m_sName, sName);
    };
    ~Device();
    int getID(){
        return m_nID;
    }
    void setID(int nID){
        m_nID=nID;
    }
    char* getname(){
        return m_sName;
    }
    virtual void setName(char* sName ){
        m_sName=new char[30];
        strcpy(m_sName, sName);
    }
    
};

class Cdrom:public Device{
public:
    Cdrom();
    Cdrom(char* sName){
        m_sName=new char[30];
        strcpy(m_sName, sName);
    }
    ~Cdrom();
    
    virtual void DisplayInfo(){
        cout<<"Device("<<m_nID<<"):<CD-ROM>"<<m_sName;
    }
    
    virtual void setname(char* sName){
        m_sName=new char[30];
        strcpy(m_sName, sName);
    }
    
};

class HardDisk:public Device{
public:
    HardDisk();
    HardDisk(char* sName){
        m_sName=new char[30];
        strcpy(m_sName, sName);
    }
    ~HardDisk();
    
    virtual void DisplayInfo(){
        cout<<"Device("<<m_nID<<"):<HardDisk>"<<m_sName;
    }
    
    virtual void setname(char* sName){
        m_sName=new char[30];
        strcpy(m_sName,sName);
    }
    
};

class Host{
    
};




int main() {
    
    return 0;
}

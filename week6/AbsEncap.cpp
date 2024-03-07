#include<iostream>
using namespace std;
class AccessSpecifierDemo{
    private: 
        int privar;
    protected: 
        int provar;
    public: 
        int pubvar;
    void setVar(int priValue,int proValue, int pubValue){
        privar=priValue;
        provar=proValue;
        pubvar=pubValue;
    }
    void getVar(){
        cout<<"private variable :"<<privar<<endl;
        cout<<"protected variable :"<<provar<<endl;
        cout<<"public variable :"<<pubvar<<endl;
    }

};
int main(){
    AccessSpecifierDemo obj;
    obj.setVar(10,27,90);
    obj.getVar();

}

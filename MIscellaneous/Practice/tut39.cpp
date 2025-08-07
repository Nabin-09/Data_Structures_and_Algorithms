#include<iostream>

using namespace std;

class InstanceCounter{
    private : 
    static int count ;
    public  : 
    InstanceCounter(){
        count++;
    }
    ~InstanceCounter(){
        count--;
    }
    static int getCount(){
        return count;
    }
};

int InstanceCounter::count = 0 ;

int main(){

    cout << "Initial Instance: "<<InstanceCounter::getCount() <<endl;
    InstanceCounter obj;

    cout << "After Creating obj 1  : " <<InstanceCounter::getCount()<< endl;
    {
        InstanceCounter obj1 , obj2 ;
        cout << "Inside the block : "<<InstanceCounter::getCount()<<endl;
    }

    cout << "After Block ends : "<<InstanceCounter::getCount()<<endl;
    
    return 0;
}
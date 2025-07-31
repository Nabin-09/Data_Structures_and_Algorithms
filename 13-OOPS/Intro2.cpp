#include<iostream>

using namespace std;

class Human{
    public :
    int height;

    int setHeight(int h){
        this->height = h;
    }
};

class Male : private Human{
    int getheight(){
        return this->height;
    }
};

int main(){
    Human h1;
    h1.setHeight(178);
    cout <<h1.height<<endl;
    Male m1;
    // m1.setHeight(162); this is inaccessible
    // cout << m1.height<<endl; this is inaccessible
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

class Hero{
    char name[100];
    int health ; //property of class
    char level; // A B C D
};

int main(){

    Hero h1 ; //creation of object of type Hero
    cout << "Size : "<<sizeof(h1) << endl; // Size : 4
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

class Hero{
    char name[100];
    int health ; //property of class
    char level; // A B C D

    // Setter for health
    void setHealth(int h) {
        health = h;
    }

    // Setter for level
    void setLevel(char l) {
        level = l;
    }

    // Getter for health (optional, but good for verification)
    int getHealth() const {
        return health;
    }

    // Getter for level (optional, but good for verification)
    char getLevel() const {
        return level;
    }
};

int main(){

    Hero h1 ; //creation of object of type Hero
    cout << "Size : "<<sizeof(h1) << endl; // Size : 4
    return 0;
}
# Object Oriented Programming

A programming paradigm where everything revolves around objects.<br>

## Classes and Objects


### ✅ Class:
A class is a user-defined blueprint for creating objects. It bundles data members and member functions together.

```cpp
class Car {
public:
    string brand;
    int speed;

    void drive() {
        cout << "Driving " << brand << " at " << speed << " km/h" << endl;
    }
};
```

### ✅ Object:
An object is an instance of a class. It is used to access members of the class.

```cpp

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.speed = 100;
    myCar.drive();  // Output: Driving Toyota at 100 km/h
    return 0;
}```

```cpp

class Hero{
    int health ; //property of class
};

int main(){

    Hero h1 ; //creation of object of type Hero
    cout << "Size : "<<sizeof(h1) << endl; // Size : 4
    return 0;
}
```
Hence the size of object is the total size of properties of Class.<br>

*Empty class has 1 byte of space allocated to keep track of it* <br>

We can use #include<Hero.cpp> , if we want to use classes from another file.<br>

We can access data members using the '.' operator.

## Access Modifiers : 

 - Public : We can use the data member anywhere we want.
 - Private : By default we have private access modifier ,        everyone <br> in the class itself can only use these data members.
 - Protected : 


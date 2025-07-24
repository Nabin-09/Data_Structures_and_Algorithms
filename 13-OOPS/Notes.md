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


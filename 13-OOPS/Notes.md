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
 - Protected : In C++, the protected keyword is an access specifier used within a class to <br>restrict access to its members. Members declared as protected can be accessed by the <br>class itself and by any of its derived (child) classes, but not from outside the class hierarchy.

## Getter and Setter : 

In C++, getters and setters are special member functions used to access and modify private <br>data members of a class. A getter (also called an accessor) is used to return the value of a <br>private variable, while a setter (or mutator) is used to set or update its value. These functions<br> help enforce encapsulation, allowing controlled access to class members. By using getters<br> and setters, you can apply validation or logic during data access or assignment, rather than <br>exposing the variable directly.

```cpp
class Student {
private:
    int age;

public:
    void setAge(int a) {  // Setter
        if (a >= 0) age = a;
    }

    int getAge() {        // Getter
        return age;
    }
};

```

` Learn about padding and greedy alignment `

## Static and Dynamic Allocation : 

```cpp
Hero a ; // this is static allocation
cout << a.level;
cout <<a.health(); //referencing to data members
```
### `Dynamic Allocation : `
```cpp
int *t = new int ; //dynamic allocation
```
the value of int is somewhere in heap and i points to it<br>

Similary ,
```cpp
Hero *b = new Hero; // this was creating the object dynamically
cout << (*b).level; // referencing to data members .
cout << b->level; // better syntax
```

Whenever an object is created a constructor is called.<br>
It has no return type and at default its name is same as class.<br>

```cpp
class Hero {
    public : 
    Hero(){
        cout << "Hero Created";
    }
};

int main(){
    Hero Ramesh;//only creating a contructor prints Hero Created.
    Hero *Ram = new Hero(); // calls contructor similarly
}
```

### `Paramtererised Contructor : `

`This keyword` : It is a pointer that points towards address of the current object.

```cpp
class Hero {
    private : 
    int health;

    public : 
    Hero(int health){
        this->health = health ; //health of the contructor has the value of object's health now.
    }
}
```

### ` Copy Constructor : `
**Very Important Concept**  -- : <br> 
IF we want to copy values of one data member to another we use Copy Contructors.<br>

Using the above example : <br>
```cpp

class Hero{
    private : 
    int health;

    public :
    Hero(Hero &temp){   //we have to pass by reference
        this->health = temp -> health;
        this -> level = temp -> level;
        //Defining our own constructor
    }
};
int main(){
    Hero Suresh;
    Suresh.setHealth(70);
    Suresh.setLevel('C');

    Hero Ramesh(Suresh);//Implementation of Copy Constructor
    //We can also write our own Copy Constructor
}

```

### `Deep and Shallow Copy` : 




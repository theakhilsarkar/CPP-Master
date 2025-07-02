
# 📘 C++ OOP Day 2 – Classes and Objects

---

## 🧾 Introduction to OOP

### 🔹 **OOP – Object Oriented Programming**

> OOP is a programming style where everything revolves around *objects* and *classes*. It improves code reusability, structure, and security.

### 🔹 Key Concepts:

* **Class**: Blueprint or template to create objects.
* **Object**: Instance of a class; actual entity with data and behavior.
* **Attributes (Data Members)**: Variables inside a class.
* **Access Specifier**: Controls the visibility of class members (`public`, `private`, `protected`).

---

## 🧱 Your Code (Documented & Explained)

```cpp
#include<iostream>               // Preprocessor directive to include input-output library
using namespace std;            // Allows use of standard namespace (like cout, endl)

// 👇 Class Definition 👇
// Blueprint of a Car
class Car {
    // These are the attributes/data members of the Car class.
    // Variables declared inside a class are called "attributes" or "fields".
    
    public:                      // Access specifier: makes members accessible outside the class
    string company, model, color, type; // Car details (data members of type string)
    double price;               // Price of the car (floating point value with decimal)
    bool isSafe;                // Safety status (true/false)
};
```

---

## 👨‍💻 Main Function: Object Creation and Usage

```cpp
int main() {
    // Declare objects of class Car
    Car swift, creta, x1, seltos;

    // Set data for object 'swift'
    swift.color = "white";
    swift.company = "Sujuki";
    swift.model = "swift dizir";
    swift.type = "petrol";
    swift.price = 500250.998;
    swift.isSafe = false;

    // Set data for object 'creta'
    creta.company = "Hundai";
    creta.price = 150000.1;
    creta.isSafe = true;

    // Output data for 'swift'
    cout << "Swift Company : " << swift.company << endl;
    cout << "Swift is safe ? " << swift.isSafe << endl;
    cout << "Swift Price : " << swift.price << endl << endl;

    // Output data for 'creta'
    cout << "Creta Company : " << creta.company << endl;
    cout << "Creta Price : " << creta.price << endl;
    cout << "Creta is safe ? " << creta.isSafe << endl;

    return 0;
}
```

---

## 🧠 Concept Definitions

### 📌 Class

> A class is a **user-defined data type** that holds data and functions together.
> It acts like a **blueprint** to create **objects**.

```cpp
class ClassName {
public:
    // attributes
    // methods
};
```

### 📌 Object

> An **object** is a real-world entity or an instance of a class.
> Each object has its **own copy of class attributes.**

```cpp
ClassName obj;
```

---

## 🧪 Practical Example: Student Class

```cpp
class Student {
public:
    string name;
    int roll;
    float percentage;
    bool isPass;
};

int main() {
    Student s1;
    s1.name = "Ravi";
    s1.roll = 101;
    s1.percentage = 87.5;
    s1.isPass = true;

    cout << s1.name << " got " << s1.percentage << "% and Passed: " << s1.isPass;
    return 0;
}
```

---

## 🧾 Summary of Data Types Used

| Data Type | Use Case               | Example     |
| --------- | ---------------------- | ----------- |
| `int`     | Whole numbers          | 10, -5      |
| `float`   | Decimal numbers        | 3.14        |
| `double`  | Larger decimal numbers | 500250.998  |
| `char`    | Single character       | 'A', 'b'    |
| `string`  | Sequence of characters | "Hello"     |
| `bool`    | Boolean (true/false)   | true, false |

---

## 📌 Key Takeaways from Day 2

* ✅ Class is a template, Object is the real product.
* ✅ Access specifier `public` is needed to make attributes accessible from main.
* ✅ Each object has its own copy of the class attributes.
* ✅ `cout` and `cin` are used for I/O operations.

---

## 📘 Homework / Practice Task Ideas

1. Create a class `Student` with attributes like `name`, `marks`, `grade`, and `isPass`.
2. Create a class `Book` with attributes like `title`, `author`, `price`, and `isAvailable`.
3. Modify `Car` class to include a method (function) that displays all details of the car.

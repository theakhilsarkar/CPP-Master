

# 🧑‍🏫 **C++ – First Lecture: Introduction, History & Basics**

---

## 🧾 What is C++?

**C++** is a **general-purpose, high-performance programming language** that supports both **procedural** and **object-oriented programming (OOP)** paradigms.

> 🔹 Developed by: **Bjarne Stroustrup**
> 🔹 Year: **1979 (as "C with Classes")**, released in **1985 as C++**
> 🔹 Based on: **C language** (extended version)
> 🔹 Common uses: **Game development, System software, Embedded systems, Real-time systems, Competitive programming**

---

## 📌 Key Features of C++

| Feature                | Description                                                               |
| ---------------------- | ------------------------------------------------------------------------- |
| Multi-paradigm         | Supports **both OOP** and **procedural programming**                      |
| High-performance       | Closer to machine-level (just like C)                                     |
| Object-Oriented        | Concepts like **class, object, inheritance, encapsulation, polymorphism** |
| Standard Library (STL) | Inbuilt support for **data structures & algorithms**                      |
| Compile-Time Language  | Compiles code into machine code (.exe)                                    |

---

## 🧱 Structure of a Basic C++ Program

```cpp
#include <iostream>  // Library to use cin and cout

using namespace std; // So we can use cout, cin directly without std::

int main() {
    // Code execution starts from here
    cout << "Hello World"; // Display output
    return 0; // Exit point
}
```

---

## 📚 Comparison: C vs C++

| Feature           | C              | C++                               |
| ----------------- | -------------- | --------------------------------- |
| Type              | Procedural     | Multi-paradigm (OOP + Procedural) |
| Developer         | Dennis Ritchie | Bjarne Stroustrup                 |
| Encapsulation     | Not supported  | Fully supported                   |
| Function Overload | Not available  | Available                         |
| STL               | No             | Yes                               |
| Namespace         | No             | Yes (`std::`)                     |

---

## 🔤 Input and Output in C++

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int sum = a + b;
    cout << "Sum = " << sum << endl;

    return 0;
}
```

### 🛠️ Explanation:

* `cin >>` is used for input
* `cout <<` is used for output
* `<<` is called the **insertion operator**
* `>>` is called the **extraction operator**

---

## 🎯 Hands-on Task 1

**Q: WAP (Write a Program) to take height input in feet and inches, convert extra inches to feet if more than 12.**

```cpp
#include <iostream>
using namespace std;

int main() {
    int feet, inch;
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inch;

    // Convert inches to feet if >=12
    feet = feet + (inch / 12);
    inch = inch % 12;

    cout << "Converted Height = " << feet << " feet " << inch << " inches" << endl;
    return 0;
}
```

---

## 📖 Theory Keywords to Remember

| Term        | Meaning                                |
| ----------- | -------------------------------------- |
| `#include`  | Preprocessor directive for libraries   |
| `main()`    | Starting point of any C++ program      |
| `namespace` | Scope controller, especially for `std` |
| `cout`      | Console Output                         |
| `cin`       | Console Input                          |
| `return 0;` | Exit the program successfully          |

---

## ✅ Practice for Students

1. Take two integers and display their sum and product.
2. Take a name as a string and print a welcome message.
3. Take a boolean variable for login status and print it.
4. Convert inches to feet (using division and modulo).
5. Write a program to add two float numbers.

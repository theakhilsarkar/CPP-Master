

## 📘 C++ Lecture 4 – Constructors and Static Members

### 🔰 Overview

This lecture introduces two foundational Object-Oriented Programming (OOP) concepts in C++:

* **Constructors** – Special methods to initialize object data
* **Static Keyword** – Memory-efficient attributes shared across objects

---

### 🧱 1. Data Encapsulation

* Bundling of data members (variables) and methods (functions) inside a class.
* Helps in protecting object integrity (core idea of OOP).

---

### 🔨 2. Constructors

A **constructor** is a special method that:

* Has the **same name** as the class.
* **Automatically executes** when an object is created.
* Has **no return type** (not even `void`).
* Used for initializing class data members.

#### ✅ Syntax:

```cpp
class ClassName {
public:
    ClassName() {
        // Initialization code
    }
};
```

---

### 🧪 Types of Constructors

#### 1. 🟩 Default Constructor

* Takes **no parameters**.
* Automatically created by compiler **if no constructor is defined**.

```cpp
class Student {
public:
    Student() {
        cout << "Constructor is called!" << endl;
    }
};
```

#### 2. 🟦 Parameterized Constructor

* Takes parameters and allows initializing attributes at object creation.

```cpp
class Area {
    int length, width;
public:
    Area(int l, int w) {
        length = l;
        width = w;
        cout << "Area = " << length * width << endl;
    }
};
```

#### 3. 🔁 Constructor Overloading (Multiple Constructors)

* You can define **multiple constructors** with different parameters.

```cpp
class Area {
    int length, width;
public:
    Area(int length) {
        this->length = length;
        cout << "Square Area = " << length * length << endl;
    }
    
    Area(int length, int width) {
        this->length = length;
        this->width = width;
        cout << "Rectangle Area = " << length * width << endl;
    }
};
```

---

### 🧠 3. `static` Keyword

#### 📌 Purpose:

* Used for **class-level** variables (shared across all objects).
* Only **one copy exists** in memory for all objects.
* Efficient memory usage when many objects use same data.

#### 🧾 Key Points:

| Feature                | Description                                 |
| ---------------------- | ------------------------------------------- |
| Memory Allocation      | Happens only **once**, outside the class    |
| Shared Between Objects | ✅                                           |
| Access Modifier        | Must be defined using `ClassName::`         |
| Use Case Example       | Common info like school name, company, etc. |

---

### 🧪 Example – Static and Parameterized Constructor

```cpp
class Student {
    int id, age;
    string name;
public:
    static string school;

    Student(int id, int age, string name) {
        this->id = id;
        this->age = age;
        this->name = name;

        cout << "ID     : " << id << endl;
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "School : " << school << endl;
    }
};

// Define static variable outside class
string Student::school = "Delhi Public School";
```

---

### ⚙️ `main()` Function Sample

```cpp
int main() {
    Student s1(101, 17, "Manish");
    Student s2(102, 18, "Tanish");
    return 0;
}
```

---

### 🧾 Output Sample

```
ID     : 101
Name   : Manish
Age    : 17
School : Delhi Public School

ID     : 102
Name   : Tanish
Age    : 18
School : Delhi Public School
```

---

### 💡 Summary

| Concept        | Explanation                                          |
| -------------- | ---------------------------------------------------- |
| Constructor    | Special method to initialize object attributes       |
| Overloading    | Multiple constructors with different parameter sets  |
| `static`       | Shared member for all instances of a class           |
| Scope Operator | `::` used to define static members outside the class |

---

### 🏁 Practice Task

> Create a `Company` class with attributes: `id`, `name`, `department` and a static attribute `companyName`.
> Use a constructor to initialize the details and print all info.

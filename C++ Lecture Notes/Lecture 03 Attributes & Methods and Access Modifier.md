

# 📘 C++ OOP Day 3 – Encapsulation, Setters & Getters

---

## 🧾 Core Concepts Covered

### 🔹 What is a Class?

> A **class** is a user-defined data type that contains **attributes** (variables) and **methods** (functions).
> It acts as a blueprint to create multiple **objects**.

---

### 🔹 Attributes vs Methods

| Term       | Meaning                                          |
| ---------- | ------------------------------------------------ |
| Attributes | Variables declared inside a class                |
| Methods    | Functions declared inside a class                |
| Setter     | Method that assigns values to attributes         |
| Getter     | Method that displays or returns attribute values |

---

### 🔹 Access Modifiers

| Access Specifier | Description                                          |
| ---------------- | ---------------------------------------------------- |
| `private`        | Accessible only within the class                     |
| `public`         | Accessible from outside the class (like from `main`) |
| `protected`      | Used with inheritance, accessible in derived classes |

> By default, all class members are **private**.

---

## 🧱 Your Code with Explanation

```cpp
#include<iostream>         // Includes input/output stream
using namespace std;       // To avoid writing std:: again and again
```

### 👇 Defining a Class: `Employee`

```cpp
class Employee {
    // 🔐 Private attributes: cannot be accessed directly from outside
    private:
        string id;
        string name, role;
        double salary;

    // 🔓 Public methods (set/get)
    public:

        // Setter method to take input and assign it to private members
        void setEmployee(string id, string name, string role, double salary) {
            // this-> refers to current object’s global variable
            this->id = id;
            this->name = name;
            this->role = role;
            this->salary = salary;
        }

        // Getter method to output the employee details
        void getEmployee() {
            cout << endl;
            cout << "Emp Id     : " << this->id << endl;
            cout << "Emp Name   : " << this->name << endl;
            cout << "Emp Role   : " << this->role << endl;
            cout << "Emp Salary : " << this->salary << endl;
            cout << endl;
        }
};
```

---

## 🧪 Main Function

```cpp
int main() {
    // Primitive Data Types: int, float, double, char, bool
    // Non-Primitive/User-Defined: array, string, class

    // Declare objects of Employee class
    Employee mahesh, ramesh;

    // Set and display data for Mahesh
    mahesh.setEmployee("0001", "Mahesh Kumar", "Web Developer", 150000);
    mahesh.getEmployee();

    // Set and display data for Ramesh
    ramesh.setEmployee("0003", "Ramesh Das", "Backend Developer", 200000);
    ramesh.getEmployee();

    return 0;
}
```

---

## 🧠 What is Encapsulation?

> **Encapsulation** is the process of wrapping **data (attributes)** and **methods (functions)** into a single unit (class) and restricting direct access to some of the object’s components.

### 🎯 Key Benefits:

* Data Hiding
* Better Control and Security
* Easier Maintenance
* Increased Flexibility and Reusability

---

## 🔑 Summary

| Feature   | Description                                          |
| --------- | ---------------------------------------------------- |
| `private` | Hides class data (data hiding)                       |
| `public`  | Opens methods for user interaction                   |
| `this->`  | Refers to class/global variables when name conflicts |
| `setter`  | Takes input and assigns to private attributes        |
| `getter`  | Displays private attributes to the user              |

---

## 🧰 Homework Practice (Optional)

1. Create a `Student` class with private attributes: `roll`, `name`, `marks`, and public `setStudent()` and `getStudent()` methods.
2. Modify the `Employee` class to add a `bonus` field and calculate total salary.
3. Implement a class `Product` with `productId`, `name`, `price`, and create 3 objects.

---

## 💬 Sample Interview Question

**Q:** Why do we use `private` for attributes and `public` for methods in classes?

**A:** To implement **Encapsulation**. It hides the internal data from outside interference and allows only controlled access via `set` and `get` methods.


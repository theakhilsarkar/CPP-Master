
# 📘 C++ Lecture 07 – Polymorphism (Compile-Time & Run-Time)

---

## 🔰 **What is Polymorphism?**

**Polymorphism** means *"having many forms"*.
In C++, polymorphism allows us to use **the same function name** in different ways.
It provides **code reusability** and **flexibility**.

---

## ✅ **Types of Polymorphism in C++**

### 1. **Compile-Time Polymorphism**

Achieved through **Function Overloading**.
The decision is made **at compile time**.

#### **Example: Method Overloading**

```cpp
#include <iostream>
using namespace std;

class A {
public:
    void sum(int a, int b) {
        cout << "a + b = " << a + b << endl;
    }

    void sum(int a) {
        cout << "Single value ka sum nahi hota!" << endl;
    }

    void sum() {
        cout << "Please enter two values!" << endl;
    }
};

int main() {
    A obj;
    obj.sum();          // No arguments
    obj.sum(10);        // One argument
    obj.sum(10, 20);    // Two arguments
    return 0;
}
```

✅ **Output:**

```
Please enter two values!
Single value ka sum nahi hota!
a + b = 30
```

---

### 2. **Run-Time Polymorphism**

Achieved through **Method Overriding** (Inheritance).
The decision is made **at runtime**.

#### **Example: Method Overriding**

```cpp
#include <iostream>
using namespace std;

class A {
public:
    void get() {
        cout << "This is class A" << endl;
    }
};

class B : public A {
public:
    void get() {   // Overrides A's get()
        cout << "This is class B" << endl;
    }
};

int main() {
    B b1;
    b1.get();  // Calls B's get() (method overriding)
    return 0;
}
```

✅ **Output:**

```
This is class B
```

---

## ⚠️ Key Differences Between Overloading & Overriding

| Feature         | Overloading                   | Overriding              |
| --------------- | ----------------------------- | ----------------------- |
| **When?**       | Compile-Time                  | Run-Time                |
| **Based On**    | Different number/type of args | Same function signature |
| **Inheritance** | Not required                  | Required                |
| **Example**     | `sum(int)` vs `sum(int,int)`  | `get()` in A and B      |

---

### ✅ **Access Modifiers Reminder**

* **public**: Accessible everywhere
* **protected**: Accessible in same class and derived classes
* **private**: Accessible only in the same class

---

## 🧪 **Practice Activity**

1. Create a class `Calculator`:

   * Overload `add()` method for:

     * Two integers
     * Three integers
     * Two floats
2. Create a class `Shape` and `Circle`:

   * Override `area()` method in `Circle` to calculate area using radius.

---

### 🚀 **Interview Question**

**Q:** Difference between Compile-Time and Run-Time Polymorphism in C++?
🅰️ Compile-time uses **overloading**, resolved by **compiler**.
Run-time uses **overriding**, resolved by **virtual function mechanism**.


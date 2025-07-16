


# Lecture 09: Virtual Inheritance in C++



## **📌 Introduction**

In C++, **Virtual Inheritance** is used to resolve ambiguity in multiple inheritance when two or more classes inherit from the same base class. It ensures that only **one copy of the base class** is inherited, preventing duplication.

---

## **🔍 Why Virtual Inheritance?**

When multiple inheritance creates a **diamond problem**, where the same base class is inherited through multiple paths, the derived class gets **two copies** of the base class.
This causes ambiguity when accessing base class members.

---

### **🛑 Diamond Problem**

```
    A
   / \
  B   C
   \ /
    D
```

* **Class A** → Base class
* **Class B & C** → Both inherit A
* **Class D** → Inherits B and C
  **Problem:** D contains **two copies of A**.
  **Solution:** Use **virtual inheritance**.

---

## **✅ Example Code**

```cpp
#include <iostream>
using namespace std;

class A {
protected:
    int a = 10;
};

class B : virtual public A {  // Virtual Inheritance
protected:
    int b = 20;
};

class C : virtual public A {  // Virtual Inheritance
protected:
    int c = 30;
};

class D : public B, public C {
public:
    void get() {
        cout << "Sum: " << a + b + c << endl; // No ambiguity
    }
};

int main() {
    D d1;
    d1.get();
    return 0;
}
```

---

## **✅ Output**

```
Sum: 60
```

---

## **🧠 Real-Life Analogy**

Imagine:

* **Class A** = Citizenship
* **Class B** = Employee Role
* **Class C** = Student Role
* **Class D** = Person who is both Employee and Student

Without virtual inheritance, **Person** would have **two citizenships**, which is wrong.
Virtual inheritance ensures **only one citizenship** is inherited.

---

## **✅ Key Points**

✔ Virtual inheritance removes duplication of base class members in multiple inheritance.
✔ It resolves the **diamond problem**.
✔ Syntax:

```cpp
class Derived : virtual public Base
```

✔ Used when base class is common in multiple branches of inheritance.

---

## **✅ Practice Questions**

### **Theory**

1. What is the diamond problem in C++?
2. How does virtual inheritance solve ambiguity in multiple inheritance?
3. Difference between **virtual inheritance** and **virtual functions**?

### **Coding**

1. Create a program demonstrating **ambiguity** without virtual inheritance, then fix it using virtual inheritance.
2. Design a `Vehicle` system:

   * Base: `Engine` (horsepower)
   * Derived: `Car` and `Truck` (virtual inheritance)
   * Class `Pickup` inherits both Car and Truck.
     Print engine horsepower.
3. Extend the above program to add another virtual base and ensure no duplication.

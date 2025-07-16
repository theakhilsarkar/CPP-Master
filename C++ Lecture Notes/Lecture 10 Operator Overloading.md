
# ✅ Lecture 10: Operator Overloading in C++


## **📌 What is Operator Overloading?**

Operator overloading allows us to **redefine the meaning of existing operators** for user-defined types (like classes and objects) in C++.
This is a part of **polymorphism** because the same operator behaves differently for different data types.

---

## **✅ Why Operator Overloading?**

✔ Provides **intuitive syntax** for operations on objects
✔ Makes code **clean and readable**
✔ Commonly used for **mathematical objects** like complex numbers, matrices, vectors, etc.

---

## **✅ Syntax**

```cpp
returnType operator<symbol>(parameterList);
```

Example:

```cpp
Math operator+(Math obj);
```

---

## **✅ Code Example**

```cpp
#include <iostream>
using namespace std;

class Math {
    int a, b;

public:
    void set(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void get() {
        cout << a << " + " << b << " = " << this->a + this->b << endl;
    }

    // Operator Overloading for +
    Math operator+(Math m2) {
        Math temp;
        int x = this->a + m2.a;
        int y = this->b + m2.b;
        temp.a = x;
        temp.b = y;
        return temp;
    }
};

int main() {
    Math m1, m2, m3;
    m1.set(5, 2);  // m1: a=5, b=2
    m2.set(3, 4);  // m2: a=3, b=4

    m3 = m1 + m2;  // m3 = m1.operator+(m2)
    m3.get();      // Output: 8 + 6 = 14

    return 0;
}
```

---

## **✅ Output**

```
8 + 6 = 14
```

---

## **✅ How It Works**

* `m1 + m2` internally calls `m1.operator+(m2)`
* `operator+` adds `a` and `b` values of both objects and returns a new object (`temp`)
* This makes custom objects behave like primitive data types for operators.

---

## **✅ Real-Life Analogy**

Imagine adding two **bank accounts**:

* Account1 balance: ₹5000
* Account2 balance: ₹3000
  Adding them should give ₹8000.
  Operator overloading helps make this addition intuitive:

```cpp
account3 = account1 + account2;
```

---

## **✅ Other Operators You Can Overload**

✔ Arithmetic: `+`, `-`, `*`, `/`, `%`
✔ Relational: `==`, `!=`, `>`, `<`, `>=`, `<=`
✔ Assignment: `=`, `+=`, `-=`
✔ Unary: `++`, `--`, `!`
✔ Stream: `<<` and `>>` (for input/output)

---

## **❌ Operators You CANNOT Overload**

* `sizeof`
* `typeid`
* `::` (Scope Resolution)
* `.` (Dot Operator)
* `.*`
* `?:` (Ternary Operator)

---

## **✅ Key Points**

✔ Operator overloading **does not create new operators**; it just changes the behavior for objects.
✔ Must use a **class object** to overload an operator.
✔ Operator overloading can be done using **member function** or **friend function**.

---

## **✅ Practice Questions**

### **Theory**

1. What is operator overloading in C++? Why is it used?
2. Which operators cannot be overloaded in C++?
3. Difference between method overloading and operator overloading.

### **Coding**

1. Overload `-` operator for a class `Math` to subtract two objects.
2. Overload `*` operator for multiplying two objects.
3. Create a `Complex` number class and overload `+` and `-` operators.

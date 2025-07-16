# 📘 C++ Lecture 08 – **Abstraction**

---

## 📑 **Table of Contents**

1. [What is Abstraction?](#what-is-abstraction)
2. [Key Points of Abstraction](#key-points-of-abstraction)
3. [Example: Bank System](#example-bank-system)
4. [Advantages of Abstraction](#advantages-of-abstraction)
5. [Practice Activities](#practice-activities)

---

## 🔰 **What is Abstraction?**

**Abstraction** in C++ means **hiding internal implementation details and showing only the essential information to the user**.
The user interacts with an object **only through exposed methods**, not by accessing attributes directly.

✅ In short:

* **Show what is necessary → Hide how it works internally**

---

## ✅ **Key Points**

✔ **Attributes** → `private` (cannot be accessed directly)
✔ **Methods** → `public` (provide controlled access)
✔ Achieved by **Classes & Access Modifiers**
✔ Provides **security & simplicity**

---

## ✅ **Example: Bank System**

```cpp
#include <iostream>
using namespace std;

class Bank {
    int balance = 2000;  // Private data (hidden from user)

public:
    // Deposit method
    void deposit(int amount) {
        balance += amount;
    }

    // Withdraw method
    void withdraw(int amount) {
        balance -= amount;
    }

    // Show current balance
    void showBalance() {
        cout << "Your current Balance is " << balance << endl;
    }
};

int main() {
    Bank b1;
    b1.showBalance();       // Show initial balance
    b1.deposit(5000);       // Deposit money
    b1.showBalance();
    b1.withdraw(2000);      // Withdraw money
    b1.showBalance();

    // b1.balance = 0;  ❌ NOT ALLOWED (balance is private)
    return 0;
}
```

---

### ✅ **Output**

```
Your current Balance is 2000
Your current Balance is 7000
Your current Balance is 5000
```

---

## ✅ **Why Abstraction?**

✔ Prevents direct access to sensitive data
✔ Reduces complexity (user sees only what they need)
✔ Increases security
✔ Makes code easier to maintain

---

## ✅ **Advantages**

* ✅ **Security:** Protects sensitive information (like balance)
* ✅ **Code Control:** User cannot bypass logic
* ✅ **Better Design:** Exposes only necessary functionality

---

## ✅ **Practice Activities**

1. Create a class `Student`:

   * Private attributes: `name`, `marks`
   * Public methods: `setData()`, `showData()`
2. Create a class `ATM`:

   * Private: `pin`, `balance`
   * Public: `checkBalance()`, `deposit()`, `withdraw()`
3. Create a class `Car`:

   * Hide `engineStatus` (private)
   * Expose `startCar()`, `stopCar()`

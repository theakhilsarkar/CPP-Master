
## 📘 C++ Lecture 6 – Inheritance (Simple, Multilevel, Multiple)

### 🔰 Overview

This lecture focuses on **Inheritance** in C++, a key concept in Object-Oriented Programming (OOP). You'll learn how to:

* Reuse code using inheritance
* Implement **Single**, **Multilevel**, and **Multiple Inheritance**
* Use **constructor chaining** in derived classes
* Handle `protected` data and access with member functions

---

### 👨‍👦‍👦 What is Inheritance?

Inheritance allows a class (child) to **acquire properties and behavior** (data members and member functions) from another class (parent).

#### ✅ Access Modifiers in Inheritance:

| Modifier    | Accessible in Derived Class? |
| ----------- | ---------------------------- |
| `private`   | ❌ No                         |
| `protected` | ✅ Yes                        |
| `public`    | ✅ Yes                        |

---

### 🔹 1. **Single Inheritance**

#### 🔧 Structure: `A → B`

```cpp
class A {
protected:
    int a, b;
};

class B : public A {
    int sum;

public:
    void setB(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void getB() {
        sum = a + b;
        cout << "Sum is " << sum << endl;
    }
};
```

---

### 🔹 2. **Multilevel Inheritance**

#### 🔧 Structure: `A → B → C → D...`

* Parent to child, then child becomes parent to another class, forming a chain.

---

### 🔹 3. **Multiple Inheritance**

#### 🔧 Structure: `A, B → C`

* One class inherits from **multiple parent classes**.

---

## 🏛 Real-World Example: Indian → Person → Employee

```cpp
class Indian {
protected:
    int adharNo;

    Indian(int adharNo) {
        this->adharNo = adharNo;
    }

    void getAdharNo() {
        cout << "Adhar No : " << adharNo << endl;
    }
};
```

```cpp
class Person : public Indian {
protected:
    int age;
    string name, gender;

    Person(int age, int adharNo, string name, string gender) : Indian(adharNo) {
        this->age = age;
        this->name = name;
        this->gender = gender;
    }

    void getPerson() {
        getAdharNo();
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Gender : " << gender << endl;
    }
};
```

---

### 💰 Bank Account Class (Independent)

```cpp
class BankAccount {
    int accountNo, balance;

protected:
    BankAccount(int accountNo, int balance) {
        this->accountNo = accountNo;
        this->balance = balance;
    }

    void getAccountDetails() {
        cout << "Account No : " << accountNo << endl;
        cout << "Account Balance : " << balance << endl;
    }
};
```

---

### 👔 Final Class: Employee

> 🔁 Inherits from **Person** and **BankAccount** (Multiple Inheritance)

```cpp
class Employee : public Person, BankAccount {
protected:
    int salary;
    string role;

public:
    Employee(int salary, int age, int adharNo, int accountNo, int balance, string name, string role, string gender)
        : Person(age, adharNo, name, gender), BankAccount(accountNo, balance) {
        this->salary = salary;
        this->role = role;
    }

    void getEmployee() {
        getPerson();
        cout << "Role : " << role << endl;
        getAccountDetails();
        cout << "Salary : " << salary << endl;
    }
};
```

---

### 🧪 Main Function and Output

```cpp
int main() {
    Employee e1(15000, 18, 123456, 415263, 25000, "Maharaja", "Pune", "Male");
    e1.getEmployee();
    return 0;
}
```

#### 🖨️ Output:

```
Adhar No : 123456
Name : Maharaja
Age : 18
Gender : Male
Role : Pune
Account No : 415263
Account Balance : 25000
Salary : 15000
```

---

### 🧾 Summary Table

| Inheritance Type       | Example Classes                      | Notes                                |
| ---------------------- | ------------------------------------ | ------------------------------------ |
| Single Inheritance     | `A → B`                              | One parent, one child                |
| Multilevel Inheritance | `A → B → C`                          | Chain of inheritance                 |
| Multiple Inheritance   | `Person`, `BankAccount` → `Employee` | Child inherits from multiple parents |
| Access Specifier       | `protected` used for chaining        | Ensures controlled access            |

---

### ✅ Practice Task

> Create a class hierarchy:
>
> * `Citizen` → `Voter` → `Candidate`
> * Add attributes like voter ID, age, name, party, etc.
> * Implement constructor chaining and a method to display all data.

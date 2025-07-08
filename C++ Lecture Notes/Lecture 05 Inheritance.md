
## 📘 C++ Lecture 5 – Inheritance (OOPs Concept)

### 🔰 Overview

Inheritance is one of the core features of Object-Oriented Programming (OOP) that allows one class (child/derived) to **inherit properties and behaviors** (attributes and methods) from another class (parent/base).

This lecture covers:

* Basics of inheritance
* Simple inheritance in C++
* `protected` access specifier
* Constructor chaining using initializer list

---

### 🧬 Inheritance Concept

* **Purpose**: To avoid code duplication and increase reusability.

* **Use Case Example**:

  ```
  Person → Employee → Admin
  ```

* **Terminology**:

  | Term (General) | Term (C++)    |
  | -------------- | ------------- |
  | Parent Class   | Base Class    |
  | Child Class    | Derived Class |
  | Super Class    | Sub Class     |

---

### 👪 Types of Inheritance (Introduced)

| Type               | Example          | Description                          |
| ------------------ | ---------------- | ------------------------------------ |
| Simple Inheritance | `A → B`          | One parent class and one child class |
| Multilevel         | `A → B → C`      | Inheritance across multiple levels   |
| Hierarchical       | `A → B`, `A → C` | One parent, multiple children        |

*(Only simple inheritance implemented in this lecture)*

---

### 🔐 Access Specifiers

| Specifier   | Accessible in Base Class | Derived Class | Outside |
| ----------- | ------------------------ | ------------- | ------- |
| `private`   | ✅                        | ❌             | ❌       |
| `protected` | ✅                        | ✅             | ❌       |
| `public`    | ✅                        | ✅             | ✅       |

---

### 📂 Code Structure – Simple Inheritance Example

#### 👤 `Person` Class (Base Class)

```cpp
class Person {
protected:
    int age;
    string name, gender;

public:
    Person(int age, string name, string gender) {
        this->age = age;
        this->name = name;
        this->gender = gender;
    }
};
```

* Properties: `name`, `age`, `gender`
* Constructor used to initialize the data.

#### 👨‍💼 `Employee` Class (Derived Class)

```cpp
class Employee : public Person {
    int salary;
    string role;

public:
    Employee(int age, int salary, string name, string role, string gender)
        : Person(age, name, gender) {
        this->salary = salary;
        this->role = role;
    }

    void getEmployee() {
        cout << "\nName   : " << this->name;
        cout << "\nAge    : " << this->age;
        cout << "\nGender : " << this->gender;
        cout << "\nSalary : " << this->salary;
        cout << "\nRole   : " << this->role;
    }
};
```

* Inherits from `Person` using `public` inheritance.
* Uses **constructor chaining** to initialize base class.
* `getEmployee()` function prints all details.

---

### ⚙️ `main()` Function

```cpp
int main() {
    Employee e1(18, 15000, "Manish", "Trainee", "Male");
    Employee e2(20, 25000, "Tanish", "Developer", "Male");

    e1.getEmployee();
    e2.getEmployee();

    return 0;
}
```

---

### 🖥️ Output

```
Name   : Manish
Age    : 18
Gender : Male
Salary : 15000
Role   : Trainee
---------------------------
Name   : Tanish
Age    : 20
Gender : Male
Salary : 25000
Role   : Developer
---------------------------
```

---

### 🔄 Summary

* Child class can **access protected members** of parent class.
* Constructor of base class is called using `: BaseClass(...)` syntax.
* Inheritance improves **code reuse** and promotes **hierarchical design**.
* Only the **protected** and **public** members are accessible to derived classes.

---

### 📘 Homework / Practice

* Create a class `Student` and derive class `CollegeStudent` from it.
* Add appropriate attributes and methods.
* Implement parameterized constructors and method to display details.


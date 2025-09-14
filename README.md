# Experiment 13: Constructor Overloading in C++

## Aim  
To study and implement constructor overloading in C++.

## Tools Used  
VS Code

---

## Theory  

### What is Constructor Overloading?  
Constructor overloading in C++ is a concept where a class can have multiple constructors with different parameter lists.  
This allows creating objects in different ways, depending on how many arguments (and of what type) are passed while creating the object.  

Example:  
- A default constructor initializes values to default.  
- A parameterized constructor initializes values with user-defined inputs.  
- Having more than one constructor in the same class (with different signatures) is called **constructor overloading**.  
- It provides **flexibility** in object creation.  
- Improves **code readability** and makes the class more **versatile**.  
- The compiler differentiates constructors based on the **number** and **type** of parameters.  
- It follows the concept of **function overloading**, but applied to constructors.  

---

### Difference Between Types of Constructors and Constructor Overloading  

- **Types of Constructors**:  
  - Default Constructor  
  - Parameterized Constructor  
  - Copy Constructor  
  - Each is defined separately and studied individually.  
  - They are classified based on **purpose** and **usage**.  
  - Every C++ class gets a default constructor (if none is defined explicitly).  
  - Copy constructors are often used in **object cloning** and **pass-by-value function calls**.  

- **Constructor Overloading**:  
  - Multiple constructors with **different argument lists** exist in the **same class**.  
  - It is the **application** of having more than one type of constructor together.  
  - Helps in achieving **polymorphism** at the constructor level.  
  - Makes the class **more reusable** in different scenarios.  
  - Example: You can initialize an object with no data, partial data, or full data depending on available constructors.  

---

### Can Copy Constructor be included in Constructor Overloading?  
- A copy constructor is a **specific type of constructor** used to create a new object as a copy of an existing object.  
- Constructor overloading is a **general concept** of having multiple constructors with different parameter lists.  
- Copy constructor can exist inside an overloaded constructor set, but it is a distinct concept.  
- Yes, technically it is part of constructor overloading since it has a unique **parameter signature** (i.e., object reference).  
- However, it is studied separately because of its **special role in object copying**.  
- If not defined explicitly, the compiler provides a **default copy constructor**.  
- In practice, we often see all three constructors (default, parameterized, copy) used together, which demonstrates **constructor overloading**.  


---

## Algorithm 
### Program 1 : Constructor Overloading

1. Start  
2. Define a class `fetch` with data members `a` and `b`.  
3. Define three constructors:  
   - Default constructor → initializes `a` and `b` to 0.  
   - Parameterized constructor with 1 argument → initializes `a` with given value, `b` to 0.  
   - Parameterized constructor with 2 arguments → initializes `a` and `b` with given values.  
4. Define a function `disp()` to display `a` and `b`.  
5. In `main()`, create objects using:  
   - Default constructor  
   - 1-parameter constructor  
   - 2-parameter constructor  
6. Display results using `disp()`.  
7. Stop.  

---

### Program 2 : Constructor overloading with Types of constructors(Default, Parameterized, Copy)

1. **Start** the program.
2. **Define a class** `fetch` with two integer members `a` and `b`.
3. **Create constructors** in the class:
   - **Default Constructor**: Initialize `a` to 3 and `b` to 4.
   - **Parameterized Constructor**: Accept two integers `m` and `n` and assign them to `a` and `b`.
   - **Copy Constructor**: Accept an object of type `fetch` and copy its `a` and `b` values.
4. **Create a display function** `disp()` to print the values of `a` and `b`.
5. **In `main()`**:
   - Create object `f1` using default constructor.
   - Create object `f2` using parameterized constructor with values (2,3).
   - Create object `f3` as a copy of `f2`.
   - Create object `f4` as a copy of `f1`.
6. **Call `disp()`** function for each object to display values.
7. **End** the program.

---

## Flowchart  

### Program 1 : Constructor Overloading

```
┌─────────────────────┐
│        Start        │
└─────────────────────┘
          │
          ▼
┌─────────────────────┐
│  Define class fetch │
│       { a, b }      │
└─────────────────────┘
          │
          ▼
┌─────────────────────────────┐
│        Constructors         │
├─────────────────────────────┤
│ 1. Default: a=3, b=4        │
│ 2. Parameterized: a=m, b=n  │
│ 3. Copy: a=obj.a, b=obj.b   │
└─────────────────────────────┘
          │
          ▼
┌─────────────────────┐
│    Define disp()    │
│ function to display │
│       a and b       │
└─────────────────────┘
          │
          ▼
┌─────────────────────┐
│        main()       │
└─────────────────────┘
          │
          ▼
┌─────────────────────┐
│   Create Objects:   │
│ f1 = fetch()        │
│ f2 = fetch(2,3)     │
│ f3 = fetch(f2)      │
│ f4 = fetch(f1)      │
└─────────────────────┘
          │
          ▼
┌─────────────────────┐
│ Call disp() for each│
│  object: f1, f2,    │
│  f3, f4             │
└─────────────────────┘
          │
          ▼
┌─────────────────────┐
│         End         │
└─────────────────────┘

```

---

### Program 2 : Constructor overloading with Types of constructors(Default, Parameterized, Copy)

```
┌─────────────────────┐
│        Start        │
└─────────────────────┘
          │
          ▼
┌───────────────────────────┐
│ Define class fetch {a, b} │
└───────────────────────────┘
          │
          ▼
┌─────────────────────────────┐
│       Constructors          │
├─────────────────────────────┤
│ Default: a=3, b=4           │
│ Parameterized: a=m, b=n     │
│ Copy: a=obj.a, b=obj.b      │
└─────────────────────────────┘
          │
          ▼
┌───────────────────────────┐
│ Define disp() function    │
│ → prints a and b          │
└───────────────────────────┘
          │
          ▼
┌─────────────────────┐
│       main()        │
└─────────────────────┘
          │
          ▼
┌─────────────────────────────┐
│   Create Objects:           │
│ f1 = fetch()                │
│ f2 = fetch(2,3)             │
│ f3 = fetch(f2)              │
│ f4 = fetch(f1)              │
└─────────────────────────────┘
          │
          ▼
┌───────────────────────────┐
│ Call disp() for: f1, f2,  │
│ f3, f4                    │
└───────────────────────────┘
          │
          ▼
┌─────────────────────┐
│         End         │
└─────────────────────┘

```
---

## Real Life Applications of Constructor Overloading  

1. **Bank Account System**  
   - Default constructor → creates an empty account.  
   - Parameterized constructor → creates an account with name and balance.  

2. **Geometry / Shapes**  
   - Constructor with no parameters → creates a shape with default size.  
   - Constructor with parameters → creates a circle/rectangle with given dimensions.  

3. **File Handling Classes**  
   - Constructor with no parameter → opens a default file.  
   - Constructor with filename parameter → opens a specific file.  

4. **Game Development**  
   - Default constructor → places a player at origin (0,0).  
   - Parameterized constructor → places a player at custom coordinates.  

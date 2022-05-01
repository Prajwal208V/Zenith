https://github.com/Devinterview-io/oop-interview-questions
https://github.com/navining/gocpp

### Table of Contents

| No. | Questions |
|---- | ---------
|1  | [OOPS](#OOPS) |
|2  | [Why is OOPs so popular](#what-is-a-prototype-chain)|
|3  | [advantages of using OOPs](#what-is-the-difference-between-call-apply-and-bind)|
|4  | [main features of OOPs](#what-is-a-prototype-chain)|
|5  | [What is a class](#what-is-a-prototype-chain)|
|6  | [What is an object](#what-is-a-prototype-chain)|
|7  | [What is encapsulation](#what-is-a-prototype-chain)|
|8  | [What is Polymorphism](#what-is-json-and-its-common-operations)|
|9  | [difference between overloading and overriding](#what-is-the-purpose-of-the-array-slice-method)|
|10 | [What is meant by Inheritance](#what-is-the-purpose-of-the-array-splice-method)|
|11 | [Explain Inheritance with an example](#what-is-the-difference-between-slice-and-splice)|
|12 | [Are there any limitations of Inheritance](#how-do-you-compare-object-and-map)|
|13 | [various types of inheritance](#what-is-the-difference-between--and--operators)|
|14 | [Abstractions](#what-are-lambda-or-arrow-functions)|
|15 | [some other programming paradigms other than OOPs](#what-is-a-first-class-function)|
|16 | [Structured Programming](#what-is-a-first-order-function)|
|17 | [How much memory does a class occupy](#what-is-a-higher-order-function)|
|18 | [Is it always necessary to create objects from class](#what-is-a-unary-function)|
|19 | [What is a constructor](#what-is-the-currying-function)|
|20 | [various types of constructors in CPP](#what-is-a-pure-function)|
|21 | [destructor](#what-is-a-pure-function)|
|22 | [Are class and structure the same If not whats the difference between a class and a structure ](#what-is-the-purpose-of-the-let-keyword)|
|23 | [What is an exception](#what-is-the-difference-between-let-and-var)|
|24 | [ What is meant by exception handling](#what-is-the-difference-between-let-and-var)|

### OOPS
(OOP is a technique to develop logical modules, such as classes that contain properties, methods, fields, and events. An object is created in the program to represent a class. Therefore, an object encapsulates all the features, such as data and behavior that are associated to a class. OOP allows developers to develop modular programs and assemble them as software. Objects are used to access data and behaviors of different software modules, such as classes, namespaces, and sharable assemblies.)
OOPs refers to Object-Oriented Programming. It is the programming paradigm that is defined using objects. Objects can be considered as real-world instances of entities like class, that have some characteristics and behaviors.

**[⬆ Back to Top](#table-of-contents)**

### Why is OOPs so popular
OOPs programming paradigm is considered as a better style of programming. Not only it helps in writing a complex piece of code easily, but it also allows users to handle and maintain them easily as well. Not only that, the main pillar of OOPs - Data Abstraction, Encapsulation, Inheritance, and Polymorphism, makes it easy for programmers to solve complex 

**[⬆ Back to Top](#table-of-contents)**

### advantages of using OOPs
-OOPs is very helpful in solving very complex level of problems.
-Highly complex programs can be created, handled, and maintained easily using object-oriented programming.
-OOPs, promote code reuse, thereby reducing redundancy.
-OOPs also helps to hide the unnecessary details with the help of Data Abstraction.
-OOPs, are based on a bottom-up approach, unlike the Structural programming paradigm, which uses a top-down approach
-Polymorphism offers a lot of flexibility in OOPs
 
**[⬆ Back to Top](#table-of-contents)**
 
### main features of OOPs 
Inheritance
Encapsulation
Polymorphism
Data Abstraction

**[⬆ Back to Top](#table-of-contents)**

### What is a class
A class is template or a blueprint, which contains some values, known as member data or member, and some set of rules, known as behaviors or functions. So when an object is created, it automatically takes the data and functions that are defined in the class.
Therefore the class is basically a template or blueprint for objects. Also one can create as many objects as they want based on a class.
For example, first, a car’s template is created. Then multiple units of car are created based on that template

**[⬆ Back to Top](#table-of-contents)**

### What is an object
An object refers to the instance of the class, which contains the instance of the members and behaviors defined in the class template. In the real world, an object is an actual entity to which a user interacts, whereas class is just the blueprint for that object. So the objects consume space and have some characteristic behavior.
For example, a specific car.

**[⬆ Back to Top](#table-of-contents)**

### What is encapsulation
all the necessary data and methods are bind together and all the unnecessary details are hidden to the normal user. So Encapsulation is the process of binding data members and methods of a program together to do a specific job, without revealing unnecessary details.
Encapsulation can also be defined in two different ways:
1) Data hiding:hiding unwanted information, such as restricting access to any member of an object.
2) Data binding: binding the data members and the methods together as a whole, as a class.

![image](https://user-images.githubusercontent.com/92531202/165110192-c03dd069-fe74-4b5a-875f-ebb6c0ef6382.png)

**[⬆ Back to Top](#table-of-contents)**

### What is Polymorphism
(Polymorphism refers to the process by which some code, data, method, or object behaves differently under different circumstances or contexts)
Polymorphism allows us to perform a single action in different ways. In other words, polymorphism allows you to define one interface and have multiple implementations. The word “poly” means many and “morphs” means forms, So it means many forms.
Types of polymorphism:-
         Compile-time Polymorphism.
         Runtime Polymorphism.

Compile time polymorphism, also known as Static Polymorphism, refers to the type of Polymorphism that happens at compile time.it means is that the compiler decides what kind of action or method or value has to be taken by the entity in the picture.
(Static Polymorphism is commonly known as the Compile time polymorphism. Static polymorphism is the feature by which an object is linked with the respective function or operator based on the values during the compile time. Static or Compile time Polymorphism can be achieved through Method overloading or operator overloading)

Runtime polymorphism, also known as Dynamic Polymorphism, refers to the type of Polymorphism that happens at the run time. it means is it can't be decided by the compiler. Therefore what kind of action or method or value has to be taken depends upon the execution.
(Dynamic Polymorphism or Runtime polymorphism refers to the type of Polymorphism in OOPs, by which the actual implementation of the function is decided during the runtime or execution. The dynamic or runtime polymorphism can be achieved with the help of method overriding.)

**[⬆ Back to Top](#table-of-contents)**

### difference between overloading and overriding
Overloading is a compile-time polymorphism feature in which an entity has multiple implementations with the same name. For example, Method overloading and Operator overloading.

Whereas Overriding is a runtime polymorphism feature in which an entity has the same name, but its implementation changes during execution. For example, Method overriding.

**[⬆ Back to Top](#table-of-contents)**

### What is meant by Inheritance
(inherits properties from another class)
inheritance is the mechanism by which an object or class (referred to as a child) is created using the definition of another object or class (referred to as a parent). Inheritance not only helps to keep the implementation simpler but also helps to facilitate code reuse
--The subclass is a part of Inheritance. The subclass is an entity, which inherits from another class. It is also known as the child class.
--Superclass is also a part of Inheritance. The superclass is an entity, which allows subclasses or child classes to inherit from itself.

**[⬆ Back to Top](#table-of-contents)**

### Explain Inheritance with an example?
Let me explain to you with a common example. Let's take three different vehicles - a car, truck, or bus. These three are entirely different from one another with their own specific characteristics and behavior. But. in all three, you will find some common elements, like steering wheel, accelerator, clutch, brakes, etc. Though these elements are used in different vehicles, still they have their own features which are common among all vehicles. This is achieved with inheritance. The car, the truck, and the bus have all inherited the features like steering wheel, accelerator, clutch, brakes, etc, and used them as their own. Due to this, they did not have to create these components from scratch, thereby facilitating code reuse.

![image](https://user-images.githubusercontent.com/92531202/166165599-12278a9a-d268-456c-80a0-45ddc43773e2.png)

**[⬆ Back to Top](#table-of-contents)**

### Are there any limitations of Inheritance?
it has some limitations too. Inheritance needs more time to process, as it needs to navigate through multiple classes for its implementation. Also, the classes involved in Inheritance - the base class and the child class, are very tightly coupled together. So if one needs to make some changes, they might need to do nested changes in both classes. Inheritance might be complex for implementation, as well. So if not correctly implemented, this might lead to unexpected errors or incorrect outputs.

**[⬆ Back to Top](#table-of-contents)**

### various types of inheritance
-Single inheritance
-Multiple inheritances
-Multi-level inheritance
-Hierarchical inheritance
-Hybrid inheritance

![image](https://user-images.githubusercontent.com/92531202/166165701-97270838-29ec-4ab2-9aec-bd207ae03717.png)

**[⬆ Back to Top](#table-of-contents)**

### Abstractions
(Abstraction is the method of hiding unnecessary details from the necessary ones. It is one of the main features of OOPs.)
only essential attributes and “hides” unnecessary information. The main purpose of abstraction is hiding the unnecessary details from the users. Abstraction is selecting data from a larger pool to show only relevant details of the object to the user. It helps in reducing programming complexity and efforts.

**[⬆ Back to Top](#table-of-contents)**

### some other programming paradigms other than OOPs
Programming paradigms refers to the method of classification of programming languages based on their features.
There are mainly two types of Programming Paradigms: 
-Imperative Programming Paradigm
-Declarative Programming Paradigm

1.Imperative Programming Paradigm: Imperative programming focuses on HOW to execute program logic and defines control flow as statements that change a program state. This can be further classified as:
a)Procedural Programming Paradigm: Procedural programming specifies the steps a program must take to reach the desired state, usually read in order from top to bottom.
b) Object-Oriented Programming or OOP: Object-oriented programming (OOP) organizes programs as objects, that contain some data and have some behavior.
c) Parallel Programming: Parallel programming paradigm breaks a task into subtasks and focuses on executing them simultaneously at the same time.

2. Declarative Programming Paradigm: Declarative programming focuses on WHAT to execute and defines program logic, but not a detailed control flow. Declarative paradigm can be further classified into:
a) Logical Programming Paradigm: Logical programming paradigm is based on formal logic, which refers to a set of sentences expressing facts and rules about how to solve a problem
b) Functional Programming Paradigm: Functional programming is a programming paradigm where programs are constructed by applying and composing functions.
c) Database Programming Paradigm: Database programming model is used to manage data and information structured as fields, records, and files.

**[⬆ Back to Top](#table-of-contents)**

### Structured Programming
refers to the method of programming which consists of a completely structured control flow. Here structure refers to a block, which contains a set of rules, and has a definitive control flow, such as (if/then/else), (while and for), block structures, and subroutines.

Nearly all programming paradigms include Structured programming, including the OOPs model.

**[⬆ Back to Top](#table-of-contents)**

### How much memory does a class occupy?
Classes do not consume any memory. They are just a blueprint based on which objects are created. Now when objects are created, they actually initialize the class members and methods and therefore consume memory.

**[⬆ Back to Top](#table-of-contents)**

### Is it always necessary to create objects from class?
No. An object is necessary to be created if the base class has non-static methods. But if the class has static methods, then objects don’t need to be created. You can call the class method directly in this case, using the class name.

**[⬆ Back to Top](#table-of-contents)**

### What is a constructor?
Constructors are special methods whose name is the same as the class name. The constructors serve the special purpose of initializing the objects.
For example, suppose there is a class with the name “MyClass”, then when you instantiate this class, 
you pass the syntax: MyClass myClassObject = new MyClass();
Now here, the method called after “new” keyword - MyClass(), is the constructor of this class. This will help to instantiate the member data and methods and assign them to the object myClassObject.

![image](https://user-images.githubusercontent.com/92531202/166165377-cce74079-bfd9-4ae1-967b-745663e78380.png)

**[⬆ Back to Top](#table-of-contents)**

### various types of constructors in C++
1.Default constructor: The default constructor is the constructor which doesn’t take any argument. It has no parameters.
           class ABC{
             int x;
             ABC(){
                 x = 0;
             }
           }
2.Parameterized constructor: The constructors that take some arguments are known as parameterized constructors.
          class ABC{
             int x;
             ABC(int x){
                 x = 0;
             }
           }
3.Copy constructor: A copy constructor is a member function that initializes an object using another object of the same class.Copy Constructor is a type of constructor, whose purpose is to copy an object to another. What it means is that a copy constructor will clone an object and its values, into another object, is provided that both the objects are of the same class.
          class ABC{
             int x;
             ABC(int x){
                 x = 0;
             }
             // Copy constructor
             ABC(ABC abc){
                 x = abc.x;
             }
           }

**[⬆ Back to Top](#table-of-contents)**

### destructor
constructors, which initialize objects and specify space for them, Destructors are also special methods. But destructors free up the resources and memory occupied by an object. Destructors are automatically called when an object is being destroyed.

**[⬆ Back to Top](#table-of-contents)**

### Are class and structure the same? If not, what's the difference between a class and a structure?
No, class and structure are not the same. Though they appear to be similar, they have differences that make them apart. For example, the structure is saved in the stack memory, whereas the class is saved in the heap memory. Also, Data Abstraction cannot be achieved with the help of structure, but with class, Abstraction is majorly used.

**[⬆ Back to Top](#table-of-contents)**

### What is an exception?
An exception can be considered as a special event, which is raised during the execution of a program at runtime, that brings the execution to a halt. The reason for the exception is mainly due to a position in the program, where the user wants to do something for which the program is not specified, like undesirable input.

**[⬆ Back to Top](#table-of-contents)**

### What is meant by exception handling?
The exceptions can be handled in the program beforehand and prevent the execution from stopping. This is known as exception handling.
So exception handling is the mechanism for identifying the undesirable states that the program can reach and specifying the desirable outcomes of such states.
Try-catch is the most common method used for handling exceptions in the program.

**[⬆ Back to Top](#table-of-contents)**

### What is meant by Garbage Collection in OOPs world?
Object-oriented programming revolves around entities like objects. Each object consumes memory and there can be multiple objects of a class. So if these objects and their memories are not handled properly, then it might lead to certain memory-related errors and the system might fail.

Garbage collection refers to this mechanism of handling the memory in the program. Through garbage collection, the unwanted memory is freed up by removing the objects that are no longer needed.

**[⬆ Back to Top](#table-of-contents)**

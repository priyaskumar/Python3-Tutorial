_Inheritance_
==

- Creating a new class that inherits all the attributes and functionalities from the parent class is called Inheritance.

- Class that you inherit from, is called a `parent class`.  
  Multiple classes that inherits from that parent class, are called `child classes`.

- Example :
  
   ```python
    class Vehicle:
        pass

    class Car(Vehicle):
        pass
    ```

- When an object of child class is created, the constructor of child class is invoked automatically if it exists. If not, the constructor of parent class is called.

- In order to invoke both parent and child class constructors, You have to use the `super` keyword.

- Example :

    **Simple Inheritance**
    ```python
    class Vehicle:
        def __init__():
            print("Parent class constructor invoked!")
    
    class Car(Vehicle):
        def __init__():
            super.__init__();
            print("Child class constructor invoked!")
    Tesla = Car()
    ```

    OUTPUT:
    > Parent class constructor invoked!  
    > Child class constructor invoked!

    **Hierarchial Inheritance**
    ```python
    class Vehicle:
        def __init__():
            print("Parent class constructor invoked!")
    
    class Car(Vehicle):
        def __init__():
            super.__init__();
            print("Child class - Car constructor invoked!")

    class Bike(Vehicle):
        def __init__():
            super.__init__();
            print("Child class - Bike constructor invoked!")
    
    Tesla = Car()
    Apache = Bike()
    ```

    OUTPUT:
    > Parent class constructor invoked!  
    > Child class - Car constructor invoked!  
    > Parent class constructor invoked!  
    > Child class - Bike constructor invoked!


    **Multi - Level Inheritance**
    ```python
    class Vehicle:
        def __init__():
            print("Parent class constructor invoked!")
    
    class Car(Vehicle):
        def __init__():
            super.__init__();
            print("Child class - Car constructor invoked!")

    class Tesla(Vehicle):
        def __init__():
            super.__init__();
            print("I am a Tesla car! ")
    
    abc = Tesla()
    
    ```

    OUTPUT:
    > Parent class constructor invoked!  
    > Child class - Car constructor invoked!  
    > I am a Tesla car!

    **Multiple Inheritance**
    
    ```python
    class A:
        def greet(self):
            print("Hello from class A!")

    class B:
        def greet(self):
            print("Hello from class B!")

    class C(A, B):
        pass

    obj = C()
    obj.greet()    
    ```

    OUTPUT:
    > Hello from class A!  
    
- In case of Mulitple Inheritance, **_Module Resolution Order_** (MRO) is followed in order to search for the required entity

    - MRO:
        - It's essentially a set of rules that Python follows in order to determine from which class to use an entity when you invoke it.

        - MRO scans classes from bottom to top and from left to right.
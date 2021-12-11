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


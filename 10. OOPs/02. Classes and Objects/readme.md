_OOPS_
==

- OOPS is a programming paradigm that allows programmers to create their own objects that have methods and attributes.

- And it's a really great way once you begin scaling your code to organize your code.

_Classes and Objects_
==

- In Python, everything is an object!


- A variable (object) is just an instance of its type (class).
    
    ```python
    my_city = "New York"
    print(type(my_city))
    ```

    OUTPUT :
    > <class 'str'>

- Objects are a representation of real world objects like cars, dogs, or bikes. 

- The objects share two main characteristics: data and behavior.

- We identify data as attributes and behavior as methods in object-oriented programming.
    ```
    Data → Attributes and Behavior → Methods
    ```

- `Class` is the blueprint from which individual objects are created.

- Syntax :

    ```python
    class classname:
        # attributes and methods defined here
        pass
    ```
- As Objects are instances of a class, we create an instance by naming the class

    ```python
    car = Vehicle()
    print(car) # <__main__.Vehicle instance at 0x7fb1de6c2638>
    ```

    Here `car` is an object (or instance) of the class `Vehicle`.






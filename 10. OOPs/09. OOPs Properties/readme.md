_Instance Variable_
==

- A variable that is created an added to the object on initialization

- Example :

    ```python
    class Stack:
        def __init__(self):
            stack_list = []     # instance variable
    ```

_Private Attributes_ :
==
- You use two underscores infront of a variable to make the variable private, which can be accessed only inside the class.

- Example:

    ```python
    class Car:
    def __init__(self, name, dents=0):
        self.name = name
        self.__dents = dents # private attribute
    ```
_\_\_name\_\__
==
- Returns the name of the class

_\_\_module\_\__
==
- Stores the name of the module that contains the defintion of the class.

_\_\_bases\_\_
==
- Contains a tuple that contains the superclass of that particular class

_\_\_dict\_\__
==
- It returns all the attributes of that class or that instance as key-value pairs in a dictionary.

- Example:

    ```python
    class Car:
    wheels = 4
    
    class electricCar(Car):
        def __init__(self, name, price):
        self.name = name
        self.price = price

    c1 = Car()
    c2 = electricCar("Tesla", 58000)


    print("__name__:", Car.__name__)
    print()

    print("__module__:", Car.__module__)
    print()

    print("__bases__:", electricCar.__bases__)
    print()

    print("Car.__dict__:", Car.__dict__) # Class attributes
    print()

    print("c2.__dict__:", c2.__dict__)   # Attributes at instance level
    print()

    ```

    OUTPUT:

    > \_\_name\_\_: Car
    >
    > \_\_module\_\_: \_\_main\_\_
    >
    > \_\_bases\_\_: (<class '\_\_main\_\_.Car'>,)
    >
    > Car.\_\_dict\_\_: {'\_\_module\_\_': '\_\_main\_\_', 'wheels': 4, '\_\_dict\_\_': <attribute '\_\_dict\_\_' of 'Car' objects>, '\_\_weakref\_\_': <attribute '\_\_weakref\_\_' of 'Car' objects>, '\_\_doc\_\_': None}
    >
    > c2.\_\_dict\_\_: {'name': 'Tesla', 'price': 58000}


    
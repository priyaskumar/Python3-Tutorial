_OOPs Methods_
==

## \_\_str\_\_()

- Python looks out for str() methodwhen we print an object.

- Normally, when you print an instance, Python prints a hexadecimal number. 

- This hexadecimal number is an internal object identifier used by Python.
(It's the address at which the object is stored in memory)

- Example:

    ```python
    class Car:
        def __init__(self, name, model):
            self.name = name
            self.model = model

    c = Car("Tesla", 2020)
    print(c)
    ```

    OUTPUT:

    > <__main__.Car object at 0x0344DCB0>
    
- You can change what Python returns when we print an instance. 

- Example:

    ```python
    class Car:
        def __init__(self, name, model):
            self.name = name
            self.model = model

        def __str__(self):
            return f"It's a {self.model} {self.name}!"

    c = Car("Tesla", 2020)
    print(c)
    ```
    OUTPUT :

    > It's a 2020 Tesla!

## isinstance():

- The isinstance() function checks if the object is an instance of the given class

- Example:

    ```python
    class A:
        pass

    a = A()
    print(isinstance("hi", str))
    print(isinstance(a, A))
    ```

    OUTPUT :
    > True  
    > True

## hasattr() :

- If you want to know if a certain object contains a certain attribute, you can make use of hasattr() function, short for has attribute.

- The first parameter is the object that you want to check and the second argument is the attribute you're looking for.

- Example:

    ```python
    class Car:
        def __init__(self, name):
            self.name = name

    car1 = Car("Volkswagen")
    # check if the class 'Car' has an attribute name
    print(hasattr(car1, "name"))
    ```
    OUTPUT :
    > True

## issubclass() : 

- Checks if a class is a subclass of another class or not.

- Example:

    ```python
    class One:
        pass

    class Two(One):
        pass

    class Three(Two):
        pass

    print(issubclass(Two, One))
    print(issubclass(Three, One))
    print(issubclass(One, One))
    ```

    OUTPUT :

    > True  
    > True  
    > True



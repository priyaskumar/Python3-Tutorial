_Generators_
==

- Generators are specialized code that's able to return a series of values, and to control the iteration process.

- It is generally invoked more than once

- **_Iterator_** :

    - An iterator is a data type that implements the iterator protocol.

    - **\_\_iter\_\_()** : Returns the object

    - **\_\_next\_\_()** : Returns the next value of the series of values

- Example :  
    `range()` function is a built-in generator.

- You can also create your own generator.

- **_yield_** :

    - The yield keyword freezes the value until the next invocation.

    - Example :

        ```python
        for i in range(5):
            yield 5
        ```

        OUTPUT :
        > 0  
        > 1  
        > 2  
        > 3  
        > 4  


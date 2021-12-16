_List Comprehensions_
==

- List comprehension offers a shorter syntax when you want to create a new list based on the values of an existing list.

- Syntax:

    ```python
    newlist = [expression for item in iterable if condition == True]
    ```

- Example:

    **_Using general for loop_** :

    ```python
    lst = []

    for x in range(5):
        lst.append(10 ** x)
    
    print(lst)
    ```
    OUTPUT :
    > [1, 10, 100, 1000, 10000]

    **_Using list comprehension with generators_** :

    This lot more elegant than the usual for loops

    ```python
    lst = [10 ** x for x in range(5)]

    print(lst)
    ```

    OUTPUT:
    > [1, 10, 100, 1000, 10000]

    


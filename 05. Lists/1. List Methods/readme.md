_Lists_
=

A collection of items stored in a single variable.

Lists are mutable, ordered and allow duplicate values

## _Create a list_

Lists are enclosed within square brackets - []

Example:

```python
languages = ['python', 'java', 'c++']
```
---

## _Data types of list items_

List items can be of any data type

Example:
```python
fruits = ["apple", "banana", "cherry"]
num = [1, 5, 7, 9, 3, 10]
lst = [True, False, False]
```
A list can contain different data types

Example:
```python
person1 = ["sam", 34, True, 40, "male"]
```
---

## _Accessing in a list_

The items in the list are indexed from 0

To access an element present in a particular postion, following syntax is used

```python
list_name[index]
```

Example:

```python
lst = ['hi', 'hello', 'goodbye']
print(lst[0])
```

OUTPUT :
>hello

---
## _List Methods_

- len() : returns the length of the list

    Example:

    ```python
    eve = [0,50,2,10,60]
    print(len(eve))
    ```
    OUTPUT:
    >5

- sort() : sorts the list items in ascending order

    Example:

    ```python
    eve = [0,50,2,10,60]
    eve.sort()
    print(eve)
    ```

    OUTPUT:
    > [0,2,10,50,60]

- sorted() : returns a sorted list, but doesn't change the order of items in the list

    Example:

    ```python
    eve = [0,50,2,10,60]
    print(sorted(eve))
    print(eve)
    ```

    OUTPUT:
    > [0,2,10,50,60]
    [0,50,2,10,60]

- reverse(): reverses the entire list 

    Example:

    ```python
    eve = [0,50,2,10,60]
    print("Original List : ", eve)
    eve.reverse()
    print("Reversed List : ",eve)
    ```

    OUTPUT:
    > Original List : [0,50,2,10,60]
    Reversed List : [60,10,2,50,0]

- append() : adds an item to the end of the list

    Example:

    ```python
    eve = [0,50,2,10,60]
    print("Original List : ", eve)
    eve.append(84)
    print("Updated List : ",eve)
    ```

    OUTPUT:
    > Original List : [0,50,2,10,60]
    Updated List : [0,50,2,10,60,84]

- insert() : insert an item to the required position

    Example:

    ```python
    eve = [0,50,2,10,60]
    print("Original List : ", eve)
    eve.insert(3, 84)
    print("Updated List : ",eve)
    ```

    OUTPUT:
    > Original List : [0,50,2,10,60]
    Updated List : [0,50,2,84,10,60]

- pop() : to remove an element in particular position

    Example:

    ```python
    eve = [0,50,2,10,60]
    print("Original List : ", eve)
    eve.pop(2)
    print("Updated List : ",eve)
    ```

    OUTPUT:
    > Original List : [0,50,2,10,60]
    Updated List : [0,50,10,60]









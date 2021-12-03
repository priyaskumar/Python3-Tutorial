_Tuples_
==

Tuple is a collection of items which are ordered, unchangeable, and allow duplicate values.

### _Creating a tuple_

Syntax:
```python
tuple1_name = (item1,item2,item3)
            (or)
tuple2_name = tuple((item1,item2,item3))
```

Example:
```python
fruits = ("apple", "mango", "cherry")
bike = tuple(("Ducati","RE","Kawasaki"))

print(fruits)
print(bike)
```

OUTPUT:
>("apple", "mango", "cherry")  
>("Ducati","RE","Kawasaki")

### _Accessing item in tuples_:

- You can access tuple items by referring to the index number, inside square brackets.

- The first item has index 0.

- **Negative indexing** : starts from the end.  
-1 refers to the last item,   
-2 refers to the second last item and so on..

Example:

```python
bike = tuple(("Ducati","RE","Kawasaki"))

print(bike[2])
print(bike[-2])
```

OUTPUT:
>Kawasaki  
>RE

### _Slicing in tuples_:

- You can slice a tuple by specifying where to start and where to end the range.

- On slicing, the return value will be a new tuple with the specified items.

Example:

```python
bike = tuple(("Ducati","RE","Kawasaki","KTM"))

print(bike[1:3])
```
OUTPUT:
>("RE","Kawasaki","KTM")

### _Updating items in tuple_:

- Tuples are unchangeable, meaning that you cannot change, add, or remove items once the tuple is created.

- But there are some workarounds.

Example:

```python
x = ("Ducati","RE","Kawasaki")
y = list(x)
y[2] = "KTM"
x = tuple(y)

print(x)
```

OUTPUT:
>("Ducati","RE","KTM")






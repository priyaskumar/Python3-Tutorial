_Return Statement_
==

- To let a function return a value, use the return statement

- It is nt necessary to have a return statement in every function

- Function can return values of any data type

Example:

```python
def add5(num):
    return num+5

print(add5(6))
```

OUTPUT:

>11

If you need to return a value earlier in the function for certain conditions..

Example:
```python
def add5(num):
    if num == 5:
        return 5
    return num+5

print(add5(10))
print(add5(5))
```

OUTPUT:
>15  
>5

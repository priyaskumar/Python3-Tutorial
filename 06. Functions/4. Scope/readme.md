_Scope_
==

- Variables declared inside a function cannot be accessed outside the function.

- These variables have a scope only inside the function.

- In order to access these varaibles outside the function, declare it as **global** variable

Example:
```python
num = 18    # num is a variable with global scope

def say_age():
    num = 20                    # num is a variable with scope inside the function
    print("My age is ",num)     # global variable is not accessed    

say_age()
```

OUTPUT :
>My age is 20

```python
def say_age():
    global num = 20
    print("My age is ",num)

say_age()
print(num)
```

OUTPUT :
>My age is 20  
>20

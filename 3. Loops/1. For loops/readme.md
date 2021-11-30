_For loops_
==

Used to to execute a block of code for each item in a sequence

Syntax:
```python
for iterator in iterable:
    # block of code here
```

Example:
```python
for i in range(5):
    print("i is ",i)
```

OUTPUT:
>i is 0  
i is 1  
i is 2  
i is 3  
i is 4


NOTE :
> - range(10) : generates a sequence of numbers from 0 to 9.  
> - range(2,10) : generates a sequence of numbers from 2 to 9.  
> - range(2,10,2) : generates a sequence of numbers from 2 to 8 with step size = 2. i.e., [2,4,6,8]


To iterate through a sequence and break when a certain item is encountered, if conditional statement is used.


Example:
```python
for i in range(5):
    if i == 3:
        break
    print("i is ",i)
```

OUTPUT:
>i is 0  
i is 1  
i is 2  

To interate through a sequence and skip a particular item, if condition along with **continue** is used

Example:
```python
for i in range(5):
    if i == 3:
        continue
    print("i is ",i)
```

OUTPUT:
>i is 0  
i is 1  
i is 2  
i is 4  

---

### _The for - else_:

Syntax:
```python
for iterator in iterable:
    if condition:
        # a block of code
        break
    # another block of code
else:
    # This block is executed when 'for loop' 
    # terminates completely without breaking 
    # out of the loop in between
```
Example:
```python
for i in range(5):
    if i == 10:
        print("Hello!")
        break
    print("i is",i)
else:
    print("Hello world!")
```
OUTPUT:
>i is 0  
i is 1  
i is 2  
i is 3  
i is 4  
Hello world!

---
### _For loop and Strings_

```python
string = "Python"
for i in string:
    print(i)
print("Hello!")
```

OUTPUT:
>P  
y  
t  
h  
o  
n    
Hello!



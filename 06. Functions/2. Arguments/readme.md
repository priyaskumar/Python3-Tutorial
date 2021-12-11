_Arguments_
==

- Information can be passed to the function as **arguments**.

- Arguments are specified after the function name, inside the parentheses. 

- You can add as many arguments as you want, just separate them with a comma.

Example:

```python
def say_hello(name):
    print("Hello, ",name)

say_hello("Sam")

# say_hello() has 1 parameter
# "Sam" is the argument passed to the function
```

OUTPUT:
>Hello, Sam

---

### _Number of Arguments_


- By default, a function must be called with the correct number of arguments. 

- For instance, if a function expects 2 arguments, you have to call the function with 2 arguments, not more, and not less.

- The order of the argument matters


- You can specify as many parameters required in the function definition



Example:

```python
def say_name(fname, lname):
    print(fname,lname)

say_name("John","Mark")
say_name("John")
```

OUTPUT:
>John Mark  
>Traceback (most recent call last):  
>   File "string", line 7, in module  
>TypeError: say_name() missing 1 required positional argument: 'lname'

---
### _Arbitary Arguments/ List as an argument_ :

- If you do not know how many arguments that will be passed into your function, add a * before the parameter name in the function definition.

- This way the function will receive a tuple of arguments, and can access the items accordingly.

Example:

```python
def my_function(*kids):
  print("The youngest child is " + kids[2])

my_function("Emil", "Tobias", "Linus")
```

OUTPUT:
>The youngest child is Linus

---
### _Default Arguments_:

- You can specify a default value to a parameter as and when required

- If you call the function without argument, it uses the default value.

Example:

```python
def say_my_country(country = "Norway"):
  print("I am from " + country)

say_my_country("Sweden")
say_my_country()
```

OUTPUT:
>I am from Sweden  
>I am from Norway

---
### _Keyword Arguments_:

- You can also send arguments with the key = value syntax.

- This way the order of the arguments does not matter.

Example:

```python
def children(child3, child2, child1):
  print("The youngest child is " + child3)

children(child1 = "Emil", child2 = "Tobias", child3 = "Linus")
```

OUTPUT:
>The youngest child is Linus











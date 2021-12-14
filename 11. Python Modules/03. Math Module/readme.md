_Math Module_
==

- `math` Module is one of Python's standard modules and it provides us functions and classes to make it really easy to perform mathematical calculations.

- **_IMPORTING MATH MODULE_** :

    ```python
    import math
    ```
- **_LIST OF ENTITIES IN MATH MODULE_** :

    ```python
    import math

    print(dir(math))
    ```

    OUTPUT :

    ``` 
    ['__doc__', '__loader__', '__name__', '__package__', '__spec__', 'acos', 'acosh', 'asin', 'asinh', 'atan', 'atan2', 'atanh', 'ceil', 'copysign', 'cos', 'cosh', 'degrees', 'e', 'erf', 'erfc', 'exp', 'expm1', 'fabs', 'factorial', 'floor', 'fmod', 'frexp', 'fsum', 'gamma', 'gcd', 'hypot', 'inf', 'isclose', 'isfinite', 'isinf', 'isnan', 'ldexp', 'lgamma', 'log', 'log10', 'log1p', 'log2', 'modf', 'nan', 'pi', 'pow', 'radians', 'remainder', 'sin', 'sinh', 'sqrt', 'tan', 'tanh', 'tau', 'trunc']    
    ```

    NOTE : dir() function returns an alphabetically sorted list of all the entities that a certain module provides.

- **_USING MATH MODULE_** :

    ```python
    import math

    def sin(x):
        if 2*x == pi:
            return 0.99
        else:
            return None

    pi = 3.14

    print(sin(pi/2))             # User defined function
    print(math.sin(math.pi/2))   # Function from the math module
    ```

    


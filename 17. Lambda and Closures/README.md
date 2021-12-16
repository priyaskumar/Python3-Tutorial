_Lambda and Closures_
==

- Lambda functions are used in Python in order to simplify code.

- A lambda function is a function without a name. It is anonymous function.

- You can create a lambda function with lambda keyword and directly followed by the parameters and expression.

- Syntax :

    ```python
    lambda parameters: expression
    ```
- Example :

    **_using map()_**

    ```python
    nums = [1,2,3]
    nums_multiplied = list(map(lambda x:x*2 , nums))

    print(nums_multiplied)
    ```

    OUTPUT :
    > [2,4,6]

    **_using filter()_**

    ```python
    nums = [1,2,3,4,5,6,7]
    nums_even = list(filter(lambda x: x % 2 == 0, nums))

    print(nums_even)
    ```

    OUTPUT :
    > [2,4,6]

    
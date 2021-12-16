_Raise_
==

- You can manually raise an exception with the `raise` keyword.

- This is useful if you want to partially handle the exceptions and make another part of your code responsible for completing the handling.

- Example :

    ```python
    def calculate_user_input():
        try:
            x = int(input("Enter a number :"))
            y = 1/x
            print(y)
        except:
            print("Something went wrong")
            raise
        return None
    
    try:
        calculate_user_input()
    except ZeroDivisionError :
        print("You cannot divide by zero.")
    except:
        print("Something went wrong")
    ```

    OUTPUT :
    > Enter a number : 0  
    > Something went wrong  
    > You cannot divide by zero

_Assert_
==

- Raises an `AssertionError` if the expression evaluated to a false value.

- Example :

    ```python
    import math

    x = int(input("Enter a number :"))
    assert x >= 0
    x = math.sqrt(x)
    print(x)
    ```

    OUTPUT :
    > Enter a number : -1  
    > assert x >= 0  
    > AssertionError

    



_Errors and Exceptions_
==

- When you run a Python code and something goes wrong, Python raises an exception

- When exception is raised, Python expects it to be taken care of. 

    - If there's nothing to take care of, the program terminates.

    - If the exception is handled very well, the suspended program can be resumed and execution continues.

## _Handling exceptions_:

- You can handle the exceptions that may or may not occur during the execution of your program using the `try` and `except` block.

- The code block in try executes like a normal code. If an exception arises, it checks for except blocks

- Example :

    ```python
    try :
        x = int(input("Enter a number : "))
        y = 1/x
        print(y)
    except ZeroDivisionError :
        print("You cannot divide by zero !")
    except ValueError :
        print("Please enter an integer !")
    except :
        print("Something else went wrong ")

    print("All done!")
    ```

    OUTPUT :
    > Enter a number :0  
    > You cannot divide by zero !

    
_User-defined Modules_
==

- You can also create your own modules.

- If you've created many modules, you can even group modules together into a package.

- Contents of a module file gets implicitly executed by Python when we import the file.

- Example :

    **module.py**
    ```python 
    print("Hey! Hope you're doing good.")
    ```
    **main.py**
    ```python
    import module
    ```

    OUTPUT :
    >Hey! Hope you're doing good.


    The initalization of the module only happens once!

## \_\_name\_\_ variable

- When you create a module, Python initializes some extra values. One of them is a variable called \_\_name\_\_.

- The value of the variable is dependent on how the file is run.


    **module.py**
    ```python
    print(__name__)   

    if __name__ == "__main__":
    print("I am not in a module")
    ```

    **main.py**
    ```python
    import module
    ```

    If you run module.py directly, you'll see it prints __main__.

    If you run main.py (importing the module.py file), you'll see that it's value is the name of the module.


- The entities inside a module can be accessed using the dot notation

    **module.py**
    ```python
    secret_number = 5
    ```

    **main.py**
    ```python
    import module

    print(module.secret_number)
    ```

    OUTPUT :
    > 5

- When you don't want to expose some values within a module, you'll have to follow a convention by preceeding the variable name with one or two underscores as Python has no way to hide module content from users unfortunately.

    It means the value is a private member.

    **module.py**
    ```python
    #!/usr/bin/env python3 

    """ module.py - an example of Python module """

    __secretNumber = 2

    def get_sum(lst):
        Sum = 0
        for i in lst:
            Sum += (i - __secretNumber)
        return Sum

    if __name__ == "__main__":
        print("I run on my own!")
        
    ```
     - On the first line, starting with a hashbang(or a shebang) is used to tell Unix and Unix-like operating system, how to execute contents of the file.

     - Next, you see a line explaining the purpose and contents of the module. It is usually called a doscstring.

     - Then, you see functions defined inside the module that can be imported.

     - The if block in the end executes in case the file is run standalone.

     - You can import the module and use its contents in a main file.

    **main.py**
    ```python
    import module
    lst = [4, 10, 18, 50]
    module.get_sum(lst)
    ```


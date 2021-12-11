_Conditional Statements_
==

_Types_:

- **_if statement_** : Used when there're set of statement(s) to be executed when a certain condition is met

    Example:

    ```python
    if (5==5)
        print(" Five is equal to five !")
    ```

    OUTPUT :

    >Five is equal to five !

- **_if - else statement_** : Used when there're set of statement(s) to be executed when a certain condition is met and another set of statement(s) to be executed when the condition is False.

    Example:

    ```python
    if (5 > 10)
        print(" Five is greater than ten !")
    else
        print(" Five is lesser than or equal to ten ! " )
    ```

    OUTPUT :

    >Five is lesser than or equal to ten !

- **_if - elif - else statement_** : Used when there're set of statement(s) to be executed for each of the stated condition and another set of statement(s) to be executed when the condition is False.

    Example:

    ```python
    if (5 > 10)
        print(" Five is greater than ten !")
    elif (5 == 10)
        print(" Five is equal to ten ! " )
    else
        print(" Five is lesser than ten !" )
    ```

    OUTPUT :

    >Five is lesser than ten !

- **_Nester if - else statements_** : 

    Example:

    ```python
    if (5 <= 10)
        if (5 < 10)
            print(" Five is lesser than ten !")
        else
            print(" Five is equal to ten !" )
    else
        print(" Five is greater than ten ! " )
    ```

    OUTPUT :

    >Five is lesser than ten !




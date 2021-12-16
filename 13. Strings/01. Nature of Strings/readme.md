_Nature of Strings_
==
- In python, strings are generally stored as numbers rather than the strings themselves.

- Each character used by a computer corresponds to a unique number.

- The most commonly used character number assignment is ASCII (_American Standard Code for Information Interchanged_)

## _ASCII_ :

- ASCII provides space for 256 different characters. 

- It uses 8 bits for each sign.

- However, ASCII isn't flexible enough to add internationalization to account for different alphabets.

## _Unicode_ :


- Unicode assigns unique characters to a million code points.

- A code point is a unique number which makes a character.

    For example, 65 is a codepoint which makes the uppercase letter 'A' in ASCII encoding.

- The first 128 unique code points are identical to ASCII.

- The most commonly used Unicode is UTF-8 (_UTF - Unicode Transformation Format_)

- UTF-8 uses as many bits for each codepoint as it really needs to represent them.

- Since Python fully supports Unicode and UTF-8, it means that Python3 is completely internationalized.

## _Working with Strings_ :
- Strings are generally immutable sequences.

- There are certain functions that can be used with strings

- ### _len()_:    
    - In order to know the length of the string you can make use of `len()` function.

    - Example :

        ```python
        print(len("Hey there!"))
        ```

        OUTPUT :
        > 10

- ### _ord()_ :
    - If you want to know a character's code point, you can use the `ord()` function

    - Example :

        ```python
        print(ord('A'))
        ```

        OUTPUT :
        > 65

- ### _chr()_ :
    - If you know the code point and you want to know the corresponding character, you can use `chr()` function

    - Example :

        ```python
        print(chr(65))
        ```

        OUTPUT :
        > A

- ### _min()_ :

    - The `min()` function returns the character with least code point in the string

    - Example :

        ```python
        print(min("python"))
        ```
        OUTPUT :
        > n

- ### _max()_ :

    - The `max()` function returns the character with largest code point in the string

    - Example :

        ```python
        print(min("python"))
        ```
        OUTPUT :
        > y

- ### _Concatenation_ :

    - If you would like to concatenate 2 strings, you can use the '+' operator

    - Example :

        ```python
        print("hey" + " there!")
        ```

        OUTPUT :
        > hey there!

- ### _The '*' operator_ :

    - Example:
    
        ```python
        print("ha" * 5)
        ```

        OUTPUT :
        > hahahahaha




    
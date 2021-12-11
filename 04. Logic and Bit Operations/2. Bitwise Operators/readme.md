_Bitwise Operators_
=

- Conjunction - '&'

    1 & 1 ➡ 1  
    1 & 0 ➡ 0  
    0 & 1 ➡ 0  
    0 & 0 ➡ 0

- Disjunction - '|'

    1 | 1 ➡ 1  
    1 | 0 ➡ 1  
    0 | 1 ➡ 1  
    0 | 0 ➡ 0


- Negation - '~'

    ~ 1 ➡ 0  
    ~ 0 ➡ 1 
    

- Exclusive - '^'

    1 ^ 1 ➡ 0   
    1 ^ 0 ➡ 1  
    0 ^ 1 ➡ 1  
    0 ^ 0 ➡ 0

- Bit shifting :

    * **Right shift** - '>>':

        Example:

        ```python
        print(22 >> 1)
        ```

        OUTPUT:

        >11

        Binary representation of 22 -> 00010110

        on shifting the bits once to the right..

        we get, 00001011

        which is the binary equivalent of 11

    * **Left shift** - '<<':

        Example:

        ```python
        print(11 >> 1)
        ```

        OUTPUT:

        >22

        Binary representation of 11 -> 00001011

        on shifting the bits once to the left..

        we get, 00010110 

        which is the binary equivalent of 22



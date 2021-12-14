_Random Module_
==

- This module implements pseudo-random number generators for various distributions.

- For integers, there is uniform selection from a range. 

- For sequences, there is uniform selection of a random element, that is,

    - a function to generate a random permutation of a list in-place
    
    - a function for random sampling without replacement

- Almost all module functions depend on the basic function Random(). 

## _random()_ : 

- `random()` generates a random float uniformly in the semi-open range [0.0, 1.0).

    ```python
    import random

    print(random.random())
    ```
    OUTPUT :
    > 0.37444887175646646

## _seed()_ :

- `seed()` initializes the random number generator.

    ```python
    import random

    for i in range(5):
        random.seed()
        print(random.random())
    ```

    OUTPUT :
    > 0.7006636694280671  
    > 0.6083691041847227  
    > 0.47403441056274587  
    > 0.5250037930713529  
    > 0.4114639716845908

- In the following example, the seed is always set with the same value. So, the sequence of the generated values always look the same.

    ```python
    import random

    for i in range(5):
        random.seed(10)
        print(random.random())
    ```

    OUTPUT :

    > 0.376962302390386  
    > 0.376962302390386  
    > 0.376962302390386  
    > 0.376962302390386  
    > 0.376962302390386 

## _randbytes()_ :

- `randbytes(n)` generates n random bytes.

## _randrange()_ :

- `randrange(start, stop[, step])` returns a randomly selected element from range(start, stop, step).

    ```python
    import random

    print(random.randrange(50, 100))
    print(random.randrange(100))
    print(random.randrange(0, 100, 5))
    ```

    OUTPUT :
    > 67  
    > 43  
    > 55

## _randint()_ :

- `randint(a,b)` returns a random integer N such that a <= N <= b. 

- It is an Alias for randrange(a, b+1).

    ```python
    import random

    print(random.randint(10, 20))
    ```

    OUTPUT:
    > 12
## _getrandbits()_ :

- `getrandbits(k)` returns a non-negative Python integer with k random bits.

## _choice()_ :

- `choice(seq)` returns a random element from the non-empty sequence seq. If seq is empty, raises `IndexError`.

    ```python
    import random

    sweets = ["Milk Peda", "Jalebi", "Laddoo", "Halwa", "Badusha"]
    print(random.choice(sweets))
    ```

    OUTPUT :
    > Milk Peda

## _sample()_ :

- `sample(k)` returns a k length list of unique elements chosen from the population sequence or set. 

- Used for random sampling without replacement.

    ```python
    import random
    
    sweets = ["Milk Peda" , "Jalebi", "Laddoo", "Halwa", "Badusha"]
    print(random.sample(sweets,2))
    ```

    OUTPUT :
    > ['Milk Peda', 'Laddoo']
    
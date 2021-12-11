_Dictionaries_
==
- Dictionaries are used to store data values in key:value pairs.

- A dictionary is a collection which is ordered, changeable and does not allow duplicates.

Syntax:

```python
dict_name = {
    key1 : value1,
    key2 : value2,
        .
        .
        .
}
```

Example:

```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
print(thisdict)
```
OUTPUT:
>{'brand': 'Ford', 'model': 'Mustang', 'year': 1964}

## _Duplicates not allowed_:

- Dictionaries cannot have two items with the same key

- Duplicate values will overwrite existing values

Example:

```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964,
  "year": 2020
}
print(thisdict)
```

OUTPUT:
>{'brand': 'Ford', 'model': 'Mustang', 'year': 2020}

## _Accessing Items in Dictionaries_:

- You can access the items of a dictionary by referring to its key name, inside square brackets

    Example:

    ```python
    thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
    }
    x = thisdict["model"]
    print(x)
    ```

    OUTPUT:
    >Mustang

- There is also a method called get() that will give the value for the provided key

    Example:

    ```python
    thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
    }
    x = thisdict.get("model")
    print(x)
    ```

    OUTPUT:
    >Mustang
    
- You can also get a list of keys using key() method


    Example:

    ```python
    thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
    }
    print(thisdict.keys())
    ```

    OUTPUT:
    >dict_keys(['brand', 'model', 'year'])

## _Updating dictionary_ :

- You can change the value of a specific item by referring to its key name

    Example:

    ```python
    thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
    }
    thisdict["year"] = 2018
    ```

    OUTPUT :
    >{'brand': 'Ford', 'model' : 'Mustang','year': 2018}

- The update() method will update the dictionary with the items from the given argument.

    Example:

    ```python
    thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
    }
    thisdict.update({"year": 2020})
    ```

    OUTPUT :
    >{'brand': 'Ford', 'model' : 'Mustang','year': 2020}
- Adding an item to the dictionary is done by using a new index key and assigning a value to it.

    Example:

    ```python
    thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
    }
    thisdict["color"] = "red"
    print(thisdict)
    ```

    OUTPUT :
    >{'brand': 'Ford', 'model' : 'Mustang','year': 1964, 'color' : 'red'}

- The pop() method removes the item with the specified key name.

    Example:

    ```python
    thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
    }
    thisdict.pop("model")
    print(thisdict)
    ```

    OUTPUT :
    > {'brand': 'Ford', 'year': 1964}

- The popitem() method removes the last inserted item.

    Example:

    ```python
    thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
    }
    thisdict.popitem()
    print(thisdict)
    ```

    OUTPUT:
    > {'brand': 'Ford', 'model': 'Mustang'}

- The del keyword removes the item with the specified key name

    Example:

    ```python
    thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
    }
    del thisdict
    print(thisdict) #this will cause an error because "thisdict" no longer exists.
    ```

    OUTPUT :
    > Traceback (most recent call last):  
    > File "demo_dictionary_del3.py", line 7, in module
    >    print(thisdict) #this will cause an error because "thisdict" no longer exists.  
    > NameError: name 'thisdict' is not defined

- The clear() method empties the dictionary

    Example:

    ```python
    thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
    }
    thisdict.clear()
    print(thisdict)
    ```

    OUTPUT :
    >{}


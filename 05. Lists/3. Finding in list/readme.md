_Finding in List_
===

If you need to check if a particular item is in the list or not, the 'in' operator is used

Syntax:

```python
item in list_name
```

It basically returns True if the element is present and False if not present.

Example:

```python
lst = ['hi', 'hello', 'goodbye']
if 'Hey' in lst:
    print('Hey, How is your day today?')
else:
    print('You look happy!')

```

OUTPUT:
>You look happy!


You can also use 'not in' operator to check if a particular item is not in the list.

Example:

```python
lst = ['hi', 'hello', 'goodbye']
if 'Hey' not in lst:
    print('Hey, How is your day today?')
else:
    print('You look happy!')
```

OUTPUT :
> Hey, How is your day today?
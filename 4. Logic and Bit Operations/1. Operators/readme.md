_Operators_
==

- **_The 'and' operator_** :

    True and True   ➡ True

    True and False  ➡ False

    False and True  ➡ False

    False and False ➡ False

---

- **_The 'or' operator_** :

    True or True   ➡ True

    True or False  ➡ True

    False or True  ➡ True

    False or False ➡ False

---

- **_The 'not' operator_** :

    not True   ➡ False

    not False  ➡ True

---

Example 1:

```python
harry_age = 18
Sam_age = 22
if harry_age >= 18 and Sam_age >= 18:
    print("Both are adults !")
elif harry_age >= 18 or Sam_age >= 18:
    print("One of them is an adult !")
else:
    print("Both are not adults !")
```

OUTPUT :
>Both are adults

  
EXPLANATION :

harry_age >= 18 ➡ True  
Sam_age >= 18 ➡ True

True and True ➡ True

So, the if condition is True and the "Both are adults" string is printed



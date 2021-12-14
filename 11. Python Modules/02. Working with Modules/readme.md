_Modules_
==

- A module is a file containing Python definitons and statements, which can be imported and used when necessary.

- They allow you to split your codebase into smaller parts.

- You can use,
    - your own module
    - a module that's written by someone else
    - built-in modules in Python

## _Importing Modules_

- In order to access the code present in a module, you've to import those modules in the main file.

- You can do this with the import keyword, followed by the name of the module.

    Syntax:

    ```python
    import ModuleName
    ```

- If you need to import more than one module, you can append it to the list of imports seperated by a comma.

    Syntax:

    ```python
    import ModuleName1, ModuleName2
    ```
- Although the import instruction can be located anywhere in your code, it must be placed before the first use of the modules entities.

- You can also import only the module's entities into your code's namespace.

    Syntax:

    ```python
    from Modulename import ModuleEntity
    ```


    You've to tell Python from which module, you need to import the entitiy with the `from` keyword followed by the name of the module, then the `import` keyword followed by the name of the entity.

- You can also import multiple entities, by adding it to the list of entities to import, seperated by a comma.

    Syntax:

    ```python
    from ModuleName import ModuleEntity1, ModuleEntity2
    ```

    However, it is not recommended to follow this convention as it might cause NAME CONFLICTS later in the program.

- You can also import all entities offered by a module using an asterisk after the import keyword.

    Syntax:

    ```python
    from ModuleName import *
    ```

- You can also use alias (`as` keyword) in the import statement when you want to import a module or an entity that has a name that conflicts with an already defined entity, or even if you just don't like it.

    Syntax:

    ```python
    import ModuleName as YourDesiredName
    ```
    
_Procedural Approach_
==

- Distinguishes data (variables) and code (modules and functions).

- Functions can use the data, but the data cannot use the functions.

- Example :

    **Implementing stack operations using procedural approach**

    ```python
    stack = []

    def push(val):
        stack.append(val)

    def pop():
        val = stack[-1]
        del stack[-1]
        return val

    push(3)
    push(2)
    push(1)
    print(pop())
    print(pop())
    print(pop())
    ```

    OUTPUT :
    > 1  
    > 2  
    > 3  

    This approach clearly works but with certain disadvantages :

    - stack variable is highly vulnerable

    -  The variable can be modified by anyone. There's no protection.

    - When there's a need for lot more stacks, you'll have to create another set of push and pop functions for each stack which in turn is **_redundant_**. 

    - So, this approach is simply not future- proof

_Object Oriented Approach_
==

- Data and code are enclosed together in classes. 

- Objects exchange data and activate their methods

- Example:

    **Stack Operations using OO Approach**

    ```python
    class Stack:
        def __init(self):
            self.__satck_list = []
        
        def push(self, val):
            self.__stack_list.append(val)

        def pop(self):
            val = self.__stack_list[-1]
            del self.__stack_list[-1]
            return val

    stack_object = Stack()
    stack_object2 = Stack()

    stack_object.push(3)
    stack_object.push(2)
    stack_object.push(1)

    stack_object2.push(10)
    stack_object2.push(9)

    print(stack_object2.pop())
    print(stack_object.pop())
    print(stack_object.pop())
    print(stack_object.pop())

    ```

    OUTPUT :
    > 9  
    > 1  
    > 2   
    > 3  

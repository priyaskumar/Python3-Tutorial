_Getters and Setters_
==

- If you want to restrict your users to change the value of an attribute, once it has been initalized you gotto create a read-only attributes.

- Read-only attributes are created using teh decorator : `@property` in python.

- You can also set values to read-only attributes. Again, you do it with the help of a decorator : `@_YourAttribute_.setter`.

- You have to create seperate methods for getting and setting the values for read-only attributes.

- Example:

    ```python
    class Vehicle:
        def __init__(self, number_of_wheels, type_of_tank, seating_capacity, maximum_velocity):
            self.number_of_wheels = number_of_wheels
            self.type_of_tank = type_of_tank
            self.seating_capacity = seating_capacity
            self.maximum_velocity = maximum_velocity
        
        @property
        def number_of_wheels(self):        # getter
            return self.__number_of_wheels
        
        @number_of_wheels.setter            # setter
        def number_of_wheels(self, number):
            self.__number_of_wheels = number
    ```

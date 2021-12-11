_Constructors_
==

- These are special methods to define the attributes of a class

- For eg, vehicle class has four attributes: number of wheels, type of tank, seating capacity, and maximum velocity. We set all these attributes when creating a vehicle object.

    We use the `__init__` method. We call it a constructor method. So when we create the vehicle object, we can define these attributes.

    ```python
    class Vehicle:
        def __init__(self, number_of_wheels, type_of_tank, seating_capacity, maximum_velocity):
            self.number_of_wheels = number_of_wheels
            self.type_of_tank = type_of_tank
            self.seating_capacity = seating_capacity
            self.maximum_velocity = maximum_velocity
    
    tesla_model_s = Vehicle(4, 'electric', 5, 250)
    ```



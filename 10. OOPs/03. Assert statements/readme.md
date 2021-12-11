_Assert statements_
==

- When there is a need to accept certain parameters only if they follow a certain condition, you can use  the `assert` statement

- It helps you to check for the condition and throw an error if the condition is not met. This way you can make sure that the parameters are accepted in proper format

- Syntax :
    ```python
    assert <condition>, <error message to display> 
    ```

- Example,

    ```python
    class Vehicle:
        def __init__(self, number_of_wheels, type_of_tank, seating_capacity, maximum_velocity):

            # Run validations to received arguments
            assert number_of_wheels >= 0, "No of wheels cannot be negative!"
            assert seating_capacity >= 0, "Seating capacity cannot be negative!"

            # Assign to self object    
            self.number_of_wheels = number_of_wheels
            self.type_of_tank = type_of_tank
            self.seating_capacity = seating_capacity
            self.maximum_velocity = maximum_velocity
    
    tesla_model_s = Vehicle(4, 'electric', -5, 250)
    ```

    


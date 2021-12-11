_Class Methods vs Static Methods_
==


## _Class methods_

- `Class Methods` are a way to define the characteristics a particular class. 

- A class method can be accessed in the class level itself. 

- To access a class method there is no need to create an object.

- Inorder to convert a method into a class method, you can use the decorator:

    ```python
     @classmethod
    ```

    _Decorators_ in Python is just a quick way to change the behaviour of the functions what we write by basically calling them just before the line that we create our function.


## _Handling CSV Files_

- In order to keep your python program, easy to debug and understandable, you could keep the actual data and code in seperate files.

- The actual data can be maintained in a _CSV File_

- You could store your values as comma seperated values where each line will represent a single strucured data.

- CSV is a great option as it allows the data to be saved in a table structured format.

- A CSV file is created with the format : `<filename>.csv`

- Example:

    **_Vehicles.csv_**

    ```
    model, number_of_wheels, type_of_tank, seating_capacity, maximum_velocity  
    'Tesla Model S',4, 'electric', 5, 250  
    'Mercedes Benz E-class',4, 'diesel',5,250
    'Audi A6',4,'petrol',5,250
    ```

- The first line represents the columns for the data maintained

- In order to read the CSV file you need to create a method inside the class, that is a `class method`

- Example:

    ```python
    class Vehicle:
        @classmethod
        def instantiate(cls):
            with open("Vehicles.csv", "r") as f:
                reader = csv.DictReader(f)
                vehicles = list(reader)

            for vehicle in vehicles:
                Vehicle(
                    model = vehicle.get('name'),
                    number_of_wheels = int(vehicle.get(' number_of_wheels'))
                    type_of_tank = vehicle.get('type_of_tank') 
                    seating_capacity = int(vehicle.get('seating_capacity'))   
                    maximum_velocity = float(vehicle.get('maximum_velocity'))
                )

    Vehicle.instantiate() 
    ```

## _Static Methods_

- A static method is also a method that is bound to the class and not the object of the class. 

- A static method can't access or modify the class state. 

- The DECORATOR `@staticmethod` is used to create the static method.

- Static methods don't pass the object itself as the first argument. It is just like a regular function as they don't take instance as a parameter by default.

- Example,

    ```python
    class Vehicle:
        @staticmethod 
        def is_integer(num):
            # Checks if the floats are point zero
            # Ex: 5.0, 12.0
            if isinstance(num, float):
                return num.is_integer()
            elif isinstance(num, int):
                return True
            else:
                return False

    print(Vehicle.is_integer(7))
    print(Vehicle.is_integer(7.5))
    print(Vehicle.is_integer(7.0))
    ```

    OUTPUT :
    > True
    > False
    > True

- A static method can also be accessed from the instance level.

## _When to use a static method?_

- To Group utility function to a class.

- When you don't want subclasses of a class change/override a specific implementation of a method.

## _When to use a class method?_

- To instantiate instances of the class.

- To change the attributes of an instance.



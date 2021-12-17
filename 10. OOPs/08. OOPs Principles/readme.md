_OOPs Principles_
==
OOPs basically comes with five basic principles :
- Abstraction
- Encapsulation
- Modularity
- Inheritance
- Polymorphism

## _Abstraction_

- Abstraction is the concept of showing the necessary details and hiding the background details.

- For an instance, if you to need to send an email within the program, you will have to create a method and call other methods which are responsible for sending an email like 
    - Establishing a connection to the SMTP server
    - Generating content for an email body
    - Sending the email  

    But to the user, all these methods, won't make sense and isn't necessary for them to view all these methods.

    So, In Python, we hide the methods by making them private. This makes the method inaccessible outside the class.

## _Encapsulation_

- Encapsulation is the process of binding both attributes and methods together within a class. 

- Through encapsulation, the internal details of a class can be hidden from outside.  
You don't allow direct access to the attributes, but you can create methods inside the class, which will enable the user to modify the value of an attribute.

- Encapsulation is a mechanism to implement abstraction.

- For an instance, restricting the ability to overwrite the values for your objects within your setters. 

## _Modularity_

- Modularity is the process of decomposing a program into a set of modules so as to reduce the overall complexity of the problem.

- Modularity can be visualized as a way of mapping encapsulated abstractions into real, physical modules having high cohesion within the modules.

- For an instance, As your project grows, you need to work with multiple files, to have everything clean and organized.

    So, you will have to create a seperate file for each class and have a main file where you import all the classes and create instances of it.

## _Inheritance_

- Inheritance is the concept of inheriting the properties and characteristics of one to the another.

- It uses the concept of reusability.

- This helps you to keep our code organized and respresent it in a way that is more readable.

## _Polymorphism_

- Polymorphism refers to the use of a single entity that knows how to handle different kinds of objects.

- A single entity takes various forms in the program according to the use cases.


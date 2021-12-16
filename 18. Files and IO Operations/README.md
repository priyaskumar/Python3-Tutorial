_Files and I/O Operations_
==

- In python you don't directly work with files. Instead, you work with stream.

- Stream consists of certain methods in order to perform certain actions that affect the real file.

## _Actions performed in Stream_ :

- **open** : connects to a stream in order to open a file in 
    (for text files)
    - read mode (r), 
    - write mode (w), 
    - read and update mode (r+)
    - write and update mode (w+)
    - append mode (a)

    (for binary files)
    - read mode (rb), 
    - write mode (wb), 
    - read and update mode (r+b)
    - write and update mode (w+b)
    - append mode (ab)


    ```python
    stream = open("path/to/file", "r")
    ```

- **close** : closes the connection to the stream

    ```python
    stream = open("path/to/file", "r")
    stream.close()
    ```


## _Types of Stream_ :

- **Text Stream :** A sequence of typographical characters (letters, digits, etc)

- **Binary Stream :** A sequence of bytes

---

       
When you run your program, three streams are automatically opened

- *sys.stdin* : Responsible for reading data by the running program.

- *sys.stdout* : Responsible for outputting data by the running program.

- *sys.sterr* : Responsible for errors raised by the running program

These are available in system module.

## _Read from a file_:

- **read()** :

    ```python
    from os import strerror

    try :
        stream = open('text.txt', "rt")
        character = stream.read(1)
        while character != '':
            print(character, end ='\n')
            character = stream.read(1)
        stream.close()

    except IOError as e:
        print("I/O error occured: ", strerror(e.errno))
    ```

## _bytearray_ :

- Specialized class to handle amorpous data

    ```python
    data = bytearray(5)
    print(data)
    ```

    OUTPUT :

    > bytearray(b'\x00\x00\x00\x00\x00')
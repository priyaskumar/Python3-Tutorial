_Nested List_
===

- **_Matrix_** : 2D lists

    A matrix which is generally a two-dimensional list can be created as follows,

    ```python
    matrix = [
        [1,2,3,4],
        [0,5,7,9],
        [4,6,3,5]
    ]
    ```

    In order to access the jth element present in ith row,

    ```python
    print(list_name[i][j])
    ```
    Example:

    ```python
    print(matrix[2][2])

    # prints 2nd element in 2nd row

    ```

    OUTPUT :
    > 3

- **_Cube_** : 3D list

    Example:

    ```python
    lst = [
            [
                [1,2,3,4],
                [0,5,7,9],
                [4,6,3,5]
            ],
            [
                [4,6,3,5],
                [1,2,3,4],
                [0,5,7,9]
            ]
    ]

    print(lst[1][1][2])
    ```

    OUTPUT:
    > 3

_Python Package Installer_
==

- The Python community members often create packages and make their code accessible to any Python developer.

- You can find them in a centralized repository called _PypI_ (Python Package Index), that contains all available software packages, which is maintained by a workgroup called **Packaging Working Group**.

- This repo is completely free and you're allowed to use any code from it with a tool called PIP.
PIP

- With PIP, you can install packages that are available in the PyPI repo. 

- You can check if you have PIP installed by using this command in the terminal

    ```
    pip --version
    ```

    It returns the version of PIP installed on your computer.

- PIP uses the internet to query PyPI and download the required packages.

- You can browse through different packages in the PyPI website  
    ```
    https://pypi.org/. 
    ```
     
- You can install a package with the following command


    ```
    pip install package_name
    ```

- You can see some information about the package with the following command

    ```
    pip show package_name
    ```

    This command tells you who made it, what version of it is installed, a description and possible dependencies.

- Dependencies are other modules that the installed package needs in order to run.

- You can also view the list of all the packages available locally by using the following command

    ```
    pip list
    ```
- If you no longer need a package, you can uninstall it with the following command

    ```
    pip uninstall package_name
    ```
_Platform Module_
==

- It can be useful to know on what platform the code is being executed. 

- The platform module in python provides hardware, operating system, and interpreter information.

## _platform()_ :

- `platform()` function gives you access to hardware details. 

- It allows you to control how the data is presented with two arguments:

    - **_aliased_** - If aliased is set to True or any non-zero value, it may present the alternative underlying layer names instead of the common ones.

    - **_terse_** - If terse is set to a non-zero value, it may present a briefer form of the result. However, this is platfrom dependent.

- Example :

    ```python
    import platform

    platform.platform()
    platform.platform(aliased=True)
    platform.platform(terse=True)
    ```


    OUTPUT :

    > 'Windows-10-10.0.18362-SP0'  
    > 'Windows-10-10.0.18362-SP0'  
    > 'Windows-10'

## _machine()_ :

- `machine()` function returns the machine type, e.g. 'i386'. 

- An empty string is returned if the value cannot be determined.

- Example :

    ```python
    import platform

    platform.machine()
    ```

    OUTPUT :
    > 'AMD64'

## _system()_ :

- `system()` function returns the system/OS name, such as 'Linux', 'Darwin', 'Java', 'Windows'.

- An empty string is returned if the value cannot be determined.

- Example :

    ```python
    import python

    platform.system()
    ```

    OUTPUT :
    > 'Windows'

## _node()_ :

- `node()` returns the computer’s network name (may not be fully qualified!). 

- An empty string is returned if the value cannot be determined.

- Example :

    ```python
    import python

    platform.node()
    ```

    OUTPUT :
    > 'DESKTOP-RLQ1G3O'

## _processor()_ :

- `processor()` returns the (real) processor name, e.g. 'amdk6'.

- An empty string is returned if the value cannot be determined. 

- Note that many platforms do not provide this information or simply return the same value as for machine(). NetBSD does this.

- Example :

    ```python
    import python

    platform.processor()
    ```

    OUTPUT :
    > 'Intel64 Family 6 Model 69 Stepping 1, GenuineIntel'

## _release()_ :

- `release()` returns the system’s release, e.g. '2.2.0' or 'NT' 

- An empty string is returned if the value cannot be determined.

- Example :

    ```python
    import python

    platform.release()
    ```

    OUTPUT :
    > '10'

## _architecture()_ :

- `architecture()` returns a tuple (bits, linkage) which contain information about the bit architecture and the linkage format used for the executable. 

- Both values are returned as strings.

- Example :

    ```python
    import python

    platform.architecture()
    ```

    OUTPUT :
    > ('64bit', 'WindowsPE')

## _uname()_ :

- `uname()` returns a namedtuple() containing six attributes: system, node, release, version, machine, and processor.

- Entries which cannot be determined are set to ''.

- Example :

    ```python
    import python

    platform.uname()
    ```

    OUTPUT :
    > uname_result (system='Windows', node='DESKTOP-RLQ1G3O', release='10', version='10.0.18362', machine='AMD64')

## _win32_edition()_ :

- `win32_edition()` returns a string representing the current Windows edition. 

- Possible values include but are not limited to 'Enterprise', 'IoTUAP', 'ServerStandard', and 'nanoserver'.

- Example :

    ```python
    import python

    platform.win32_edition()
    ```

    OUTPUT :
    > 'CoreSingleLanguage'


## _win32_is_iot()_ :

- `win32_is_iot()` return True if the Windows edition returned by win32_edition() is recognized as an IoT edition.

- Example :

    ```python
    import python

    platform.win32_is_iot()
    ```

    OUTPUT :
    > False

   
## _version()_ :

- 'version()` function returns the system’s release version, e.g. '#3 on degas'. 

- An empty string is returned if the value cannot be determined.

- Example :

    ```python
    import python

    platform.version()
    ```

    OUTPUT :
    > '10.0.18362'

## _python_version()_ :

- `python_version()` returns the Python version as string 'major.minor.patchlevel'.

- Note that unlike the Python sys.version, the returned value will always include the patchlevel (it defaults to 0).

- Example :

    ```python
    import python

    platform.python_version()
    ```

    OUTPUT :
    > '3.9.0'

## _python_implementation()_ :

- `python_implementation()` returns a string identifying the Python implementation. 

- Possible return values are: ‘CPython’, ‘IronPython’, ‘Jython’, ‘PyPy’.
    
- Example :

    ```python
    import python

    platform.python_implementation()
    ```

    OUTPUT :
    > 'CPython'

## _python_version_tuple()_ :

- `python_version_tuple()` returns the Python version as tuple (major, minor, patchlevel) of strings.

- Note that unlike the Python sys.version, the returned value will always include the patchlevel (it defaults to '0').

- Example :

    ```python
    import python

    platform.python_version_tuple()
    ```

    OUTPUT :
    > ('3', '9', '0')


## _python_build()_ :

- `python_build()` returns a tuple (buildno, builddate) stating the Python build number and date as strings.

- Example :

    ```python
    import python

    platform.python_build()
    ```

    OUTPUT :
    > ('tags/v3.9.0:9cf6752', 'Oct  5 2020 15:34:40')




## _python_compiler()_ :

- `python_compiler()` returns a string identifying the compiler used for compiling Python.

- Example :

    ```python
    import python

    platform.python_compiler()
    ```

    OUTPUT :
    > 'MSC v.1927 64 bit (AMD64)'


## _python_branch()_ :

- `python_branch()` returns a string identifying the Python implementation SCM branch.

- Example :

    ```python
    import python

    platform.python_branch()
    ```

    OUTPUT :
    > 'tags/v3.9.0'


## _python_revision()_ :

- `python_revision()` returns a string identifying the Python implementation SCM revision.

- Example :

    ```python
    import python

    platform.python_revision()
    ```

    OUTPUT :
    > '9cf6752'






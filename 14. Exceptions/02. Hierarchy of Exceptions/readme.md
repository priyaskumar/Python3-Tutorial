_Hierarchy of Exceptions_
==

The Python exception class hierarchy consists of a few dozen different exceptions spread across a handful of important base class types.

**Hierarchy** :   
- BaseException
  - Exception
    - ArithmeticError
        - FloatingPointError
        - OverflowError
        - ZeroDivisionError
    - AssertionError
    - AttributeError
    - BufferError
    - EOFError
    - ImportError
    - LookupError
        - IndexError
        - KeyError
    - MemoryError
    - NameError
        - UnboundLocalError
    - OSError
        - BlockingIOError
        - ChildProcessError
        - ConnectionError
            - ConnectionAbortedError
            - ConnectionRefusedError
            - ConnectionResetError
        - FileExistsError
        - FileNotFoundError
        - InterruptedError
    - ReferenceError
    - RuntimeError
        - NotImplementedError
        - RecursionError
    - StopIteration
    - StopAsyncIteration
    - SyntaxError
        - IndentationError
            - TabError
    - SystemError
    - TypeError
    - ValueError
        - UnicodeError
            - UnicodeDecodeError
            - UnicodeEncodeError
            - UnicodeTranslateError
    - KeyboardInterrupt
    - SystemExit

    
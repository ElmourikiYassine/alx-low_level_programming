# Tasks for GitHub Repository: alx-higher_level_programming

## Task 0: Lookup

- Write a function `lookup(obj)` that returns the list of available attributes and methods of an object.
  - Prototype: `def lookup(obj):`
  - Returns a list object
  - You are not allowed to import any module
  - Example:
    ```python
    lookup = __import__('0-lookup').lookup

    class MyClass1(object):
        pass

    class MyClass2(object):
        my_attr1 = 3
        def my_meth(self):
            pass

    print(lookup(MyClass1))
    print(lookup(MyClass2))
    print(lookup(int))
    ```

## Task 1: My list

- Write a class `MyList` that inherits from list.
  - Public instance method: `def print_sorted(self)` that prints the list, but sorted (ascending sort).
  - You can assume that all the elements of the list will be of type int.
  - You are not allowed to import any module
  - Example:
    ```python
    MyList = __import__('1-my_list').MyList

    my_list = MyList()
    my_list.append(1)
    my_list.append(4)
    my_list.append(2)
    my_list.append(3)
    my_list.append(5)
    print(my_list)
    my_list.print_sorted()
    print(my_list)
    ```

## Task 2: Exact same object

- Write a function `is_same_class(obj, a_class)` that returns True if the object is exactly an instance of the specified class; otherwise False.
  - Prototype: `def is_same_class(obj, a_class):`
  - You are not allowed to import any module
  - Example:
    ```python
    is_same_class = __import__('2-is_same_class').is_same_class

    a = 1
    if is_same_class(a, int):
        print("{} is an instance of the class {}".format(a, int.__name__))
    if is_same_class(a, float):
        print("{} is an instance of the class {}".format(a, float.__name__))
    if is_same_class(a, object):
        print("{} is an instance of the class {}".format(a, object.__name__))
    ```

## Task 3: Same class or inherit from

- Write a function `is_kind_of_class(obj, a_class)` that returns True if the object is an instance of, or if the object is an instance of a class that inherited from, the specified class; otherwise False.
  - Prototype: `def is_kind_of_class(obj, a_class):`
  - You are not allowed to import any module
  - Example:
    ```python
    is_kind_of_class = __import__('3-is_kind_of_class').is_kind_of_class

    a = 1
    if is_kind_of_class(a, int):
        print("{} comes from {}".format(a, int.__name__))
    if is_kind_of_class(a, float):
        print("{} comes from {}".format(a, float.__name__))
    if is_kind_of_class(a, object):
        print("{} comes from {}".format(a, object.__name__))
    ```

## Task 4: Only sub class of

- Write a function `inherits_from(obj, a_class)` that returns True if the object is an instance of a class that inherited (directly or indirectly) from the specified class; otherwise False.
  - Prototype: `def inherits_from(obj, a_class):`
  - You are not allowed to import any module
  - Example:
    ```python
    inherits_from = __import__('4-inherits_from').inherits_from

    a = True
    if inherits_from(a, int):
        print("{} inherited from class {}".format(a, int.__name__))
    if inherits_from(a, bool):
        print("{} inherited from class {}".format(a, bool.__name__))
    if inherits_from(a, object):
        print("{} inherited from class {}".format(a, object.__name__))
    ```

## Task 5: Geometry module

- Write an empty class `BaseGeometry`.
  - You are not allowed to import any module
  - Example:
    ```python
    BaseGeometry = __import__('5-base_geometry').BaseGeometry

    bg = BaseGeometry()

    print(bg)
    print(dir(bg))
    print(dir(BaseGeometry))
    ```

## Task 6: Improve Geometry

- Write a class `BaseGeometry` (based on 5-base_geometry.py).
  - Public instance method: `def area(self)` that raises an Exception with the message `area() is not implemented`.
  - You are not allowed to import any module
  - Example:
    ```python
    BaseGeometry = __import__('6-base_geometry').BaseGeometry

    bg = BaseGeometry()

    try:
        print(bg.area())
    except Exception as e:
        print("[{}] {}".format(e.__class__.__name__, e))
    ```
## Task 7: Integer validator

- Write a class `BaseGeometry` (based on 6-base_geometry.py).
  - Public instance method: `def area(self)` that raises an Exception with the message `area() is not implemented`.
  - Public instance method: `def integer_validator(self, name, value)` that validates value:
    - You can assume name is always a string
    - If value is not an integer: raise a `TypeError` exception, with the message `<name> must be an integer`
    - If value is less or equal to 0: raise a `ValueError` exception with the message `<name> must be greater than 0`
  - You are not allowed to import any module
  - Example:
    ```python
    BaseGeometry = __import__('7-base_geometry').BaseGeometry

    bg = BaseGeometry()

    bg.integer_validator("my_int", 12)
    bg.integer_validator("width", 89)

    try:
        bg.integer_validator("name", "John")
    except Exception as e:
        print("[{}] {}".format(e.__class__.__name__, e))

    try:
        bg.integer_validator("age", 0)
    except Exception as e:
        print("[{}] {}".format(e.__class__.__name__, e))

    try:
        bg.integer_validator("distance", -4)
    except Exception as e:
        print("[{}] {}".format(e.__class__.__name__, e))
    ```

## Task 8: Rectangle

- Write a class `Rectangle` that inherits from `BaseGeometry` (7-base_geometry.py).
  - Instantiation with width and height: `def __init__(self, width, height):`
  - Width and height must be private. No getter or setter
  - Width and height must be positive integers, validated by `integer_validator`
  - Example:
    ```python
    Rectangle = __import__('8-rectangle').Rectangle

    r = Rectangle(3, 5)

    print(r)
    print(dir(r))

    try:
        print("Rectangle: {} - {}".format(r.width, r.height))
    except Exception as e:
        print("[{}] {}".format(e.__class__.__name__, e))

    try:
        r2 = Rectangle(4, True)
    except Exception as e:
        print("[{}] {}".format(e.__class__.__name__, e))
    ```

## Task 9: Full rectangle

- Write a class `Rectangle` that inherits from `BaseGeometry` (7-base_geometry.py). (task based on 8-rectangle.py)
  - Instantiation with width and height: `def __init__(self, width, height):`
  - Width and height must be private. No getter or setter
  - Width and height must be positive integers validated by `integer_validator`
  - The `area()` method must be implemented
  - `print()` should print, and `str()` should return, the following rectangle description: `[Rectangle] <width>/<height>`
  - Example:
    ```python
    Rectangle = __import__('9-rectangle').Rectangle

    r = Rectangle(3, 5)

    print(r)
    print(r.area())
    ```

## Task 10: Square #1

- Write a class `Square` that inherits from `Rectangle` (9-rectangle.py):
  - Instantiation with size: `def __init__(self, size):`
  - Size must be private. No getter or setter
  - Size must be a positive integer, validated by `integer_validator`
  - The `area()` method must be implemented
  - Example:
    ```python
    Square = __import__('10-square').Square

    s = Square(13)

    print(s)
    print(s.area())
    ```

## Task 11: Square #2

- Write a class `Square` that inherits from `Rectangle` (9-rectangle.py). (task based on 10-square.py).
  - Instantiation with size: `def __init__(self, size):`
  - Size must be private. No getter or setter
  - Size must be a positive integer, validated by `integer_validator`
  - The `area()` method must be implemented
  - `print()` should print, and `str()` should return, the square description: `[Square] <width>/<height>`
  - Example:
    ```python
    Square = __import__('11-square').Square

    s = Square(13)

    print(s)
    print(s.area())
    ```

## Task 12: My integer

- Advanced Task
- Write a class `MyInt` that inherits from `int`:
  - `MyInt` is a rebel. `MyInt` has `==` and `!=` operators inverted
  - You are not allowed to import any module
  - Example:
    ```python
    MyInt = __import__('100-my_int').MyInt

    my_i = MyInt(3)
    print(my_i)
    print(my_i == 3)
    print(my_i != 3)
    ```

## Task 13: Can I?

- Advanced Task
- Write a function `add_attribute(obj, name, value)` that adds a new attribute to an object if it’s possible:
  - Raise a `TypeError` exception, with the message `can't add new attribute` if the object can’t have a new attribute
  - You are not allowed to use try/except
  - You are not allowed to import any module
  - Example:
    ```python
    add_attribute = __import__('101-add_attribute').add_attribute

    class MyClass():
        pass

    mc = MyClass()
    add_attribute(mc, "name", "John")
    print(mc.name)

    try:
        a = "My String"
        add_attribute(a, "name", "Bob")
        print(a.name)
    except Exception as e:
        print("[{}] {}".format(e.__class__.__name__, e))
    ```

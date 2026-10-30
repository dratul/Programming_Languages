# 4.2 Python Basics

This lesson introduces variables, data types, output, input, and operators in Python 3.

## Variables and Data Types

A **variable** is a name that refers to a value. Python creates a variable when a value is assigned to it:

```python
volunteer_name = "Asha"
event_number = 12
battery_percent = 86.5
is_registered = True
```

Common built-in data types include:

| Type | Stores | Example |
| --- | --- | --- |
| `int` | Whole numbers | `12` |
| `float` | Numbers with a decimal part | `86.5` |
| `str` | Text | `"Jhansi"` |
| `bool` | `True` or `False` values | `True` |

Python determines the type from the assigned value. Use `type()` to inspect a value's type:

```python
print(type(event_number))
```

**Output:**

```text
<class 'int'>
```

Python is case-sensitive: `battery_percent` and `Battery_percent` are different names. Use descriptive variable names, and do not put spaces in a variable name.

## Displaying Values with `print()`

The `print()` function displays one or more values:

```python
name = "Asha"
event_role = "heritage walk volunteer"

print("Volunteer:", name)
print(f"{name} is a {event_role}.")
```

An **f-string** begins with `f` and lets you place variable values inside `{}`.

**Output:**

```text
Volunteer: Asha
Asha is a heritage walk volunteer.
```

## Reading Input with `input()`

The `input()` function displays a prompt and returns the entered value as text (`str`):

```python
name = input("Enter your name: ")
print(f"Namaste, {name}!")
```

Convert input to a number when doing arithmetic:

```python
first_number = int(input("Enter a whole number: "))
second_number = int(input("Enter another whole number: "))
print("Sum:", first_number + second_number)
```

For example, if the user enters `4` and then `7`, the output is:

```text
Sum: 11
```

Use `float()` instead of `int()` when the input may contain a decimal value. The input must be a valid number for the conversion to work.

## Operators

### Arithmetic Operators

| Operator | Meaning | Example |
| --- | --- | --- |
| `+` | Addition | `7 + 2` gives `9` |
| `-` | Subtraction | `7 - 2` gives `5` |
| `*` | Multiplication | `7 * 2` gives `14` |
| `/` | Division | `7 / 2` gives `3.5` |
| `//` | Floor division | `7 // 2` gives `3` |
| `%` | Remainder | `7 % 2` gives `1` |
| `**` | Power | `2 ** 3` gives `8` |

### Comparison and Logical Operators

Comparison operators (`==`, `!=`, `<`, `<=`, `>`, `>=`) compare values and produce `True` or `False`.

Logical operators combine or reverse conditions:

```python
age = 19
has_id = True

print(age >= 18 and has_id)
```

**Output:**

```text
True
```

Python uses `and`, `or`, and `not` for logical operations.

## Complete Example: Rectangle Area

```python
length = float(input("Enter solar panel length in metres: "))
breadth = float(input("Enter solar panel breadth in metres: "))

area = length * breadth
print(f"Solar panel area: {area} square metres")
```

The program reads two decimal-capable values, multiplies them, and displays the result.

For example, with length `5` and breadth `3`, the interaction is:

```text
Enter solar panel length in metres: 5
Enter solar panel breadth in metres: 3
Solar panel area: 15.0 square metres
```

## Key Points

* Assign a value to create a variable; Python determines its type from that value.
* `input()` returns text, so convert it with `int()` or `float()` before numeric calculations.
* Use `print()` to display values and f-strings to include values in text.
* Python provides arithmetic, comparison, and logical operators.

## Practice Tutorials

1. Read two rupee amounts for a community event and display their sum, difference, product, and quotient.

2. Write a Python program to calculate the area of a small solar panel using `input()` and arithmetic operators.

---

[Next topic: Python control flow](Unit_04_03_Python_Control_Flow.md)

## Related topics
- [Why Python](Unit_04_01_Why_Python.md)
- [Python basics](Unit_04_02_Python_Basics.md)
- [Python control flow](Unit_04_03_Python_Control_Flow.md)
- [Python functions](Unit_04_04_Python_Functions.md)

---


[Back to syllabus](../README.md)

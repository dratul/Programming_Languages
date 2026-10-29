# 4.2 Python Basics

This lesson introduces variables, data types, output, input, and operators in Python 3.

## Variables and Data Types

A **variable** is a name that refers to a value. Python creates a variable when a value is assigned to it:

```python
student_name = "Asha"
roll_number = 12
marks = 86.5
is_present = True
```

Common built-in data types include:

| Type | Stores | Example |
| --- | --- | --- |
| `int` | Whole numbers | `12` |
| `float` | Numbers with a decimal part | `86.5` |
| `str` | Text | `"Asha"` |
| `bool` | `True` or `False` values | `True` |

Python determines the type from the assigned value. Use `type()` to inspect a value's type:

```python
print(type(roll_number))
```

Python is case-sensitive: `marks` and `Marks` are different names. Use descriptive variable names, and do not put spaces in a variable name.

## Displaying Values with `print()`

The `print()` function displays one or more values:

```python
name = "Asha"
marks = 86.5

print("Student:", name)
print(f"{name} scored {marks} marks.")
```

An **f-string** begins with `f` and lets you place variable values inside `{}`.

**Output:**

```text
Student: Asha
Asha scored 86.5 marks.
```

## Reading Input with `input()`

The `input()` function displays a prompt and returns the entered value as text (`str`):

```python
name = input("Enter your name: ")
print(f"Hello, {name}!")
```

Convert input to a number when doing arithmetic:

```python
first_number = int(input("Enter a whole number: "))
second_number = int(input("Enter another whole number: "))
print("Sum:", first_number + second_number)
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

Python uses `and`, `or`, and `not` for logical operations.

## Complete Example: Rectangle Area

```python
length = float(input("Enter the length: "))
breadth = float(input("Enter the breadth: "))

area = length * breadth
print(f"Area of the rectangle: {area}")
```

The program reads two decimal-capable values, multiplies them, and displays the result.

## Key Points

* Assign a value to create a variable; Python determines its type from that value.
* `input()` returns text, so convert it with `int()` or `float()` before numeric calculations.
* Use `print()` to display values and f-strings to include values in text.
* Python provides arithmetic, comparison, and logical operators.

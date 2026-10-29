# 4.4 Python Functions

A **function** is a named block of code that performs a task. Functions help organize a program, avoid repeating code, and make logic easier to test.

## Defining and Calling a Function

Use the `def` keyword to define a function. The indented statements form the function body. A function runs when it is called:

```python
def greet():
    print("Hello!")

greet()
```

The output is:

```text
Hello!
```

## Parameters and Arguments

A function can receive values through **parameters**. The values supplied when calling it are **arguments**:

```python
def greet_person(name):
    print(f"Hello, {name}!")

greet_person("Asha")
```

Here, `name` is a parameter and `"Asha"` is an argument.

**Output:**

```text
Hello, Asha!
```

## Returning a Value

Use `return` to send a result back to the code that called the function:

```python
def add_numbers(first, second):
    return first + second

total = add_numbers(4, 6)
print("Sum:", total)
```

**Output:**

```text
Sum: 10
```

`return` ends the function and provides its result. If a function has no `return` statement, it returns `None`.

## Default Arguments

A parameter can have a default value. The caller may omit that argument to use the default:

```python
def greet_person(name, greeting="Hello"):
    print(f"{greeting}, {name}!")

greet_person("Asha")
greet_person("Ravi", "Welcome")
```

The first call uses `"Hello"` for `greeting`; the second supplies `"Welcome"`. Parameters with defaults must come after parameters without defaults.

**Output:**

```text
Hello, Asha!
Welcome, Ravi!
```

## Complete Example: Rectangle Area

```python
def rectangle_area(length, breadth=1):
    return length * breadth

print(rectangle_area(5, 3))
print(rectangle_area(5))
```

The first call calculates the area of a `5` by `3` rectangle. The second uses the default breadth of `1`.

**Output:**

```text
15
5
```

## Key Points

* Define a function with `def` and call it by writing its name followed by parentheses.
* Parameters receive values; arguments are the values passed in a call.
* Use `return` to give a result back to the caller.
* A default argument is used when the caller omits that argument.

[Next unit: Python data structures and applications](../unit_05/Unit_05_01_Python_Data_Structures.md)

## Practice Tutorials

1. Write a function to add two numbers and call it from the main program.

2. Create a function with a default argument and call it with and without the optional value.

---

[Back to syllabus](../README.md)

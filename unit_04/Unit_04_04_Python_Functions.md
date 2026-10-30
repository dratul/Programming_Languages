# 4.4 Python Functions

A **function** is a named block of code that performs a task. Functions help organize a program, avoid repeating code, and make logic easier to test.

## Defining and Calling a Function

Use the `def` keyword to define a function. The indented statements form the function body. A function runs when it is called:

```python
def greet():
    print("Namaste!")

greet()
```

The output is:

```text
Namaste!
```

## Parameters and Arguments

A function can receive values through **parameters**. The values supplied when calling it are **arguments**:

```python
def greet_person(name):
    print(f"Namaste, {name}!")

greet_person("Asha")
```

Here, `name` is a parameter and `"Asha"` is an argument.

**Output:**

```text
Namaste, Asha!
```

## Returning a Value

Use `return` to send a result back to the code that called the function:

```python
def add_numbers(first, second):
    return first + second

volunteers = add_numbers(4, 6)
print("Volunteers at two community events:", volunteers)
```

**Output:**

```text
Volunteers at two community events: 10
```

`return` ends the function and provides its result. If a function has no `return` statement, it returns `None`.

## Default Arguments

A parameter can have a default value. The caller may omit that argument to use the default:

```python
def greet_person(name, greeting="Namaste"):
    print(f"{greeting}, {name}!")

greet_person("Asha")
greet_person("Ravi", "Welcome to the heritage walk")
```

The first call uses `"Namaste"` for `greeting`; the second supplies a custom welcome. Parameters with defaults must come after parameters without defaults.

**Output:**

```text
Namaste, Asha!
Welcome to the heritage walk, Ravi!
```

## Complete Example: Solar Panel Area

```python
def solar_panel_area(length, breadth=1):
    return length * breadth

print(solar_panel_area(5, 3))
print(solar_panel_area(5))
```

The first call calculates the area of a `5` by `3` panel. The second uses the default breadth of `1`.

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

1. Write a function to add two counts of community event volunteers and call it from the main program.

2. Create a function with a default greeting such as `"Namaste"` and call it with and without an optional greeting.

---

## Related topics
- [Why Python](Unit_04_01_Why_Python.md)
- [Python basics](Unit_04_02_Python_Basics.md)
- [Python control flow](Unit_04_03_Python_Control_Flow.md)
- [Python functions](Unit_04_04_Python_Functions.md)

---


[Back to syllabus](../README.md)

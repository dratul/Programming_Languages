# 4.3 Python Control Flow

Control flow determines which statements run and how often they run. Python uses indentation to show which statements belong to a decision or loop. Use consistent indentation, conventionally four spaces.

## `if`, `elif`, and `else`

An `if` statement runs its indented block when its condition is true. Use `elif` for another condition and `else` for the remaining case:

```python
marks = int(input("Enter your marks: "))

if marks >= 80:
    print("Grade: A")
elif marks >= 60:
    print("Grade: B")
else:
    print("Keep practicing.")
```

The conditions are checked from top to bottom. Once a condition is true, its block runs and the remaining branches are skipped.

For an input of `85`, the program displays:

```text
Enter your marks: 85
Grade: A
```

Comparison operators such as `>=` and `==` are often used in conditions. The `and`, `or`, and `not` operators can combine or reverse conditions.

## `for` Loops

Use a `for` loop to repeat a block for each value in a sequence. The `range()` function is commonly used to repeat a known number of times:

```python
for number in range(1, 6):
    print(number)
```

`range(1, 6)` produces the values `1`, `2`, `3`, `4`, and `5`. The stop value (`6`) is not included.

**Output:**

```text
1
2
3
4
5
```

## `while` Loops

Use a `while` loop to repeat a block as long as its condition is true:

```python
count = 1

while count <= 3:
    print(count)
    count = count + 1
```

Update the value that controls the condition so the loop eventually ends. Otherwise, the loop may continue indefinitely.

**Output:**

```text
1
2
3
```

## `break` and `continue`

* `break` immediately ends the closest loop.
* `continue` skips the rest of the current iteration and moves to the next one.

```python
for number in range(1, 6):
    if number == 3:
        continue
    print(number)
```

This prints `1`, `2`, `4`, and `5`; the iteration for `3` is skipped.

**Output:**

```text
1
2
4
5
```

## Key Points

* Indentation defines the blocks belonging to `if` statements and loops.
* Use `if`/`elif`/`else` to select between alternatives.
* Use `for` with `range()` for a known number of repetitions.
* Use `while` when repetition depends on a condition.
* `break` exits a loop; `continue` skips to its next iteration.

## Practice Tutorials

1. Write a Python program that checks whether a number is even or odd using `if`/`else`.

2. Read marks and print a grade using `if`/`elif`/`else`.

---

[Next topic: Python functions](Unit_04_04_Python_Functions.md)

[Back to syllabus](../README.md)

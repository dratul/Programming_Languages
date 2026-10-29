# 5.3 Introduction to NumPy

NumPy is a Python library used for numerical computing. It provides efficient arrays and functions for mathematical operations.

## Installing NumPy

Run this command in a terminal or command prompt, not in the Python interpreter:

```text
python -m pip install numpy
```

To check that NumPy is installed and display its version, run:

```text
python -c "import numpy as np; print(np.__version__)"
```

## Creating a NumPy Array

```python
import numpy as np

arr = np.array([1, 2, 3, 4, 5])
print(arr)
```

**Output:**

```text
[1 2 3 4 5]
```

## Mean of an Array

```python
import numpy as np

numbers = np.array([10, 20, 30, 40])
print(np.mean(numbers))
```

**Output:**

```text
25.0
```

## Simple Arithmetic

```python
import numpy as np

a = np.array([1, 2, 3])
b = np.array([4, 5, 6])

print(a + b)
print(a * 2)
```

**Output:**

```text
[5 7 9]
[2 4 6]
```

## Why Use NumPy?

NumPy arrays are faster and more efficient than Python lists for mathematical work. They are commonly used in data science, machine learning, and engineering calculations.

## Key Points

* NumPy is used for scientific and numerical computation.
* Arrays are created using `np.array()`.
* Functions like `np.mean()` help compute statistical values.
* Arithmetic can be performed element-wise on arrays.

## Practice Tutorials

1. Create a NumPy array of five readings and print the mean value using `np.mean()`.

2. Create a 2x3 NumPy array and print the row-wise and column-wise sums.

---

[Next topic: Introduction to Matplotlib](Unit_05_04_Matplotlib_Intro.md)

## Related topics
- [Python data structures](Unit_05_01_Python_Data_Structures.md)
- [Python file handling](Unit_05_02_Python_File_Handling.md)
- [NumPy introduction](Unit_05_03_NumPy_Intro.md)
- [Matplotlib introduction](Unit_05_04_Matplotlib_Intro.md)
- [IoT sensor simulation](Unit_05_05_IoT_Sensor_Simulation.md)

---


[Back to syllabus](../README.md)

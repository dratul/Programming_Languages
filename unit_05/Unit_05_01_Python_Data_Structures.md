# 5.1 Python Data Structures

**Instructor:** Dr Atul Kumar Dwivedi  
**Institution:** BIET Jhansi

Python data structures help store and organize data. In this unit, we study the most common built-in structures: lists, tuples, dictionaries, and sets.

## Lists

A list is an ordered collection of values. Lists are mutable, meaning we can change their contents after creation.

```python
numbers = [10, 20, 30, 40]
print(numbers)
print(numbers[0])

numbers.append(50)
print(numbers)
```

**Output:**

```text
[10, 20, 30, 40]
10
[10, 20, 30, 40, 50]
```

### Common list operations

```python
student_names = ["Asha", "Ravi", "Meera"]
student_names.insert(1, "Nisha")
print(student_names)

print(len(student_names))
print(student_names[2])
```

A list can store multiple values and can be modified using methods like `append()`, `insert()`, and `remove()`.

**Output:**

```text
['Asha', 'Nisha', 'Ravi', 'Meera']
4
Ravi
```

## Tuples

A tuple is similar to a list, but it is immutable. Once created, its values cannot be changed.

```python
point = (3, 5)
print(point)
print(point[0])
```

Tuples are useful when you want values that should not be changed accidentally.

**Output:**

```text
(3, 5)
3
```

## Dictionaries

A dictionary stores data as key-value pairs. It is useful when you want to access data using a meaningful name.

```python
student = {
    "name": "Asha",
    "roll": 21,
    "branch": "CSE"
}

print(student["name"])
print(student.get("branch"))
```

**Output:**

```text
Asha
CSE
```

Dict keys are unique and each key maps to a value.

## Sets

A set stores unique items. It does not keep duplicate values and does not store elements in a fixed order.

```python
items = {10, 20, 20, 30}
print(items)
```

**Output:**

```text
{10, 20, 30}
```

Sets are useful when you need to remove duplicates.

## Key Points

* Lists are ordered and mutable.
* Tuples are ordered and immutable.
* Dictionaries store data in key-value pairs.
* Sets store unique values only.

These structures are foundational for Python programming and are used heavily in data science and automation tasks.

## Practice Tutorials

1. Create a list of five marks, print the list, and calculate the average.

2. Create a dictionary for a student and print each item using its key.

---

[Next topic: Python file handling](Unit_05_02_Python_File_Handling.md)

## Why this unit matters

* Lists, tuples, dictionaries, and sets are used everywhere in data processing and software development.
* File handling and plotting are important for real engineering reports, experiments, and analysis.
* These concepts connect directly with data science, IoT, and automation projects.

## AKTU Previous-Year Practice Questions

1. Explain the differences between list, tuple, dictionary, and set with examples.
2. Write a Python program to read a CSV file and display its content on the screen.
3. Create a NumPy array of temperature values and calculate the mean, minimum, and maximum values.

---

## Related topics
- [Python data structures](Unit_05_01_Python_Data_Structures.md)
- [Python file handling](Unit_05_02_Python_File_Handling.md)
- [NumPy introduction](Unit_05_03_NumPy_Intro.md)
- [Matplotlib introduction](Unit_05_04_Matplotlib_Intro.md)
- [IoT sensor simulation](Unit_05_05_IoT_Sensor_Simulation.md)

---


[Back to syllabus](../README.md)

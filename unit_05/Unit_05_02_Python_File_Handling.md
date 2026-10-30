# 5.2 File Handling in Python

File handling allows a program to read and write data stored in files. This is important for saving results, processing notes, and working with data files such as CSV files.

## Writing to a Text File

```python
with open("demo.txt", "w") as file:
    file.write("India has many local heritage sites.\n")
    file.write("Communities help preserve shared history.\n")
print("File written successfully.")
```

This creates a file named `demo.txt` and writes text into it.

**Output:**

```text
File written successfully.
```

## Reading a Text File

```python
with open("demo.txt", "r") as file:
    content = file.read()
print(content)
```

**Output:**

```text
India has many local heritage sites.
Communities help preserve shared history.
```

## Appending to a File

```python
with open("demo.txt", "a") as file:
    file.write("A local visit can support heritage awareness.\n")
print("Data appended.")
```

Appending adds new content at the end of the file instead of overwriting it.

**Output:**

```text
Data appended.
```

## Reading a CSV File

CSV (Comma Separated Values) stores data in rows and columns separated by commas.

```python
import csv

with open("data.csv", "w", newline="") as file:
    writer = csv.writer(file)
    writer.writerow(["City", "Rainfall_mm"])
    writer.writerow(["Jhansi", 90])
    writer.writerow(["Bhopal", 85])

with open("data.csv", "r") as file:
    rows = csv.reader(file)
    for row in rows:
        print(row)
```

**Output:**

```text
['City', 'Rainfall_mm']
['Jhansi', '90']
['Bhopal', '85']
```

## Important Note

The `with` statement automatically closes the file after reading or writing, even if an error occurs inside the block.

## Key Points

* `"w"` writes a file and overwrites old content.
* `"r"` reads an existing file.
* `"a"` appends new content to the file.
* CSV files are useful for storing tabular data.

## Practice Tutorials

1. Write three lines about a local Indian heritage site to a text file, then read the file and print its content.

2. Create a small CSV file with Indian city names and sample rainfall readings, and read it using Python's `csv` module.

---

[Next topic: Introduction to NumPy](Unit_05_03_NumPy_Intro.md)

## Related topics
- [Python data structures](Unit_05_01_Python_Data_Structures.md)
- [Python file handling](Unit_05_02_Python_File_Handling.md)
- [NumPy introduction](Unit_05_03_NumPy_Intro.md)
- [Matplotlib introduction](Unit_05_04_Matplotlib_Intro.md)
- [IoT sensor simulation](Unit_05_05_IoT_Sensor_Simulation.md)

---


[Back to syllabus](../README.md)

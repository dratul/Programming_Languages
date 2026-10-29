# 5.2 File Handling in Python

File handling allows a program to read and write data stored in files. This is important for saving results, processing notes, and working with data files such as CSV files.

## Writing to a Text File

```python
file = open("demo.txt", "w")
file.write("Hello, Python!\n")
file.write("This is file handling.\n")
file.close()
print("File written successfully.")
```

This creates a file named `demo.txt` and writes text into it.

**Output:**

```text
File written successfully.
```

## Reading a Text File

```python
file = open("demo.txt", "r")
content = file.read()
print(content)
file.close()
```

**Output:**

```text
Hello, Python!
This is file handling.
```

## Appending to a File

```python
file = open("demo.txt", "a")
file.write("Appended line.\n")
file.close()
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
    writer.writerow(["Name", "Marks"])
    writer.writerow(["Asha", 90])
    writer.writerow(["Ravi", 85])

with open("data.csv", "r") as file:
    rows = csv.reader(file)
    for row in rows:
        print(row)
```

**Output:**

```text
['Name', 'Marks']
['Asha', '90']
['Ravi', '85']
```

## Important Note

The `with` statement is preferred because it automatically closes the file after reading or writing.

## Key Points

* `"w"` writes a file and overwrites old content.
* `"r"` reads an existing file.
* `"a"` appends new content to the file.
* CSV files are useful for storing tabular data.

[Next topic: Introduction to NumPy](Unit_05_03_NumPy_Intro.md)

[Back to syllabus](../README.md)

# 3.5 Structures in C

A **structure** (`struct`) groups related values, which may have different data types, under one name. For example, a student's record can contain a name, roll number, and marks.

## Defining and Using a Structure

Define a structure with the `struct` keyword. Use the dot operator (`.`) to access or change a member:

```c
#include <stdio.h>

struct Student {
    char name[30];
    int roll_number;
    float marks;
};

int main(void) {
    struct Student student = {"Asha", 21, 88.5f};

    printf("Name: %s\n", student.name);
    printf("Roll number: %d\n", student.roll_number);
    printf("Marks: %.1f\n", student.marks);

    student.marks = 91.0f;
    printf("Updated marks: %.1f\n", student.marks);

    return 0;
}
```

**Output:**

```text
Name: Asha
Roll number: 21
Marks: 88.5
Updated marks: 91.0
```

`struct Student` is the structure type. The variable `student` has three members: `name`, `roll_number`, and `marks`. The initializer supplies values in the same order as the member declarations.

## Why Use Structures?

Separate variables can hold the name, roll number, and marks, but a structure keeps values that describe the same student together. A structure can also be used as the element type of an array when a program needs several student records.

## Key Points

* A structure groups related data that can have different types.
* Declare a structure type with `struct`.
* Use the dot operator to access a member, for example `student.marks`.

## Practice Tutorials

1. Define a `struct Student` and print all its fields for one student record.

2. Store records of three students in an array and display their details in table form.

---

[Next topic: File handling in C](Unit_03_06_File_Handling.md)

[Back to syllabus](../README.md)

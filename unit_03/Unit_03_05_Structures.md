# 3.5 Structures in C

A **structure** (`struct`) groups related values, which may have different data types, under one name. For example, a record for an Indian heritage site can contain its name, state, and visitor count.

## Defining and Using a Structure

Define a structure with the `struct` keyword. Use the dot operator (`.`) to access or change a member:

```c
#include <stdio.h>

struct HeritageSite {
    char name[30];
    char state[30];
    int visitors;
};

int main(void) {
    struct HeritageSite site = {"Jhansi Fort", "Uttar Pradesh", 1200};

    printf("Heritage site: %s\n", site.name);
    printf("State: %s\n", site.state);
    printf("Visitors today: %d\n", site.visitors);

    site.visitors = 1250;
    printf("Updated visitor count: %d\n", site.visitors);

    return 0;
}
```

**Output:**

```text
Heritage site: Jhansi Fort
State: Uttar Pradesh
Visitors today: 1200
Updated visitor count: 1250
```

`struct HeritageSite` is the structure type. The variable `site` has three members: `name`, `state`, and `visitors`. The initializer supplies values in the same order as the member declarations.

## Why Use Structures?

Separate variables can hold the site name, state, and visitor count, but a structure keeps related civic and cultural information together. A structure can also be used as the element type of an array when a program needs several site records.

## Key Points

* A structure groups related data that can have different types.
* Declare a structure type with `struct`.
* Use the dot operator to access a member, for example `site.visitors`.

## Practice Tutorials

1. Define a `struct HeritageSite` and print all its fields for one Indian site.

2. Store records for three Indian heritage sites in an array and display their details in table form.

---

[Next topic: File handling in C](Unit_03_06_File_Handling.md)

## Related topics
- [1D array](Unit_03_01_1D_Array.md)
- [Array applications](Unit_03_02_Array_Applications.md)
- [Strings in C](Unit_03_03_Strings.md)
- [Pointers](Unit_03_04_Pointers.md)
- [Structures](Unit_03_05_Structures.md)
- [File handling](Unit_03_06_File_Handling.md)

---


[Back to syllabus](../README.md)

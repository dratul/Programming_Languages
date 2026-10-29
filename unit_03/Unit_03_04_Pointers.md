# 3.4 Introduction to Pointers in C

A **pointer** is a variable that stores the address of another variable. Pointers help explain how C refers to data in memory.

## Address and Dereference Operators

* The address-of operator `&` gives the address of a variable.
* The dereference operator `*` accesses the value stored at the address in a pointer.

```c
#include <stdio.h>

int main(void) {
    int number = 25;
    int *number_pointer = &number;

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", (void *)&number);
    printf("Address stored in pointer: %p\n", (void *)number_pointer);
    printf("Value through pointer: %d\n", *number_pointer);

    return 0;
}
```

The address shown by `%p` depends on the computer and may change each time the program runs. The pointer refers to `number`, so dereferencing it with `*number_pointer` reads the value `25`.

## Declaring a Pointer

Write `*` with the pointer's type when declaring it:

```c
int *integer_pointer;
float *float_pointer;
char *character_pointer;
```

The pointer type indicates the type of value it can refer to. For example, an `int *` points to an `int`.

## Important Safety Rules

* Initialize a pointer with the address of a valid variable before using it.
* Only dereference a pointer when it points to a valid object.
* Do not use an uninitialized pointer; it does not automatically point to a safe location.

At this level, focus on understanding addresses and reading a value through a pointer. Pointer arithmetic and dynamic memory are outside this lesson.

## Key Points

* A pointer stores an address.
* `&variable` obtains a variable's address.
* `*pointer` accesses the value at the address it stores.

[Next topic: Structures](Unit_03_05_Structures.md)

[Back to syllabus](../README.md)

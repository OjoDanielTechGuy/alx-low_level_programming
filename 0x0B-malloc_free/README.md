# 0x0B. C - malloc, free

## **Automatic and dynamic allocation, malloc and free**

The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.

When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.

**_Automatic allocation_**
When you declare variables or when you use strings within double quotes, the program is taking care of all the memory allocation.

- **[0-create_array.c](./0-create_array.c)** - function that creates an array of chars, and initializes it with a specific char.

- **[1-strdup.c](./1-strdup.c)** - function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

- **[2-str_concat.c](./2-str_concat.c)** - function that concatenates two strings

- **[3-alloc_grid.c](./3-alloc_grid.c)** - function that returns a pointer to a 2 dimensional array of integers.

- **[4-free_grid.c](./4-free_grid.c)** - function that frees a 2 dimensional grid previously created by your alloc_grid function.

- **[100-argstostr.c](./100-argstostr.c)** - function that concatenates all the arguments of your program.

- **[101-strtow.c](./101-strtow.c)** - function that splits a string into words.

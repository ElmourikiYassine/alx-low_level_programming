
```markdown
# Function Pointers Tasks Summary

## Task 0: Print Name
Write a function that takes a name and a function pointer as parameters, then prints the name using the provided function.

**Prototype:**
```c
void print_name(char *name, void (*f)(char *));
```

## Task 1: Array Iterator
Create a function that applies a given function to each element of an array.

**Prototype:**
```c
void array_iterator(int *array, size_t size, void (*action)(int));
```

## Task 2: Integer Index
Write a function that searches for an integer in an array using a comparison function.

**Prototype:**
```c
int int_index(int *array, int size, int (*cmp)(int));
```

## Task 3: Calculator
Create a program that performs simple arithmetic operations (+, -, *, /, %) on two integer inputs.

- Use a header file (`3-calc.h`) to define structures and function prototypes.
- Implement five operation functions: `op_add`, `op_sub`, `op_mul`, `op_div`, `op_mod`.
- Implement `get_op_func` to select the correct operation function based on the operator.
- Write the main function (`3-main.c`) that takes inputs and outputs results.

## Task 4: Print Main OpCodes
Develop a program that prints the opcodes of its own main function.

**Usage:**
```shell
./main number_of_bytes
```

- The opcodes should be printed in lowercase hexadecimal format.
- The program should use `atoi` to convert the argument to an integer.
- The output should be the opcodes of the main function, each opcode in two characters.
- If the argument count is wrong, print "Error" and exit with status 1.
- If the number of bytes is negative, print "Error" and exit with status 2.

```

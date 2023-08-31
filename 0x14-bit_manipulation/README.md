
## Task 0
**Description:** Write a function that converts a binary number to an unsigned int.

**Prototype:** `unsigned int binary_to_uint(const char *b);`  
**Return:** The converted number, or 0 if there is one or more characters in the string `b` that is not 0 or 1 or if `b` is NULL.

### Example:
```c
unsigned int n;
n = binary_to_uint("1");  // Output: 1
n = binary_to_uint("101");  // Output: 5
n = binary_to_uint("1e01");  // Output: 0
n = binary_to_uint("1100010");  // Output: 98
n = binary_to_uint("0000000000000000000110010010");  // Output: 402
```

**File:** `0-binary_to_uint.c`

## Task 1
**Description:** Write a function that prints the binary representation of a number.

**Prototype:** `void print_binary(unsigned long int n);`  
**Format:** See example.  
**Restrictions:** You are not allowed to use arrays, malloc, or the % or / operators.

### Example:
```c
print_binary(0);  // Output: 0
print_binary(1);  // Output: 1
print_binary(98);  // Output: 1100010
print_binary(1024);  // Output: 10000000000
print_binary((1 << 10) + 1);  // Output: 10000000001
```

**Files:** `1-print_binary.c`, `_putchar.c`

## Task 2
**Description:** Write a function that returns the value of a bit at a given index.

**Prototype:** `int get_bit(unsigned long int n, unsigned int index);`  
**Return:** The value of the bit at index `index` or -1 if an error occurred.

### Example:
```c
int n;
n = get_bit(1024, 10);  // Output: 1
n = get_bit(98, 1);  // Output: 1
n = get_bit(1024, 0);  // Output: 0
```

**File:** `2-get_bit.c`

## Task 3
**Description:** Write a function that sets the value of a bit to 1 at a given index.

**Prototype:** `int set_bit(unsigned long int *n, unsigned int index);`  
**Return:** 1 if it worked, or -1 if an error occurred.

### Example:
```c
unsigned long int n;
n = 1024;
set_bit(&n, 5);  // n becomes 1056
n = 0;
set_bit(&n, 10);  // n becomes 1024
n = 98;
set_bit(&n, 0);  // n becomes 99
```

**File:** `3-set_bit.c`

## Task 4
**Description:** Write a function that sets the value of a bit to 0 at a given index.

**Prototype:** `int clear_bit(unsigned long int *n, unsigned int index);`  
**Return:** 1 if it worked, or -1 if an error occurred.

### Example:
```c
unsigned long int n;
n = 1024;
clear_bit(&n, 10);  // n becomes 0
n = 0;
clear_bit(&n, 10);  // n remains 0
n = 98;
clear_bit(&n, 1);  // n becomes 96
```

**File:** `4-clear_bit.c`

## Task 5
**Description:** Write a function that returns the number of bits you would need to flip to get from one number to another.

**Prototype:** `unsigned int flip_bits(unsigned long int n, unsigned long int m);`  
**Restrictions:** You are not allowed to use the % or / operators.

### Example:
```c
unsigned int n;
n = flip_bits(1024, 1);  // Output: 2
n = flip_bits(402, 98);  // Output: 5
n = flip_bits(1024, 3);  // Output: 3
n = flip_bits(1024, 1025);  // Output: 1
```

**File:** `5-flip_bits.c`

## Task 6 (Endianness)
**Description:** Write a function that checks the endianness.

**Prototype:** `int get_endianness(void);`  
**Return:** 0 if big endian, 1 if little endian.

### Example:
```c
int n;
n = get_endianness();
if (n != 0) {
    printf("Little Endian\n");
} else {
    printf("Big Endian\n");
}
```

**File:** `100-get_endianness.c`

## Task 7 (Crackme3)
**Description:** Find the password for this program and save it in the file `101-password`.

**Run Command:** `./crackme3 $(cat 101-password)`

**File:** `101-password`

---


## Tasks

### 0. Beauty is variable, ugliness is constant

**Mandatory**

Write a function that returns the sum of all its parameters.

**Prototype:** `int sum_them_all(const unsigned int n, ...);`

- If `n == 0`, return 0.

Example usage:

```c
#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
```

Output:
```
1122
500
```

### 1. To be is to be the value of a variable

**Mandatory**

Write a function that prints numbers, followed by a new line.

**Prototype:** `void print_numbers(const char *separator, const unsigned int n, ...);`

- `separator`: The string to be printed between numbers.
- `n`: The number of integers passed to the function.
- You are allowed to use `printf`.
- If `separator` is `NULL`, don’t print it.
- Print a new line at the end of your function.

Example usage:

```c
#include "variadic_functions.h"

int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
```

Output:
```
0, 98, -1024, 402
```

### 2. One woman's constant is another woman's variable

**Mandatory**

Write a function that prints strings, followed by a new line.

**Prototype:** `void print_strings(const char *separator, const unsigned int n, ...);`

- `separator`: The string to be printed between the strings.
- `n`: The number of strings passed to the function.
- You are allowed to use `printf`.
- If `separator` is `NULL`, don’t print it.
- If one of the strings is `NULL`, print `(nil)` instead.
- Print a new line at the end of your function.

Example usage:

```c
#include "variadic_functions.h"

int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
```

Output:
```
Jay, Django
```

### 3. To be is a to be the value of a variable

**Mandatory**

Write a function that prints anything.

**Prototype:** `void print_all(const char * const format, ...);`

- `format`: A list of types of arguments passed to the function.
  - `c`: char
  - `i`: integer
  - `f`: float
  - `s`: char * (if the string is NULL, print `(nil)` instead)
  - Any other char should be ignored.
- You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`.
- You can use a maximum of:
  - 2 `while` loops
  - 2 `if` statements
- You can declare a maximum of 9 variables.
- You are allowed to use `printf`.
- Print a new line at the end of your function.

Example usage:

```c
#include "variadic_functions.h"

int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
```

Output:
```
B, 3, stSchool
```

---

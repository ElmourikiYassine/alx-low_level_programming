## Task 0: Object-like Macro

Create a header file named `0-object_like_macro.h` that defines a macro named `SIZE` as an abbreviation for the token `1024`.

### Example Usage
```c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
```
Output:
```
1122
```

---

## Task 1: Pi

Create a header file named `1-pi.h` that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

### Example Usage
```c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
```
Output:
```
30171.855
```

---

## Task 2: File Name

Write a program that prints the name of the file it was compiled from, followed by a new line.

### Example Usage
```c
#include <stdio.h>

int main(void)
{
    printf("%s\n", __FILE__);
    return (0);
}
```
Output:
```
2-main.c
```

---

## Task 3: Function-like Macro

Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

### Example Usage
```c
#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
```
Output:
```
980, 980
```

---

## Task 4: SUM

Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

### Example Usage
```c
#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
```
Output:
```
1122
```

---


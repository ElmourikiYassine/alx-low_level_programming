### Task 0: A library is not a luxury but one of the necessities of life

#### Description:
Create the dynamic library `libdynamic.so` containing the listed functions.

#### Functions:
- int _putchar(char c);
- int _islower(int c);
- int _isalpha(int c);
- int _abs(int n);
- int _isupper(int c);
- int _isdigit(int c);
- int _strlen(char *s);
- void _puts(char *s);
- char *_strcpy(char *dest, char *src);
- int _atoi(char *s);
- char *_strcat(char *dest, char *src);
- char *_strncat(char *dest, char *src, int n);
- char *_strncpy(char *dest, char *src, int n);
- int _strcmp(char *s1, char *s2);
- char *_memset(char *s, char b, unsigned int n);
- char *_memcpy(char *dest, char *src, unsigned int n);
- char *_strchr(char *s, char c);
- unsigned int _strspn(char *s, char *accept);
- char *_strpbrk(char *s, char *accept);
- char *_strstr(char *haystack, char *needle);

#### Files:
- libdynamic.so
- main.h

#### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
$ export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
$ ./len
```

---

### Task 1: Without libraries what have we? We have no past and no future

#### Description:
Create a script that creates a dynamic library called `liball.so` from all the .c files in the current directory.

#### Files:
- 1-create_dynamic_lib.sh

#### Usage:
```bash
$ ./1-create_dynamic_lib.sh
$ nm -D --defined-only liball.so
```

---

### Task 2: Let's call C functions from Python

#### Description:
Create a dynamic library (`100-operations.so`) that contains C functions callable from Python.

#### Files:
- 100-operations.so
- 100-tests.py

#### Usage:
```bash
$ python3 100-tests.py
```

---

### Task 3: Code injection: Win the Giga Millions!

#### Description:
Create a shell script (`101-make_me_win.sh`) to inject code and win the Giga Millions jackpot.

#### Files:
- 101-make_me_win.sh

#### Usage:
```bash
$ . ./101-make_me_win.sh
```

Tip: Uses `LD_PRELOAD` for code injection.

---

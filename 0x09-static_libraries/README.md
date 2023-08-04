# Static Libraries README

## Tasks

### Task 0: Creating the Static Library `libmy.a`

**Mandatory**

In this task, you are required to create a static library named `libmy.a` containing various functions. The library should include the following functions:

- `int _putchar(char c);`
- `int _islower(int c);`
- `int _isalpha(int c);`
- `int _abs(int n);`
- `int _isupper(int c);`
- `int _isdigit(int c);`
- `int _strlen(char *s);`
- `void _puts(char *s);`
- `char *_strcpy(char *dest, char *src);`
- `int _atoi(char *s);`
- `char *_strcat(char *dest, char *src);`
- `char *_strncat(char *dest, char *src, int n);`
- `char *_strncpy(char *dest, char *src, int n);`
- `int _strcmp(char *s1, char *s2);`
- `char *_memset(char *s, char b, unsigned int n);`
- `char *_memcpy(char *dest, char *src, unsigned int n);`
- `char *_strchr(char *s, char c);`
- `unsigned int _strspn(char *s, char *accept);`
- `char *_strpbrk(char *s, char *accept);`
- `char *_strstr(char *haystack, char *needle);`

If you haven't implemented all the functions, create empty ones with the correct prototype.

**Note**: Don't forget to push your `main.h` file to your repository, which should contain the prototypes of all the functions listed above.

### Task 1: Creating a Script to Generate Static Library

**Mandatory**

For this task, you need to create a script named `create_static_lib.sh` which will generate a static library called `liball.a`. The script should compile all the `.c` files in the current directory to create the library.

## Usage Examples

### Task 0

Compile your code and create the static library:

```bash
gcc -c *.c
ar -rc libmy.a *.o
```

### Task 1

Run the script to create the static library `liball.a`:

```bash
./create_static_lib.sh
```

## Repository Information

GitHub repository: [alx-low_level_programming](https://github.com/ElmourikiYassine/alx-low_level_programming)

Directory: `0x09-static_libraries`

Files:
- `libmy.a`
- `main.h`
- `create_static_lib.sh`


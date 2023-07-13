## Tasks

---

### Task 0: Preprocessor

- **Type:** Mandatory
- **Description:** Write a script that runs a C file through the preprocessor and saves the result into another file.
- **Requirements:**
  - The C file name will be saved in the variable `$CFILE`.
  - The output should be saved in the file `c`.
- **Repo:**
  - GitHub repository: [alx-low_level_programming](https://github.com/ElmourikiYassine/alx-low_level_programming/tree/main/0x00-hello_world)
  - Directory: `0x00-hello_world`
  - File: `0-preprocessor`

### Task 1: Compiler

- **Type:** Mandatory
- **Description:** Write a script that compiles a C file but does not link.
- **Requirements:**
  - The C file name will be saved in the variable `$CFILE`.
  - The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
- **Repo:**
  - GitHub repository: [alx-low_level_programming](https://github.com/ElmourikiYassine/alx-low_level_programming/tree/main/0x00-hello_world)
  - Directory: `0x00-hello_world`
  - File: `1-compiler`

### Task 2: Assembler

- **Type:** Mandatory
- **Description:** Write a script that generates the assembly code of a C code and saves it in an output file.
- **Requirements:**
  - The C file name will be saved in the variable `$CFILE`.
  - The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
- **Repo:**
  - GitHub repository: [alx-low_level_programming](https://github.com/ElmourikiYassine/alx-low_level_programming/tree/main/0x00-hello_world)
  - Directory: `0x00-hello_world`
  - File: `2-assembler`

### Task 3: Name

- **Type:** Mandatory
- **Description:** Write a script that compiles a C file and creates an executable named `cisfun`.
- **Requirements:**
  - The C file name will be saved in the variable `$CFILE`.
- **Repo:**
  - GitHub repository: [alx-low_level_programming](https://github.com/ElmourikiYassine/alx-low_level_programming/tree/main/0x00-hello_world)
  - Directory: `0x00-hello_world`
  - File: `3-name`

### Task 4: Hello, puts

- **Type:** Mandatory
- **Description:** Write a C program that prints exactly "Programming is like building a multilingual puzzle", followed by a new line.
- **Requirements:**
  - Use the function `puts`.
  - You are not allowed to use `printf`.
  - Your program should end with the value `0`.
- **Repo:**
  - GitHub repository: [alx-low_level_programming](https://github.com/ElmourikiYassine/alx-low_level_programming/tree/main/0x00-hello_world)
  - Directory: `0x00-hello_world`
  - File: `4-puts.c`

### Task 5: Hello, printf

- **Type:** Mandatory
- **Description:** Write a C program that prints exactly "with proper grammar, but the outcome is a piece of art,", followed by a new line.
- **Requirements:**
  - Use the function `printf`.
  - You are not allowed to use the function `puts`.
  - Your program should return `0`.
  - Your program should compile without warning when using the `-Wall` gcc option.
- **Repo:**
  - GitHub repository: [alx-low_level_programming](https://github.com/ElmourikiYassine/alx-low_level_programming/tree/main/0x00-hello_world)
  - Directory: `0x00-hello_world`
  - File: `5-printf.c`

### Task 6: Size is not grandeur, and territory does not make a nation

- **Type:** Mandatory
- **Description:** Write a C program that prints the size of various types on the computer it is compiled and run on.
- **Requirements:**
  - You should produce the exact same output as in the example.
  - Warnings are allowed.
  - Your program should return `0`.
  - You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32` gcc option.
- **Repo:**
  - GitHub repository: [alx-low_level_programming](https://github.com/ElmourikiYassine/alx-low_level_programming/tree/main/0x00-hello_world)
  - Directory: `0x00-hello_world`
  - File: `6-size.c`

### Task 7: Intel

- **Type:** Advanced
- **Description:** Write a script that generates the assembly code (Intel syntax) of a C code and saves it in an output file.
- **Requirements:**
  - The C file name will be saved in the variable `$CFILE`.
  - The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
- **Repo:**
  - GitHub repository: [alx-low_level_programming](https://github.com/ElmourikiYassine/alx-low_level_programming/tree/main/0x00-hello_world)
  - Directory: `0x00-hello_world`
  - File: `100-intel`

### Task 8: UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity

- **Type:** Advanced
- **Description:** Write a C program that prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
- **Requirements:**
  - You are not allowed to use any functions listed in the NAME section of the `man (3) printf` or `man (3) puts`.
  - Your program should return `1`.
  - Your program should compile without any warnings when using the `-Wall` gcc option.
- **Repo:**
  - GitHub repository: [alx-low_level_programming](https://github.com/ElmourikiYassine/alx-low_level_programming/tree/main/0x00-hello_world)
  - Directory: `0x00-hello_world`
  - File: `101-quote.c`

```markdown
# Tasks

## Task 0 - It ain't what they call you, it's what you answer to

**Mandatory**

Write a program that prints its name, followed by a new line.

If you rename the program, it will print the new name, without having to compile it again. You should not remove the path before the name of the program.

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
./mynameis
```

## Task 1 - Silence is argument carried out by other means

**Mandatory**

Write a program that prints the number of arguments passed into it.

Your program should print a number, followed by a new line.

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
./nargs
./nargs hello
./nargs "hello, world"
./nargs hello, world
```

## Task 2 - The best argument against democracy is a five-minute conversation with the average voter

**Mandatory**

Write a program that prints all arguments it receives.

All arguments should be printed, including the first one. Only print one argument per line, ending with a new line.

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
./args
./args You can do anything, but not everything.
```

## Task 3 - Neither irony nor sarcasm is argument

**Mandatory**

Write a program that multiplies two numbers.

Your program should print the result of the multiplication, followed by a new line. You can assume that the two numbers and result of the multiplication can be stored in an integer. If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1.

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
./mul 2 3
./mul 2 -3
./mul 2 0
./mul 245 3245342
./mul
```

## Task 4 - To infinity and beyond

**Mandatory**

Write a program that adds positive numbers.

Print the result, followed by a new line. If no number is passed to the program, print 0, followed by a new line. If one of the numbers contains symbols that are not digits, print Error, followed by a new line, and return 1. You can assume that numbers and the addition of all the numbers can be stored in an int.

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
./add 1 1
./add 1 10 100 1000
./add 1 2 3 e 4 5
./add
```

## Task 5 - Minimal Number of Coins for Change

**Advanced**

Write a program that prints the minimum number of coins to make change for an amount of money.

Usage: `./change cents` where `cents` is the amount of cents you need to give back. If the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1. You should use `atoi` to parse the parameter passed to your program. If the number passed as the argument is negative, print 0, followed by a new line. You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent.

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
./change
./change 10
./change 100
./change 101
./change 13
```

GitHub repository: [alx-low_level_programming](https://github.com/ElmourikiYassine/alx-low_level_programming)
Directory: 0x0A-argc_argv
Files: 0-whatsmyname.c, 1-args.c, 2-args.c, 3-mul.c, 4-add.c, 100-change.c
```


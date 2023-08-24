# Singly Linked Lists Project

This repository contains a set of C programs that demonstrate various operations on singly linked lists. The tasks involve printing, counting, adding nodes, and freeing the linked list.

## Requirements

- Your code should be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- A `README.md` file at the root of the project folder is mandatory.
- The code should follow the Betty style guidelines.
- You are not allowed to use global variables.
- Only the `malloc`, `free`, and `exit` functions are allowed from the C standard library.
- The prototypes of all functions, including `_putchar`, should be included in the `lists.h` header file.
- All header files should be include guarded.

## Data Structure

For this project, the following singly linked list node structure is used:

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
Tasks
0. Print list
Write a function size_t print_list(const list_t *h) that prints all the elements of a list_t list. The function should return the number of nodes.

If str is NULL, print [0] (nil).
You are allowed to use printf.
1. List length
Write a function size_t list_len(const list_t *h) that returns the number of elements in a list_t list.

2. Add node
Write a function list_t *add_node(list_t **head, const char *str) that adds a new node at the beginning of a list_t list. The function should return the address of the new element, or NULL if it fails.

The str needs to be duplicated.
You are allowed to use strdup.
3. Add node at the end
Write a function list_t *add_node_end(list_t **head, const char *str) that adds a new node at the end of a list_t list. The function should return the address of the new element, or NULL if it fails.

The str needs to be duplicated.
You are allowed to use strdup.
4. Free list
Write a function void free_list(list_t *head) that frees a list_t list.

5. The Hare and the Tortoise
Write a function that prints the lines "You're beat! and yet, you must allow," and "I bore my house upon my back!" before the main function is executed. You are allowed to use the printf function.

6. Real programmers can write assembly code in any language
Write a 64-bit assembly program that prints "Hello, Holberton," followed by a new line. You are only allowed to use the printf function and not allowed to use interrupts.


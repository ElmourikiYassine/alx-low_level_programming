# Doubly Linked Lists

## Introduction
This repository contains solutions to various tasks related to doubly linked lists. The tasks include basic operations such as printing a list, finding the length, adding nodes, deleting nodes, and more.

## Task 0: Print List
**File:** [0-print_dlistint.c](./0x17-doubly_linked_lists/0-print_dlistint.c)

**Description:** This function prints all the elements of a `dlistint_t` list and returns the number of nodes.

## Task 1: List Length
**File:** [1-dlistint_len.c](./0x17-doubly_linked_lists/1-dlistint_len.c)

**Description:** This function returns the number of elements in a linked `dlistint_t` list.

## Task 2: Add Node at the Beginning
**File:** [2-add_dnodeint.c](./0x17-doubly_linked_lists/2-add_dnodeint.c)

**Description:** This function adds a new node at the beginning of a `dlistint_t` list and returns the address of the new element.

## Task 3: Add Node at the End
**File:** [3-add_dnodeint_end.c](./0x17-doubly_linked_lists/3-add_dnodeint_end.c)

**Description:** This function adds a new node at the end of a `dlistint_t` list and returns the address of the new element.

## Task 4: Free List
**File:** [4-free_dlistint.c](./0x17-doubly_linked_lists/4-free_dlistint.c)

**Description:** This function frees a `dlistint_t` list, releasing the allocated memory.

## Task 5: Get Node at Index
**File:** [5-get_dnodeint.c](./0x17-doubly_linked_lists/5-get_dnodeint.c)

**Description:** This function returns the nth node of a `dlistint_t` linked list, given the index. Returns `NULL` if the node does not exist.

## Task 6: Sum List
**File:** [6-sum_dlistint.c](./0x17-doubly_linked_lists/6-sum_dlistint.c)

**Description:** This function returns the sum of all the data (n) of a `dlistint_t` linked list. If the list is empty, it returns 0.

## Task 7: Insert at Index
**Files:** [7-insert_dnodeint.c](./0x17-doubly_linked_lists/7-insert_dnodeint.c), [2-add_dnodeint.c](./0x17-doubly_linked_lists/2-add_dnodeint.c), [3-add_dnodeint_end.c](./0x17-doubly_linked_lists/3-add_dnodeint_end.c)

**Description:** This function inserts a new node at a given position in the list. Returns the address of the new node or `NULL` if it fails.

## Task 8: Delete at Index
**Files:** [8-delete_dnodeint.c](./0x17-doubly_linked_lists/8-delete_dnodeint.c), [3-add_dnodeint_end.c](./0x17-doubly_linked_lists/3-add_dnodeint_end.c), [0-print_dlistint.c](./0x17-doubly_linked_lists/0-print_dlistint.c), [4-free_dlistint.c](./0x17-doubly_linked_lists/4-free_dlistint.c)

**Description:** This function deletes the node at a given index in the `dlistint_t` linked list. Returns 1 if successful, -1 if it fails.

## Task 9: Crackme4
**File:** [100-password](./0x17-doubly_linked_lists/100-password)

**Description:** This task involves finding the password for a program (`crackme4`) and saving it in a file named `100-password`.

## Task 10: Palindromes
**File:** [102-result](./0x17-doubly_linked_lists/102-result)

**Description:** This task requires finding the largest palindrome made from the product of two 3-digit numbers and saving the result in a file named `102-result`.

## Task 11: Crackme5 Keygen
**File:** [103-keygen.c](./0x17-doubly_linked_lists/103-keygen.c)

**Description:** This task involves writing a keygen for `crackme5`. The keygen takes a username as an argument and prints a valid key for that username.

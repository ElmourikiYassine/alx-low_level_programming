## Tasks

### Task 0: Print list

- **Prototype**: `size_t print_listint(const listint_t *h);`
- **Return**: the number of nodes
- **Format**: see example
- You are allowed to use `printf`

### Task 1: List length

- **Prototype**: `size_t listint_len(const listint_t *h);`

### Task 2: Add node

- **Prototype**: `listint_t *add_nodeint(listint_t **head, const int n);`
- **Return**: the address of the new element, or NULL if it failed

### Task 3: Add node at the end

- **Prototype**: `listint_t *add_nodeint_end(listint_t **head, const int n);`
- **Return**: the address of the new element, or NULL if it failed

### Task 4: Free list

- **Prototype**: `void free_listint(listint_t *head);`

### Task 5: Free

- **Prototype**: `void free_listint2(listint_t **head);`
- The function sets the head to NULL

### Task 6: Pop

- **Prototype**: `int pop_listint(listint_t **head);`
- If the linked list is empty return 0

### Task 7: Get node at index

- **Prototype**: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
- where index is the index of the node, starting at 0
- If the node does not exist, return NULL

### Task 8: Sum list

- **Prototype**: `int sum_listint(listint_t *head);`
- If the list is empty, return 0

### Task 9: Insert

- **Prototype**: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
- **Return**: the address of the new node, or NULL if it failed
- If it is not possible to add the new node at index idx, do not add the new node and return NULL

### Task 10: Delete at index

- **Prototype**: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
- **Return**: 1 if it succeeded, -1 if it failed

### Task 11: Reverse list

- **Prototype**: `listint_t *reverse_listint(listint_t **head);`
- **Return**: a pointer to the first node of the reversed list
- You are not allowed to use more than 1 loop.
- You are not allowed to use `malloc`, `free`, or arrays
- You can only declare a maximum of two variables in your function

### Task 12: Print (safe version)

- **Prototype**: `size_t print_listint_safe(const listint_t *head);`
- **Return**: the number of nodes in the list
- This function can print lists with a loop
- You should go through the list only once
- If the function fails, exit the program with status 98
- Output format: see example

---

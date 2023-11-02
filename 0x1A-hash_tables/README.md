# Hash Tables Project

## Tasks

### 0. Create a Hash Table
**Mandatory**
- Write a function that creates a hash table.
- **Prototype:** `hash_table_t *hash_table_create(unsigned long int size);`
  - `size`: Size of the array.
- Returns a pointer to the newly created hash table.
- If something went wrong, your function should return `NULL`.
  
### 1. Implement the djb2 Algorithm
**Mandatory**
- Write a hash function implementing the djb2 algorithm.
- **Prototype:** `unsigned long int hash_djb2(const unsigned char *str);`
- You are allowed to copy and paste the function from [this page](#).

### 2. Get the Index of a Key
**Mandatory**
- Write a function that gives you the index of a key.
- **Prototype:** `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
  - `key`: The key.
  - `size`: Size of the array of the hash table.
- This function should use the `hash_djb2` function.

### 3. Add an Element to the Hash Table
**Mandatory**
- Write a function that adds an element to the hash table.
- **Prototype:** `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
  - `ht`: The hash table.
  - `key`: The key (cannot be an empty string).
  - `value`: The value associated with the key (must be duplicated).
- Returns: `1` if it succeeded, `0` otherwise.
- In case of collision, add the new node at the beginning of the list.

### 4. Retrieve a Value Associated with a Key
**Mandatory**
- Write a function that retrieves a value associated with a key.
- **Prototype:** `char *hash_table_get(const hash_table_t *ht, const char *key);`
  - `ht`: The hash table.
  - `key`: The key you are looking for.
- Returns the value associated with the element, or `NULL` if the key couldn’t be found.

### 5. Print a Hash Table
**Mandatory**
- Write a function that prints a hash table.
- **Prototype:** `void hash_table_print(const hash_table_t *ht);`
  - `ht`: The hash table.
- Print the key/value pairs in the order they appear in the array of the hash table.
- Order: array, list.
- If `ht` is `NULL`, don’t print anything.

### 6. Delete a Hash Table
**Mandatory**
- Write a function that deletes a hash table.
- **Prototype:** `void hash_table_delete(hash_table_t *ht);`
  - `ht`: The hash table.

## How to Test
- Compile your code using the provided compilation commands.
- Test each function individually using the corresponding main files.
- Use Valgrind to check for memory leaks.

## Testing for Collisions
If you want to test for collisions, here are some strings that collide using the djb2 algorithm:
- `hetairas` collides with `mentioner`
- `heliotropes` collides with `neurospora`
- `depravement` collides with `serafins`
- `stylist` collides with `subgenera`
- `joyful` collides with `synaphea`
- `redescribed` collides with `urites`
- `dram` collides with `vivency`

## Repository Information
- **GitHub Repository:** [alx-low_level_programming](#)
- **Directory:** 0x1A-hash_tables

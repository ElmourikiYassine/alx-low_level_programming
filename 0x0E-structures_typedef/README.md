## Task 0: Poppy

Define a new type `struct dog` with the following elements:
- `name` (type: `char *`)
- `age` (type: `float`)
- `owner` (type: `char *`)

### Example Usage
```c
struct dog my_dog;

my_dog.name = "Poppy";
my_dog.age = 3.5;
my_dog.owner = "Bob";
```

---

## Task 1: A dog is the only thing on earth that loves you more than you love yourself

Write a function that initializes a variable of type `struct dog` using the following prototype:
```c
void init_dog(struct dog *d, char *name, float age, char *owner);
```

### Example Usage
```c
struct dog my_dog;

init_dog(&my_dog, "Poppy", 3.5, "Bob");
```

---

## Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Write a function that prints a `struct dog` using the following prototype:
```c
void print_dog(struct dog *d);
```

### Example Usage
```c
struct dog my_dog;

my_dog.name = "Poppy";
my_dog.age = 3.5;
my_dog.owner = "Bob";

print_dog(&my_dog);
```
Output:
```
Name: Poppy
Age: 3.500000
Owner: Bob
```

---

## Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog, it's too dark to read

Define a new type `dog_t` as a new name for the type `struct dog`.

### Example Usage
```c
dog_t my_dog;

my_dog.name = "Poppy";
my_dog.age = 3.5;
my_dog.owner = "Bob";
```

---

## Task 4: A door is what a dog is perpetually on the wrong side of

Write a function that creates a new dog using the following prototype:
```c
dog_t *new_dog(char *name, float age, char *owner);
```

### Example Usage
```c
dog_t *my_dog;

my_dog = new_dog("Poppy", 3.5, "Bob");
```

---

## Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

Write a function that frees dogs using the following prototype:
```c
void free_dog(dog_t *d);
```

### Example Usage
```c
dog_t *my_dog;

my_dog = new_dog("Poppy", 3.5, "Bob");
free_dog(my_dog);
```

---

# Makefile Tasks

## Task 0: 0-Makefile

Create a basic Makefile with the following specifications:

- Executable name: school
- Rule: all
- Build the executable with the given command.

## Task 1: 1-Makefile

Enhance the Makefile from Task 0 with the following changes:

- Use variables for the compiler (CC) and source files (SRC).
- Build the executable with the given command.

## Task 2: 2-Makefile

Create a Makefile that includes the following:

- Compiler (CC), source files (SRC), object files (OBJ), and executable name (NAME) as variables.
- The all rule should recompile only the updated source files.
- Do not use a list of all .o files.

## Task 3: 3-Makefile

Extend the Makefile from Task 2 to include additional rules:

- clean: Deletes Emacs and Vim temporary files along with the executable.
- oclean: Deletes object files.
- fclean: Deletes Emacs and Vim temporary files, the executable, and object files.
- re: Forces recompilation of all source files.

## Task 4: 4-Makefile

Modify the Makefile from Task 3 to include compiler flags (CFLAGS) and follow the specified rules.

## Task 5: 5-island_perimeter.py

Create a Python function `island_perimeter(grid)` that calculates the perimeter of an island described in a grid.

## Task 6: 100-Makefile (Advanced)

Create a Makefile with advanced requirements, including the use of variables, rules for cleaning, compiler flags, and more.

---

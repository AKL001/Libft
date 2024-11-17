# 🚀 `Libft` - A Custom C Library Implementation 🚀

Welcome to **Libft**, a project where I recreated several essential functions from the C standard library to build a custom C library. This project is part of the 42 Network curriculum.

## 📜 About

The goal of **Libft** is to implement a set of standard library functions that are commonly used in C programming, providing a foundation for many other projects. By implementing these functions, you gain a deeper understanding of how standard library functions are built and how memory is managed in C.

## 🧰 Functions Implemented

Here are the functions I implemented in **Libft**:

### Memory Management:
- **`ft_memset`**: Sets a block of memory to a specific value.
- **`ft_bzero`**: Clears a block of memory.
- **`ft_memcpy`**: Copies memory from one location to another.
- **`ft_memccpy`**: Copies memory until a specific character is found.
- **`ft_memmove`**: Moves a block of memory, handling overlapping areas.
- **`ft_memchr`**: Finds a character in a memory block.
- **`ft_memcmp`**: Compares two memory blocks.

### String Manipulation:
- **`ft_strlen`**: Returns the length of a string.
- **`ft_strdup`**: Duplicates a string.
- **`ft_strcpy`**: Copies one string to another.
- **`ft_strncpy`**: Copies a specified number of characters from one string to another.
- **`ft_strcat`**: Concatenates two strings.
- **`ft_strncat`**: Concatenates a specified number of characters from one string to another.
- **`ft_strlcat`**: Safe concatenation with buffer size check.
- **`ft_strchr`**: Finds a character in a string.
- **`ft_strrchr`**: Finds the last occurrence of a character in a string.
- **`ft_strstr`**: Finds the first occurrence of a substring.
- **`ft_strnstr`**: Finds the first occurrence of a substring with a specified length.
- **`ft_strcmp`**: Compares two strings.
- **`ft_strncmp`**: Compares the first n characters of two strings.
- **`ft_strlcpy`**: Copies a string with buffer size check.

### Character Handling:
- **`ft_isalpha`**: Checks if a character is alphabetic.
- **`ft_isdigit`**: Checks if a character is a digit.
- **`ft_isalnum`**: Checks if a character is alphanumeric.
- **`ft_isascii`**: Checks if a character is ASCII.
- **`ft_isprint`**: Checks if a character is printable.
- **`ft_toupper`**: Converts a character to uppercase.
- **`ft_tolower`**: Converts a character to lowercase.

### Memory Allocation:
- **`ft_calloc`**: Allocates memory and initializes it to zero.
- **`ft_realloc`**: Reallocates a block of memory to a new size.

### Linked List:
- **`ft_lstnew`**: Creates a new list element.
- **`ft_lstadd_front`**: Adds an element to the front of the list.
- **`ft_lstsize`**: Returns the size of the list.
- **`ft_lstlast`**: Returns the last element of the list.
- **`ft_lstadd_back`**: Adds an element to the end of the list.
- **`ft_lstdelone`**: Deletes an element from the list.
- **`ft_lstclear`**: Clears the entire list.
- **`ft_lstiter`**: Iterates over the list and applies a function to each element.
- **`ft_lstmap`**: Iterates over the list and applies a function to each element, creating a new list with the results.

### Other Utilities:
- **`ft_itoa`**: Converts an integer to a string.
- **`ft_atoi`**: Converts a string to an integer.
- **`ft_putchar_fd`**: Writes a character to a file descriptor.
- **`ft_putstr_fd`**: Writes a string to a file descriptor.
- **`ft_putendl_fd`**: Writes a string followed by a newline to a file descriptor.
- **`ft_putnbr_fd`**: Writes an integer to a file descriptor.

## 🛠️ Installation

1. Clone the repository to your local machine:  
   `git clone https://github.com/AKL001/Libft.git`  
   `cd libft`  

2. Compile the library:  
   `make`

   For cleaning up use:  
   `make clean`

   Or for a complete clean:
   `make fclean`.

This will create the static library `libft.a`.

## 📚 Usage

To use **Libft** in your projects, include the header file `libft.h` and link the library by including `libft.a` during compilation.

Example:
```c
#include "libft.h"

int main(void) {
    char *str = "Hello, World!";
    ft_putstr_fd(str, 1);  // Prints to stdout
    return 0;
}
```
## 🧩 Project Structure

- **`libft.h`**: Header file containing the declarations of all implemented functions.
- **`libft/`**: Folder containing the source files for all functions.
- **`Makefile`**: Automates the compilation process for the library.

## 📂 What's Next?

- **Test it**: Make sure all the functions work as expected and create more tests for edge cases.
- **Extend it**: Add more useful functions to the library as needed for future projects.
- **Optimize it**: Refactor the code to make it cleaner, more efficient, or better aligned with project requirements.

## 🏆 Goals Achieved

- Gained proficiency in handling memory allocation and string manipulation in C.
- Mastered the creation and management of linked lists in C.
- Improved understanding of file descriptor management and error handling in C.
- - Learned how to create and use a `Makefile` to automate the compilation process.

## 📚 Useful Resources

- [Makefile Tutorial](https://makefiletutorial.com/) - A beginner-friendly guide to writing and understanding Makefiles.
- [Makefile Book](https://www.gnu.org/software/make/manual/make.html) -A comprehensive resource for learning about Makefiles, including implicit and explicit rules.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/make.html) - The official manual for `make`, with detailed examples and advanced usage.
- [Learn Makefile](https://www.tutorialspoint.com/makefile/index.htm) - A tutorial that covers basic to advanced concepts of Makefiles.
- [Makefile Basics by DigitalOcean](https://www.digitalocean.com/community/tutorials/how-to-use-makefiles-to-automate-compilation-on-ubuntu-20-04) - A practical guide on how to use Makefiles for automating tasks.
- ### Linked List Resources:
- [Linked List YouTube Video ](https://www.youtube.com/watch?v=mkZYMKwKkvI&t=1164s) -A YouTube video that explains everything you need to know about linked lists.
- [Linked List Tutorial by GeeksforGeeks](https://www.geeksforgeeks.org/data-structures/linked-list/) - A comprehensive guide covering the basics and advanced topics of linked lists.
- [Linked List in C by Programiz](https://www.programiz.com/dsa/linked-list) - A beginner-friendly tutorial to understand how linked lists work and how to implement them in C.
- [The Ultimate Guide to Linked Lists by Educative.io](https://www.educative.io/edpresso/what-is-a-linked-list) - A detailed explanation and examples of how to implement and manipulate linked lists.
- [Linked List Implementation by TutorialsPoint](https://www.tutorialspoint.com/data_structures_algorithms/linked_list.htm) - An easy-to-follow guide to understanding linked list concepts and implementation in C.

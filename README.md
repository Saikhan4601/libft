This project has been created as part of the 42 curriculum by sadavaas.

## Description
The primary goal is to create a custom C library (libft.a) containing functions.  

The project is divided into three parts:  
Part 1: Reimplementation of functions from the standard C library (libc).  
Part 2: Implementation of additional utility functions for string manipulation, conversion, and file descriptor output.  
Part 3: Implementation of functions for managing a linked list data structure (t_list).  

## Instructions
Compilation  
The project is compiled using the provided Makefile. All source files must be compiled with the C compiler (cc) using the flags -Wall, -Wextra, and -Werror.  

To compile the library (libft.a), run the following command:  

**`make`** or **`make all`** -- Compiles all .c source files and creates libft.a.  
**`make clean`**	     -- Removes all object files (.o).  
**`make fclean`**	     -- Removes all object files (.o) and the compiled library file (libft.a).  
`make re`	         -- recompiles everything.  

## Resources
Standard C Library (libc) Man Pages.  
https://www.geeksforgeeks.org/  
https://stackoverflow.com/questions  
youtube - https://www.youtube.com/@PortfolioCourses  

## AI Usage Description (Mandatory)
The use of AI:  
Understanding Concepts: Asking for explanations of complex concepts (e.g., function pointers, memory allocation, the purpose of void * in the generic list structure) to facilitate better learning, rather than asking for direct answers.  
Debugging Assistance: Analyzing error messages (e.g., segmentation faults, memory leak reports) to identify faulty logic, ensuring all heap-allocated memory is properly freed.  

## Detailed Library Description

### Libc Functions (Part 1)

1. **`ft_isalpha`** — Checks for an alphabetic character. Returns 1 if true, 0 if false.
2. **`ft_isdigit`** — Checks for a digit (0 through 9). Returns 1 if true, 0 if false.
3. **`ft_isalnum`** — Checks for an alphanumeric character. Returns 1 if true, 0 if false.
4. **`ft_isascii`** — Checks whether `c` is a valid ASCII character (0 to 127). Returns 1 if true, 0 if false.
5. **`ft_isprint`** — Checks for a printable character. Returns 1 if true, 0 if false.
6. **`ft_strlen`** — Computes the length of the string `s`.
7. **`ft_memset`** — Fills the first `len` bytes of the memory area pointed to by `b` with the constant byte `c`.
8. **`ft_bzero`** — Writes `n` zero bytes to the memory area pointed to by `s`.
9. **`ft_memcpy`** — Copies `n` bytes from memory area `src` to memory area `dst`.
10. **`ft_memmove`** — Copies `len` bytes from string `src` to string `dst`. The memory areas may overlap.
11. **`ft_strlcpy`** — Copies up to `dstsize - 1` characters from `src` to `dst`, NUL-terminating the result.
12. **`ft_strlcat`** — Appends the NUL-terminated string `src` to the end of `dst`.
13. **`ft_toupper`** — Converts a lowercase letter to its uppercase equivalent.
14. **`ft_tolower`** — Converts an uppercase letter to its lowercase equivalent.
15. **`ft_strchr`** — Locates the first occurrence of the character `c` in the string `s`.
16. **`ft_strrchr`** — Locates the last occurrence of the character `c` in the string `s`.
17. **`ft_strncmp`** — Compares the first `n` characters of the strings `s1` and `s2`.
18. **`ft_memchr`** — Scans the initial `n` bytes of the memory area pointed to by `s` for the first instance of `c`.
19. **`ft_memcmp`** — Compares the first `n` bytes of memory area `s1` and memory area `s2`.
20. **`ft_strnstr`** — Locates the first occurrence of the null-terminated string `needle` in `haystack`, where no more than `len` characters are searched.
21. **`ft_atoi`** — Converts the initial portion of the string pointed to by `str` to an integer value.
22. **`ft_calloc`** — Allocates memory for an array of `count` elements of `size` bytes each and initializes them to zero. Returns a unique pointer that can be freed if `count` or `size` is 0.
23. **`ft_strdup`** — Returns a pointer to a new string which is a duplicate of the string `s1`. Memory is allocated with `malloc`.

### Additional Functions(Part 2)

1. `ft_substr`	
Allocates memory and returns a substring from string s, starting at index start with a maximum length of len. Returns NULL if allocation fails.

2. `ft_strjoin`
Allocates memory and returns a new string, the result of concatenating s1 (prefix) and s2 (suffix). Returns NULL if allocation fails.

3. `ft_strtrim	`
Allocates memory and returns a copy of s1 with characters from set removed from the beginning and the end. Returns NULL if allocation fails.

4. `ft_split	`
Allocates memory and returns an array of strings obtained by splitting s using the character c as a delimiter. The array must end with a NULL pointer. Returns NULL if allocation fails.

5. `ft_itoa	`
Allocates memory and returns a string representing the integer n. Negative numbers must be handled. Returns NULL if allocation fails.

6. `ft_strmapi	`
Applies the function f to each character of s, passing its index, and creates a new string with the results. Returns NULL if allocation fails.

7. `ft_striteri`
Applies the function f to each character of s, passing its index. The character is passed by address so it can be modified.

8. `ft_putchar_fd`	
Outputs the character c to the specified file descriptor fd.

9. `ft_putstr_fd	`
Outputs the string s to the specified file descriptor fd.

10. `ft_putendl_fd	`
Outputs the string s to the specified file descriptor fd followed by a newline.

11. `ft_putnbr_fd	`
Outputs the integer n to the specified file descriptor fd.

### Linked List Functions (Part 3)
Data Structure (t_list)
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

1. `ft_lstnew `    	---Allocates a new node and initializes its content and sets next to NULL.

2. `ft_lstadd_front`	---Adds the new node to the beginning of the list (lst).

3. `ft_lstsize	`    ---Counts the number of nodes in the list.

4. `ft_lstlast   `   ---Returns a pointer to the last node of the list.

5. `ft_lstadd_back`	---Adds the new node to the end of the list (lst).

6. `ft_lstdelone`	  ---Frees the node's content using del, then frees the node itself. Does not free the next node.

7. `ft_lstclear`	    ---Deletes and frees the given node and all its successors, setting the list pointer to NULL.

8. `ft_lstiter`	    ---Applies the function f to the content of every node in the list.

9. `ft_lstmap`	      ---Creates a new list by applying function f to the content of each node in the original list.

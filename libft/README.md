_This project has been created as part of the 42 curriculum by vsack_

**Description:**

The goal of the libft project is to have a library of various functions which we can use in future projects. The library includes 43 different custom C functions for memory allocation and manipulation and linked list management and many more. It also includes a MAKEFILE and libft.h file for compilation.

**Instructions:**

To compile the functions run the command make in the terminal while in the libft directory which will create a library file called libft.a.
To clean all the object and library files created by the make command run the command make clean for the object files and make fclean to clear the library file. To use the library in any project you have to include the libft.h header and link to the library on compilation with the command 
cc main.c -L. -lft.

**Resources:**
Most of the research done on this project was by asking peers and looking up prior written code. AI was used for some refactoring and catch unnoticed errors.
I also used a libft tester to test if all functions work like they’re supposed to.

LibftTester: https://github.com/Tripouille/libftTester

**List of functions:**

**Functions to check and manipulate characters:**

    • ft_isalpha 
    • ft_isdigit 
    • ft_isalnum 
    • ft_isascii 
    • ft_isprint 
    • ft_toupper 
    • ft_tolower 
**Functions to manipulate strings:**

    • ft_strlen 
    • ft_strlcpy 
    • ft_strlcat 
    • ft_strchr 
    • ft_strrchr 
    • ft_strncmp 
    • ft_strnstr 
    • ft_substr 
    • ft_strjoin 
    • ft_strtrim 
    • ft_split 
    • ft_strmapi 
    • ft_striteri 
**Functions to manipulate memory:**

    • ft_calloc 
    • ft_memset 
    • ft_bzero 
    • ft_memcpy 
    • ft_memmove 
    • ft_memchr 
    • ft_memcmp 
    • ft_strdup 
**Functions for numbers:**

    • ft_atoi 
    • ft_itoa 
**Functions to write to a file descriptor:**

    • ft_putchar_fd 
    • ft_putstr_fd 
    • ft_putendl_fd 
    • ft_putnbr_fd 
**Functions to manage linked lists**:

    • ft_lstnew 
    • ft_lstadd_front 
    • ft_lstsize 
    • ft_lstlast 
    • ft_lstadd_back 
    • ft_lstdelone 
    • ft_lstclear 
    • ft_lstiter 
    • ft_lstmap

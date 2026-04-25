_This project has been created as part of the 42 curriculum by vsack_

### Description:

This project is a bare bones reimplimantation of the libc function printf.
It also includes a directoy called libft which is a library of functions where some are needed for ft_printf.

**Supported specifiers:**

`%c`- For printing a single character<br>
`%s`- For printing a string of characters<br>
`%p`- For Printing the adress of a pointer<br>
`%d` or `%i`- For printing a signed integer<br>
`%u`- For printing an unsigned integer<br>
`%x` or `%X`- For printing an unsigned integer as a hexadecimal with small letters and big letters respectivley.

### Installation and compilation:

First you have to clone this repo

    git clone https://github.com/Ketaminepunch/printf.git

Then in the cloned directory run the `make` command.<br>
This makes and object file for every function and creates 2 libraries one libft.a and the other libftprintf.a

    make

To compile the function with your project you have to reference the newly created library during compilation

    cc projectname.c libftprintf.a

### Resources:

For research and learning the new concept of variadic functions I used this website: https://www.geeksforgeeks.org/c/variadic-functions-in-c/

Also Google Gemini was used to make small challanges to test my understanding of learned concepts before implemeting them in printf.

Most testing was done manually but i also ran this tester: https://github.com/Tripouille/printfTester

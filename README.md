<h1 align="center">
    libft
</h1>

<p align="center">
	<b><i>YOUR VERY FIRST OWN LIBRARY</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/Peken-bower/Mylibft?color=lightblue" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/Peken-bower/Mylibft?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/Peken-bower/Mylibft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/Peken-bower/Mylibft?color=green" />
</p>

<h3 align="center">
	<a href="What is Libft?">What is Libft?</a>
	<span> · </span>
	<a href="What's in it ?">What's in it ?</a>
	<span> · </span>
    <a href="How does it Work?">How does it Work?</a>
    <span> · </span>
    <a href="How do I use the library?">How do I use the library?</a>
</h3>

# What is Libft ?
[Libft](https://github.com/Peken-bower/LibFt/blob/main/Res/Project/fr.subject.pdf) is the first Project at [42 Network](https://www.42network.org/) , in this Lib we will create some standard C library function including some additional ones that can be used later to build a library of useful function for the rest of program . 

We re-create this function in order to deepen our understanding of C . this philosophy is the best to fully understand that machine that you're using and how it all works together . As a result , we avoid treating even these basic functions as black-boxes. 

# What's in it ? 
As you can see from the Project of libft . there are 4 sections ;
 1. **Libc functions** Some of the standard C functions .
 2. **Additional functions** This Function will be useful for later project .
 3. **Bonus Functions** This Function we will used in Linked List .
 
|Libc functions | Additional functions | Bonus Functions |
|----------- |----------- | -----------|
| isalpha		| putchar_fd| lstnew	    |
| isdigit       | putstr_fd	| lstadd_front	|
| isalum		| putnbr_fd	| lstsize	    | 
| isprint		| putendl_fd| lstlast	    |
| isascii		| strjoin	| lstadd_back   | 
| tolower		| split	    | lstdelone     |
| toupper		| itoa	    | lstclear      |
| bzero		    | strmapi	| lstiter       | 
| memset		| striteri	| lstmap        | 
| memcpy		| strtrim	|	|
| memmove		| substr	|	|
| memchar		| 	        |	|
| memcmp        |           |   |
| strlen		|        	|	|
| strlcpy		|         	|	|
| strlcat		|        	|	|
| strchar		|       	|	|
| strrchar		|       	|	|
| strncmp		|        	|	|
| strnstr	    |        	| 	|
| atoi	        |       	|	|
| calloc		|        	|	|
| strdup		|       	|	|

### Functions from `<ctype.h>` library

* [`ft_isascii`](src/is/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](src/is/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](src/is/ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](src/is/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](src/is/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](src/to/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](src/to/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](src/to/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](src/mem/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](src/mem/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](src/mem/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](src/mem/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](src/mem/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](src/mem/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](src/mem/ft_memcpy.c)		- copy memory area.

### Functions from `<string.h>` library

* [`ft_strlen`](src/str/ft_strlen.c)				- find length of string.
* [`ft_strchr`](src/str//ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](src/str//ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strnstr`](src/str/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strncmp`](src/str/ft_strncmp.c) 			- compare strings (size-bounded).
* [`ft_strdup`](src/str//ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strlcpy`](src/str/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](src/str/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_itoa`](src/to/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](src/str/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](src/str/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](src/str/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](src/str/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](src/str/ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_striteri`](src/str/ft_striteri.c)			- 
* [`ft_putchar_fd`](src/put/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](src/put/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](src/put/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](src/put/ft_putnbr_fd.c)		- output integer to given file.

### Linked list functions (bonus)

* [`ft_lstnew`](src/lst/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](src/lst/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](src/lst/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](src/lst/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](src/lst/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](src/lst/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](src/lst/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](src/lst/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](src/lst/ft_lstmap.c)				- apply function to content of all list's elements into new list.

Notes :  
- All the files and functions are namespaced with an **ft_** in front . It strands for Fourty two 
- The project instructions require that we put all the source files in the root directory . 

### How does it work? 

the goal is to create a library called libft.a from the source files so I can later use that library from my other projects . 
The create that Library , after cloning this project , **cd** to folder of this projec5t and call make : 
```shell
git clone git@github.com:Peken-bower/LibFt.git
cd LibFt
make
```
You should see a *libft.a* file and some object files (*.o). 
Now to clean up (remove this .o files) , Call `make clean`.

### How do I use the library? 

When compiling , you have to tell the file where your library resides and which library it is using: 
```shell
gcc -L. -lft -o nameofbinary.out nameofSource.c
```
-L takes the path to your library. `.` in this case<br>
-l takes the name of your library. This is the set of characters that come after `lib` in your library name. 

That's it . Now run it using `./nameofbinary.out`

### Example usage 

this is a list of my project that use Libft extensivly : 

* [get the next line]()

### Board of project : 

i use Trello Board to Manage all the task of this project check [here](https://trello.com/b/ZkZv5Lcq).

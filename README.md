This project has been created as part of 42 curriculum by vigomes-

![libft header](src/cover-libft.png)

<!-- Description -->
# LIBFT BY 42 - NEW COMMON CORE
#### Libft goal is to introduce C by creating a functional library based on standard c library (plus some other functions). On this project was introduced memory allocation, memory management, pointer, struct uses, and some others c concepts.

<!-- ![libft validation](src/validation.png) -->

<!-- Introduction (compilation process and way to use) -->
## How to use
#### To use libft on you project you will need to have the standard c libraries and your machine need to be configured to run C. Your machine also need to have the compiler `cc`.

### Step 1: setting environment
#### copy the libft directory to the directory `includes` inside of your project
```bash
cp [libft directory path] [your project directory path]/includes
```

### Step 2: compilation setting
#### 2.1 - add libft on your project Makefile definitions
```Makefile
LIBFT_DIR	=	includes/libft/
LIBFT		=	$(LIBFT_DIR)libft.a
LIBFT_OBJ	=	$(wildcard $(LIBFT_DIR)*.o)
```

#### 2.2 - include libft on your project Makefile compilations rules — usually after `all: $(NAME)`
```Makefile
all: $(NAME)
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)


$(NAME): $(OBJS) $(LIBFT)
		$(COMPILER) $(COMPILER_FLAGS) $(OBJS) $(LIBFT) -o $(NAME)
```

#### 2.3 - include libft on your project Makefile fclean rule
```Makefile
fclean: clean
		@make fclean -C $(LIBFT_DIR)
```

### Step 3: using libft on project

#### Option 1: add libft on your project header file — usually on `includes/your_project.h`
```c
#ifndef YOUR_PROJECT_H
# define YOUR_PROJECT_H

# include "libft.h"

#endif
```
#### then call your project header on your file `.c`
```c
#include "../includes/your_project.h"
```

#### Option 2: call libft directly on your file `.c`
```c
#include "../includes/libft/libft.h"
```
<!-- Additonal - explain library -->
## LIBFT DESCRIPTION
#### Libft is a custom static C library developed as part of the 42 Common Core. The project recreates several functions from the standard C library while introducing low-level programming concepts such as memory allocation, memory management, pointers, structs, linked lists, file descriptors, and modular programming. The library is designed to be reusable in future 42 projects and other C applications.
### Character verification functions
#### This block reproduces part of the `<ctype.h>` library behavior. These functions are used to validate and classify ASCII characters, allowing checks for alphabetic characters, numeric digits, alphanumeric values, printable characters, and valid ASCII ranges. They are commonly used for parsers, input validation, tokenization, and text processing.

```c
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
```

### Memory manipulation functions
#### This block focuses on low-level memory operations using raw byte manipulation. These functions are essential for managing buffers, copying memory safely, comparing memory regions, searching bytes, and dynamically allocating memory. The implementation of these functions introduces concepts such as pointer arithmetic, type casting, memory overlap handling, and heap allocation.
```c
void	*ft_memset(void *buff, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *st, int c, size_t n);
int		ft_memcmp(const void *st1, const void *st2, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
```

### Data transformation functions
#### This block contains functions used to transform, convert, or format data. It includes character case conversion, memory zeroing, string splitting, and conversions between strings and numeric values. These functions introduce concepts such as parsing, dynamic memory allocation, integer handling, and string processing.
```c
void	ft_bzero(void *st, size_t nb);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *st);
char	*ft_itoa(int nb);
char	**ft_split(char const *str, char ch);
```

### String handling functions
#### This block reproduces and extends several `<string.h>` behaviors. The functions are used to measure, copy, concatenate, compare, duplicate, search, trim, join, and iterate through strings. These utilities are heavily used throughout C projects and reinforce concepts such as null-terminated strings, pointer traversal, buffer protection, substring extraction, and dynamic string creation.
```c
size_t	ft_strlen(const char *st);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t destsz);
char	*ft_strchr(const char *st, int c);
char	*ft_strrchr(const char *st, int c);
int		ft_strncmp(const char *st1, const char *st2, size_t n);
char	*ft_strnstr(const char *st1, const char *st2, size_t n);
char	*ft_strdup(const char *st);
char	*ft_substr(char const *st, unsigned int start, size_t len);
char	*ft_strjoin(char const *st1, char const *st2);
char	*ft_strtrim(char const *st, char const *set);
char	*ft_strmapi(char const *st, char (*ftn)(unsigned int, char));
void	ft_striteri(char *st, void (*ftn)(unsigned int, char*));
```

### Output functions
#### This block contains functions used to write characters, strings, and numbers to specific file descriptors. These functions introduce the concept of UNIX file descriptors and low-level output handling using the `write` system call, which is fundamental for later 42 projects involving files, pipes, processes, and terminal interaction.
```c
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *st, int fd);
void	ft_putnbr_fd(int n, int fd);
```

### Linked list functions
#### This block introduces dynamic data structures through singly linked lists using the `t_list` structure. The functions allow node creation, insertion, traversal, iteration, deletion, cleanup, and mapping operations. This section reinforces concepts such as heap allocation, pointer manipulation, function pointers, memory ownership, dynamic traversal, and safe memory deallocation.
```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

<!-- Resources (what resouces used and how AI was used)-->
## Resources
[`Acelera 42`](https://rodsmade.notion.site/Acelera-Libft-8874a01f188a4671ae503fe9e99056ab)

AI Prompt used on [`ChatGPT`](https://chatgpt.com/):
```txt
I need you to guide me to make the exercises I send you.

I don't want you to:
- give me the code ready
- skip concepts
- focus only on the theoretical

I want you to:
- explain me what the function does
- explain me concepts
- guide me to build the function
- explain me how to fix the code I sent you (just show me the correct line version after a mistake three times the same line - when I get stuck on a line or loop)
```

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
## LIBFT SUMMARY
#### Libft reproduce and extend standard C library behavior. The library includes character verification functions, memory manipulation utilities, data transformation functions, string handling tools, output functions for file descriptors, and linked list utilities for dynamic data structure management.
### Character verification functions
#### Functions used to verify or classify characters.
```c
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
```

### Memory manipulation functions
#### Functions used to manipulate raw memory blocks and allocations.
```c
void	*ft_memset(void *buff, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *st, int c, size_t n);
int		ft_memcmp(const void *st1, const void *st2, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
```

### Data transformation functions
#### Functions used to transform characters, strings, or numeric values
```c
void	ft_bzero(void *st, size_t nb);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *st);
char	*ft_itoa(int nb);
char	**ft_split(char const *str, char ch);
```

### String handling functions
#### Functions used to manipulate, search, compare, and create strings.
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
#### Functions used to write characters, strings, and numbers to file descriptors.
```c
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *st, int fd);
void	ft_putnbr_fd(int n, int fd);
```

### Linked list functions
#### Functions used to create, manipulate, iterate, and clear linked lists using the t_list structure.
```c
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
- focus only on theoric

I want you to:
- explain me what the function does
- explain me concepts
- guide me to build the function
- explain me how to fix the code I sent you (just show me the correct line version after a mistake three times the same line - when I get stuck on a line or loop)
```

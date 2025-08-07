# Libft – Your Very First Own Library 🧱

This project is part of the [École 42](https://www.42sp.org.br/) curriculum, and consists of implementing your own C library containing several commonly used libc functions and other utilities, including singly linked list manipulation.

## 🧠 Purpose

The goal of this project is to develop a deep understanding of standard C functions by reimplementing them manually. It also provides a solid foundation for future projects by creating a reusable and reliable library.

---

## 📁 Project Structure

### 📌 Part 1 – Libc Functions

Reimplementation of classic libc functions, with the `ft_` prefix, including:

- **Character and string**: `ft_isalpha`, `ft_isdigit`, `ft_strlen`, `ft_strncmp`, `ft_strchr`, `ft_strrchr`, etc.
- **Memory manipulation**: `ft_memset`, `ft_memcpy`, `ft_bzero`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **Conversion and case**: `ft_toupper`, `ft_tolower`, `ft_atoi`
- **Allocation and duplication**: `ft_calloc`, `ft_strdup`

### 📌 Part 2 – Additional Functions

Useful functions not directly available in libc:

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

---

## ⭐ Bonus – Linked Lists

Implementation of a set of functions to handle singly linked lists using the `t_list` structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```

Implemented functions:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

## 🔧 Compilation

The library is compiled with:

```bash
make
```

To compile the bonus part:

```bash
make bonus
```

Other available commands:

```bash
make clean   # Removes object files (.o)
make fclean  # Removes object files and the libft.a file
make re      # Runs fclean and then make
```

Compilation follows the strict flags:

```
-Wall -Wextra -Werror
```

---

## 🛠️ Rules and Constraints

- All files are located at the root of the repository.
- No external functions were used (except the allowed ones).
- No global variables were used.
- All functions follow the `Norminette` coding standard.
- The project was tested for leaks and failures.

---

## ✅ Status

✔️ **Project successfully completed**, including the **bonus** part.

---

## 📚 References

- Man pages: `man strlen`, `man memcpy`, etc.
- BSD libc vs glibc (exploration for functions such as `strlcpy` and `strlcat`)
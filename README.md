
# Get_Next_Line (GNL) - 42

## Description

The `get_next_line` (GNL) project is part of the 42 School curriculum. It is a function that reads a line ending with a newline character from a file descriptor.

This project aims to help students understand static variables in C and to gain deeper understanding of allocations, whether they happen on the stack memory or in the heap memory, as well as the manipulation and the lifecycle of a buffer.

## Functionality

The `get_next_line` function has the following prototype:

```c
int get_next_line(int fd, char **line);
```

Where:
- `fd` is the file descriptor from where to read
- `line` is the value of what has been read

The function will return:
- `1` : A line has been read
- `0` : EOF has been reached
- `-1` : An error occurred

## Compilation

A Makefile is not provided for this project. To test the function, you might have a .c file such as this one:

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd = open("testfile", O_RDONLY);
    char *line = 0;
    int ret = 1;
    
    while (ret > 0)
    {
        ret = get_next_line(fd, &line);
        printf("%s\n", line);
        free(line);
    }
    close(fd);
    return (0);
}
```

You can compile the program using:

```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c main.c -o gnl
```

Here, `BUFFER_SIZE` is defined during the compilation and it is used to determine the number of bytes read in each call to `read` in the function.

## Notes

The code adheres to The Norm (the 42 School's coding standard), so it is formatted in a specific way and includes only a few C Standard Library functions.

## Authors and acknowledgment

This project is carried out by 42 students. We express our gratitude to the pedagogical team for providing us a challenging platform to learn and grow.

## License

This project is licensed under the 42 School Norm. You can use and adapt it as long as you respect the license.
```

This README is a template and it should be adjusted based on the specific needs of your project.

#ifndef BOOK_H
# define BOOK_H

# define MAX_BOOKS 1000

# include <stddef.h>

typedef struct s_book {
	int		id;
	char	*title;
	char	*author;
}   t_book;

#endif
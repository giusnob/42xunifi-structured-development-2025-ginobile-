#ifndef BOOK_H
# define BOOK_H

# define MAX_BOOKS 1000

typedef struct s_book
{
	int   id;        // identificatore univoco, positivo
	char *title;     // titolo normalizzato: leading/trailing trim + '\0'
	char *author;    // autore normalizzato
}	t_book;

char	*str_trim(char *s);
char	*str_tolower(char *s);

#endif

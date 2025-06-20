#ifndef SEARCH_H
# define SEARCH_H

# include "book.h"

// Prompt iniziale: 1 = titolo, 2 = autore, 0 = uscita
int	ask_search_mode(void);

// Returna stringa heap-allocata già trim-mata; NULL se EOF/Ctrl-D
char	*ask_query(void);

void	search_by_title(const t_book books[], int count, const char *q);
void	search_by_author(const t_book books[], int count, const char *q);

#endif

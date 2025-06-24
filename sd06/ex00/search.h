#ifndef SEARCH_H
# define SEARCH_H

# include "book.h"

int search_books_by_title(const t_book books[], size_t count, const char *query);
int search_books_by_author(const t_book books[], size_t count, const char *query);

#endif
#ifndef CATALOG_H
# define CATALOG_H

# include "book.h"

int		load_catalog(const char *filename, t_book books[], size_t max);
void	free_catalog(t_book books[], size_t count);
void	warn_malformed_line(size_t line_number, const char *raw);

#endif
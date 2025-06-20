#ifndef CATALOG_H
# define CATALOG_H

# include "book.h"
# include <stddef.h>

// Returna il numero di libri caricati, -1 su errore fatale
int	load_catalog(const char *file, t_book books[]);

// Emette un warning (stderr) ma non ferma l’esecuzione
void	warn_malformed_line(size_t ln, const char *raw);

void	free_catalog(t_book books[], int count);

#endif

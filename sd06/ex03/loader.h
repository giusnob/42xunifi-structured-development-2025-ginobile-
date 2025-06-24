#ifndef LOADER_H
# define LOADER_H

# include "movie.h"

int		load_movies(const char *file, t_movie dst[], size_t cap);
void	free_movies(t_movie dst[], size_t count);
void	warn_malformed_line(size_t ln, const char *raw);

#endif
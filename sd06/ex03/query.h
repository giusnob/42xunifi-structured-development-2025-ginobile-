#ifndef QUERY_H
# define QUERY_H

# include "movie.h"

void	list_all(const t_movie src[], size_t n);
size_t	search_title(const t_movie src[], size_t n, const char *query,
						t_movie out[], size_t max);
size_t	search_genre(const t_movie src[], size_t n, const char *query,
						t_movie out[], size_t max);
size_t	filter_watched(const t_movie src[], size_t n, int flag,
						t_movie out[], size_t max);

#endif
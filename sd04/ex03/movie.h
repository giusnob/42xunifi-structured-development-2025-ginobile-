#ifndef MOVIE_H
# define MOVIE_H

# include <stddef.h>
# define MAX_MOVIES 1000

typedef enum e_bool { FALSE = 0, TRUE = 1 }	t_bool;

typedef struct s_date
{
	int year;
	int month;
	int day;
}	t_date;

typedef struct s_movie
{
	size_t	id;             // positive unique
	char	*title;         // non-empty
	char	*genre;         // non-empty
	t_bool	watched;        // 0 / 1
	int		rating;         // 1-10 if watched, else 0      
	t_date	date_watched;   // valid if watched, else {0}  
}	t_movie;

int     load_movies(const char *file, t_movie v[], size_t cap);
int     save_movies(const char *file, const t_movie v[], size_t n);

void    list_all(const t_movie v[], size_t n);
void    add_movie(t_movie v[], size_t *n);
int     mark_watched(t_movie *m);
int     update_movie(t_movie *m);
int     delete_movie(t_movie v[], size_t *n, size_t id);

void    search_title(const t_movie *src, size_t n, const char *substr);
void    search_genre(const t_movie *src, size_t n, const char *substr);
void    filter_by_watched(const t_movie *src, size_t n, t_bool wanted);

void    stats_overview(const t_movie *v, size_t n);

void    free_movies(t_movie v[], size_t n);

#endif

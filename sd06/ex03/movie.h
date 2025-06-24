#ifndef MOVIE_H
# define MOVIE_H

# include <stddef.h>

# define MAX_MOVIES 1000

typedef struct s_date {
	int year;
	int month;
	int day;
}   t_date;

typedef struct s_movie {
	size_t	id;         // positive unique
	char	*title;      // non-empty
	char	*genre;      // non-empty
	int		watched;    // 0 / 1
	int		rating;     // 1-10 if watched, else 0
	t_date	date;       // valid if watched, else {0}
}   t_movie;

#endif
#include "movie_planner.h"

// Returns a movie night plan from the given list. Returns NULL on failure.
struct Plan *create_movie_night_plan(void)
{
    struct Preferences  *taste;
    struct MovieList    *film;
    struct Plan         *plan;

    taste = get_user_preferences();
    if (!taste)
        return (NULL);
    film = find_movies(taste);
    if (!film)
    {
        free(taste);
        return (NULL);
    }
    plan = build_plan(film);
    if (!plan)
    {
        free(taste);
        free(film);
        return (NULL);
    }
    return (plan);
}

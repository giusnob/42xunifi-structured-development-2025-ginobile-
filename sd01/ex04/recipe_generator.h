#ifndef WORKOUT_SCHEDULER_H
# define WORKOUT_SCHEDULER_H

#include <stdlib.h>

# define NO_ALL "\033[0m"
# define NO_COLOR "\e[39m"
# define BLACK "\e[30m"
# define RED "\033[31m"
# define GREEN "\e[32m"
# define BRGREEN "\033[32;1m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[95m"
# define BRCYAN "\033[96m"

struct Ingredients;
struct TasteProfile;
struct Recipe;

// Fetch current ingredients from fridge. Returns a new Ingredients* or NULL on failure.
struct Ingredients *get_current_ingredients(void);

// Fetch user taste profile. Returns a new TasteProfile* or NULL on failure.
struct TasteProfile *get_user_taste_profile(void);

// Generate a new recipe candidate based on ingredients & taste. Returns a new Recipe* or NULL on failure.
struct Recipe *create_recipe(struct Ingredients *ingredients, struct TasteProfile *taste);

// Ask user approval for the given recipe. Returns 1 if approved, 0 otherwise.
int get_user_approval(struct Recipe *recipe);

// Free functions for cleanup:
void free_ingredients(struct Ingredients *ing);
void free_taste_profile(struct TasteProfile *tp);
void free_recipe(struct Recipe *recipe);

#endif
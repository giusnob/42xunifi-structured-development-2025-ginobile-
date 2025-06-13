#include "recipe_generator.h"

struct Recipe *create_custom_recipe(void)
{
    struct Ingredients *ing = get_current_ingredients();
    if (!ing)
        return (NULL);

    struct TasteProfile *taste = get_user_taste_profile();
    if (!taste)
    {
        free_ingredients(ing);
        return (NULL);
    }

    struct Recipe *recipe = NULL;
    int approved = 0;

    while (!approved)
    {
        recipe = create_recipe(ing, taste);
        if (!recipe)
        {
            free_taste_profile(taste);
            free_ingredients(ing);
            return (NULL);
        }

        approved = get_user_approval(recipe);
        if (!approved)
        {
            free_recipe(recipe);
            recipe = NULL;
        }
    }

    free_taste_profile(taste);
    free_ingredients(ing);

    return (recipe);
}

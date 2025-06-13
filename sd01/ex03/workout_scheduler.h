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

struct UserData;
struct WorkoutPlan;

// Returns a new UserData (mocked). Returns NULL on failure.
struct UserData *get_user_data(char *username);
// Build a base WorkoutPlan from raw user data. Returns NULL on failure.
struct WorkoutPlan *build_base_plan(struct UserData *data);
// Optionally refine an existing plan. Returns the same pointer (or a new one) or NULL on failure.
struct WorkoutPlan *refine_plan(struct WorkoutPlan *plan, struct UserData *data);
// Determine how many days the workout schedule should span. Returns positive int, or <=0 on failure.
int determine_duration(struct WorkoutPlan *plan);
// Assign daily exercises for the next day into the plan.
void assign_daily_exercises(struct WorkoutPlan *plan, int day);
// Assign daily tips for the next day into the plan.
void assign_daily_tips(struct WorkoutPlan *plan, int day);
// Free functions for cleanup.
void free_user_data(struct UserData *data);
void free_workout_plan(struct WorkoutPlan *plan);

#endif
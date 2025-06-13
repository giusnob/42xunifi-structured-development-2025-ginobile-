#include "workout_scheduler.h"

struct WorkoutPlan *create_workout_schedule(char *username)
{
    struct UserData *user = get_user_data(username);
    if (!user)
        return (NULL);

    struct WorkoutPlan *plan = build_base_plan(user);
    if (!plan)
    {
        free_user_data(user);
        return (NULL);
    }

    plan = refine_plan(plan, user);
    if (!plan)
    {
        free_user_data(user);
        return (NULL);
    }

    int duration = determine_duration(plan);
    if (duration <= 0)
    {
        free_user_data(user);
        free_workout_plan(plan);
        return (NULL);
    }

    for (int day = 1; day <= duration; day++)
    {
        assign_daily_exercises(plan, day);
        assign_daily_tips(plan, day);
    }

    free_user_data(user);
    return plan;
}

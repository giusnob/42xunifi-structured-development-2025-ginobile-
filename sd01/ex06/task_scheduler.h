#ifndef TASK_SCHEDULER_H
# define TASK_SCHEDULER_H

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


struct TaskProfile;
struct TaskList;
struct PriorityMap;
struct ScheduleResult;
struct LoadInfo;

// Analyze task load and I/O behavior. Returns a new TaskProfile or NULL on failure.
struct TaskProfile *profile_tasks(struct TaskList *tasks);

// Compute a priority map from task profiling. Returns a new PriorityMap or NULL on failure.
struct PriorityMap *compute_priorities_mock(struct TaskProfile *profile);

// Return the number of available CPU cores.
int get_available_core_count(void);

// Select the best task to assign next based on the profile. Returns a task ID or -1 on failure.
int select_best_task(struct TaskProfile *profile);

// Create a ScheduleResult structure for the specified number of cores. Returns NULL on failure.
struct ScheduleResult *create_schedule_result(int core_count);

// Update the result schedule with a task assignment.
void update_schedule_entry(struct ScheduleResult *result, int core_id, int task_id);

void free_task_profile(struct TaskProfile *profile);
void free_priority_map(struct PriorityMap *priorities);
void free_loadinfo(struct LoadInfo *load);

#endif
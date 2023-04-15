#ifndef TODOLIST_H
#define TODOLIST_H

#include <vector>
#include <string>
#include "task.h"

class ToDoList {
public:
    void add_task(const std::string& description);
    void delete_task(int index);
    void update_task(int index, const std::string& new_description);
    void mark_task_completed(int index);
    void mark_task_uncompleted(int index);
    void display_tasks() const;

private:
    std::vector<Task> tasks;
};

#endif // TODOLIST_H

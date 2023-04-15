#ifndef TODO_LIST_H
#define TODO_LIST_H

#include "task.h"
#include <vector>

class TodoList {
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

#endif // TODO_LIST_H

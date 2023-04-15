#ifndef USER_H
#define USER_H

#include "todolist.h"
#include <string>

class User {
public:
    User();
    void add_task(const std::string& description);
    void delete_task(int index);
    void update_task(int index, const std::string& new_description);
    void mark_task_completed(int index);
    void mark_task_uncompleted(int index);
    void display_tasks() const;

private:
    TodoList myList;
};

#endif // USER_H

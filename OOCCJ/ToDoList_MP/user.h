#ifndef USER_H
#define USER_H

#include <string>
#include "todolist.h"

class User {
public:
    User(const std::string& name);
    void add_task(const std::string& description);
    void delete_task(int index);
    void update_task(int index, const std::string& new_description);
    void mark_task_completed(int index);
    void mark_task_uncompleted(int index);
    void display_tasks() const;

private:
    std::string name;
    ToDoList myList;
};

#endif // USER_H

#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
public:
    Task(const std::string& description);
    void mark_completed();
    void mark_uncompleted();
    std::string toString() const;

private:
    std::string description;
    bool completed;
};

#endif // TASK_H

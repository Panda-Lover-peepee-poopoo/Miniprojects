#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
public:
    Task(const std::string& description, bool completed = false);
    void set_description(const std::string& description);
    std::string get_description() const;
    void set_completed(bool completed);
    bool is_completed() const;

private:
    std::string description;
    bool completed;
};

#endif // TASK_H

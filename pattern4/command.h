#ifndef COMMAND_H
#define COMMAND_H

#include <QObject>

class Command : public QObject
{
public:
    Command();
    ~Command();
    virtual void execute() = 0;
};

#endif // COMMAND_H

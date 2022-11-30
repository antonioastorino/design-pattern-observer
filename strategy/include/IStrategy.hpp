#ifndef ISTRATEGY_H
#define ISTRATEGY_H

class IStrategy
{
private:
protected:
public:
    virtual void execute() const = 0;
    IStrategy();
};

#endif /* ISTRATEGY_H */

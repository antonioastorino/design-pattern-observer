#ifndef CONCRETE_OBSERVER_H
#define CONCRETE_OBSERVER_H
#include "IObserver.hpp"

class ConcreteObserver : public IObserver
{
private:
public:
    using IObserver::IObserver;
    void notifyMe() const;
};

#endif /* CONCRETE_OBSERVER_H */

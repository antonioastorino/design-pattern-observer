#include "ConcreteObserver.hpp"
#include "Publisher.hpp"

void ConcreteObserver::notifyMe() const { this->publisher_p->getState(); }

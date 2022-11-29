#include "common.h"
#if TEST == 0
#include "ConcreteObserver.hpp"
#include "Publisher.hpp"

int main()
{
    Publisher publisher       = Publisher();
    ConcreteObserver observer_1 = ConcreteObserver(&publisher);
    ConcreteObserver observer_2 = ConcreteObserver(&publisher);
    publisher.addObserver(&observer_1);
    publisher.addObserver(&observer_2);
    publisher.notifyObservers();
    return 0;
}
#endif

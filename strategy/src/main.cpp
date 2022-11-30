#include "common.h"
#if TEST == 0
#include "ConcreteStrategyA.hpp"
#include "ConcreteStrategyB.hpp"
#include "IStrategy.hpp"
#include <iostream>

class Client
{
private:
    IStrategy* strategy;

public:
    Client() = delete;
    Client(IStrategy* _strategy) : strategy(_strategy){};
    void run() { this->strategy->execute(); }
};

int main()
{
    // A "strategy" implements a set of behaviors and inherits from a given interface.
    ConcreteStrategyA strategy_A{};
    ConcreteStrategyB strategy_B{};
    /* A "client" has a generic strategy. Multiple clients can be created with different concrete
     * strategies. This becomes useful especially when multiple clients use the same concrete
     * strategy.  */
    Client client_1 = Client(&strategy_A);
    Client client_2 = Client(&strategy_B);
    Client client_3 = Client(&strategy_B);
    client_1.run();
    client_2.run();
    client_3.run();
    return 0;
}
#endif

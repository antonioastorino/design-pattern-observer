#include "IStrategy.hpp"

class ConcreteStrategyA : public IStrategy
{
private:
public:
    using IStrategy::IStrategy;
    void execute() const override;
};

#include "IStrategy.hpp"

class ConcreteStrategyB : public IStrategy
{
private:
public:
    using IStrategy::IStrategy;
    void execute() const override;
};

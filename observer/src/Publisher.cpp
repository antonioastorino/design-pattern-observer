#include "IObserver.hpp"
#include "Publisher.hpp"
#include <iostream>

Publisher::Publisher() { std::cout << "Publisher initialized\n"; }

void Publisher::addObserver(IObserver* observer_p)
{
    this->observerList.push_back(observer_p);
}

void Publisher::removeObserver() { this->observerList.pop_back(); }

void Publisher::notifyObservers() const
{
    for (auto observer_p : observerList)
    {
        observer_p->notifyMe();
    }
}

void Publisher::getState() const { std::cout << "Number of subscribers: " << this->observerList.size() << std::endl; }

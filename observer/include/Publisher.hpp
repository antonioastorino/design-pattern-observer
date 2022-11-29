#ifndef PUBLISHER_H
#define PUBLISHER_H
#include <vector>
typedef class IObserver IObserver;

class Publisher 
{
protected:
    std::vector<IObserver*> observerList;

public:
    void addObserver(IObserver* observer_p);
    void removeObserver();
    void notifyObservers() const;
    void getState() const;
    Publisher();
};

#endif /* PUBLISHER_H */

#ifndef IOBSERVER_H
#define IOBSERVER_H
typedef class Publisher Publisher;

class IObserver
{
protected:
    Publisher * const publisher_p;

public:
    IObserver(Publisher* publisher_p);
    virtual void notifyMe() const = 0;
};

#endif /* IOBSERVER_H */

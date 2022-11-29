#include "IObserver.hpp"
#include "Publisher.hpp"

IObserver::IObserver(Publisher *publisher_p):publisher_p(publisher_p) {
}

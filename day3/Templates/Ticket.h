
#ifndef TICKET_H
#define TICKET_H

#include "TicketCategory.h"
#include "TicketStatus.h"
#include <string>

template <typename T>
class Ticket {

private:
TicketCategory ticketType;
std::string ticketStartLocation;
std::string ticketEndLocation;
int ticketPrice; 

public:
// Deleted default constructor
Ticket() = delete;

// Default copy constructor
Ticket(const Ticket& ticket) = default;
// Parameterized constructor to accept all 4 data members
Ticket(TicketCategory ticketType, const std::string& ticketStartLocation, const std::string& ticketEndLocation, int ticketPrice) :
ticketType(ticketType),
ticketStartLocation(ticketStartLocation),
ticketEndLocation(ticketEndLocation),
ticketPrice(ticketPrice)
{}

// Parameterized constructor to accept only ticketType ticketStartLocation and ticketEndLocation
Ticket(TicketCategory ticketType, const std::string& ticketStartLocation, const std::string& ticketEndLocation) :
ticketType(ticketType),
ticketStartLocation(ticketStartLocation),
ticketEndLocation(ticketEndLocation)
{}

// Destructor
~Ticket() = default;

// Overloaded left shift operator
Ticket operator<<(int value) {
this->ticketPrice += value;
return *this;
}

// Getters and setters
TicketCategory getTicketType() const {
return ticketType;
}

void setTicketType(TicketCategory ticketType) {
this->ticketType = ticketType;
}

const std::string& getTicketStartLocation() const {
return ticketStartLocation;
}

void setTicketStartLocation(const std::string& ticketStartLocation) {
this->ticketStartLocation = ticketStartLocation;
}

const std::string& getTicketEndLocation() const {
return ticketEndLocation;
}

void setTicketEndLocation(const std::string& ticketEndLocation) {
this->ticketEndLocation = ticketEndLocation;
}

int getTicketPrice() const {
return ticketPrice;
}

void setTicketPrice(int ticketPrice) {
this->ticketPrice = ticketPrice;
}

friend std::ostream& operator<<(std::ostream& os, const Ticket& ticket) {
os << "Ticket{" <<
"ticketType=" << ticket.ticketType <<
", ticketStartLocation='" << ticket.ticketStartLocation << '\'' <<
", ticketEndLocation='" << ticket.ticketEndLocation << '\'' <<
", ticketPrice=" << ticket.ticketPrice <<
'}';
return os;
}
};

#endif // TICKET_H

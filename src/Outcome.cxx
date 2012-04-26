#include "Outcome.h"

using namespace std;

Outcome::Outcome(string name, int odds)
	: name(name), odds(odds)
{
}

int Outcome::winAmount(int amount) const
{
	return amount*this->odds;
}

bool Outcome::equals(const Outcome& other) const
{
	return (this->name.compare(other.name) == 0);
}

string Outcome::toString() const
{
	return this->name + " | Odds : " + this->odds + "/1";
}

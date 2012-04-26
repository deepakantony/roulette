#ifndef __OUTCOME__H__
#define __OUTCOME__H__

#include <string>

class Outcome 
{
public:
private: // nobody else can create an object of this class
	Outcome(std::string name, int odds);
	
public:
	int winAmount(int amount) const;
	bool equals(const Outcome &other) const;
	std::string toString() const;

private:
	std::string name;
	int odds;
};


#endif // __OUTCOME__H__

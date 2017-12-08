#ifndef ROCK_HPP
#define ROCK_HPP
#include "Tool.hpp"

class Rock : public Tool{
	private:

	public:
		Rock();
		Rock(int);
		int fight(Tool*);
};
#endif

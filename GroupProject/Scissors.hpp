#ifndef SCISSORS_HPP
#define SCISSORS_HPP
#include "Tool.hpp"

class Scissors : public Tool{
	private:

	public:
		Scissors();
		Scissors(int);
		int fight(Tool*);
};
#endif

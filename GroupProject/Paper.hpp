#ifndef PAPER_HPP
#define PAPER_HPP
#include "Tool.hpp"

class Paper : public Tool{
	private:

	public:
		Paper();
		Paper(int);
		int fight(Tool*);
};
#endif

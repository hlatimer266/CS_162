#ifndef TOOL_HPP
#define TOOL_HPP

class Tool{
	private:
		int strength;
		char type;
	public:
		Tool();
		Tool(int);
		virtual int fight(Tool*)=0; 
		int getStrength();
		void setStrength(int);
		char getType();
		void setType(char);
		virtual ~Tool();	
};	
#endif

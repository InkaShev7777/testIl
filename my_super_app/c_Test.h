#pragma once
class c_Test
{
	int x;
	int y;
public:
	inline c_Test() {
		this->x = 15;
		this->y = 77;
	}

	void print() const;
	inline int getX() {
		return this->x;
	}
};


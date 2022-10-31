#include "pch.h"

class ss{
public:


	void Swap(int* x, int* y) {
		int temp;
		temp = *x;
		*x = *y;
		*y = temp;

	}

	int valueofA() {
		int a = 15, b = 3;
		Swap(&a, &b);
		return a;
	}

	int valueofB() {
		int a = 15, b = 3;
		Swap(&a, &b);
		return b;
	}
	
};
		


TEST(TestSwap, ASwap) {
	ss s;
	EXPECT_TRUE(s.valueofA()==15);

}

TEST(TestSwap, BSwap) {
	ss s;
  EXPECT_EQ(s.valueofB(), 15);
}
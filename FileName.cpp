

#include<stdio.h>
#include<math.h>
class vector;

class vector {
private: int x, y;
public:
	vector(int a, int b) {
		this->x = a;
		this->y = b;
	}
	vector add(vector v2) {
		return vector{ this->x+v2.x,this->y+v2.y };
	}
	void print() {
		printf("x:%d y:%d\n", this->x, this->y);
		return;
	}
	float dir() {
		float mo = sqrt(this->x * this->x + this->y * this->y);
		printf("%f\n", mo); return mo;
	}


};






int main() {


	vector v1{ 1,2 };
	vector v2{ 3,4 };
	v1.print();
	v2.print();
	(v1.add(v2)).dir();




	return 0;
}
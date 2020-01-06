#include <bits/stdc++.h>

#define TAB '\t'

using namespace std;

class A
{
	int a, b;
	static int i;
	public:
		A();
		A(int);
		A(int, int);
		A operator+(A &);
		void out();
		~A();
};

int A::i = 0;

A::A()
{
	i++;
	a=0;
	b=0;	
}

A::A(int x)
{
	i++;
	a=x;
	b=0;
}

A::A(int x, int y)
{
	i++;
	a=x;
	b=y;
}

A::~A()
{
	cout<<i<<endl;	
}

A A::operator+(A & b)
{
	A object_t;
	object_t.a = this->a + b.a;
	object_t.b = this->b + b.b;
	return object_t;	
}

void A::out()
{
	cout<<a<<TAB<<b<<endl;
}

int main()
{
	{
		A a(23, 123), b(1380, 1203), c;
		c = a + b;
		c.out();
	}
}
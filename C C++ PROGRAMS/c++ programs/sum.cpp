#include<iostream.h>

class Number{
	private:
		int value;
	public:
		Number() // default constructor....................
		{
			value = 0;
			cout<<"Object.....\n";
		}

		Number(int v) // argument constructor....................
		{
			value = v;
			cout<<"Arg Object.....\n";
		}

		Number(Number &r)// copy constructor....................
		{
			cout<<"Copy Object.....\n";
		}
		~Number() // destructor....................
		{  cout<<"Die .....\n"; }

		void input (){
			cout<<"enter value: ";
			cin>> value;
		}

		Number sum(Number t){
		       //	Number res;
		       //	res.value = value + t.value;
			//return res;
			return Number(value + t.value);// calls 1 argument cons.
		}

		void show(){
			cout<<value;
		}
};

void main(){
      {
	Number n1,n2,n3;            	// there are three objects in this problem
	n1.input();
	n2.input();
	n3.input();

	Number result =   n1.sum(n2).sum(n3);
	//Number r =   n1.sum(n2);
	//Number result =	     r.sum(n3);
	result.show();
      }
}

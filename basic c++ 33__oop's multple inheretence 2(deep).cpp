#include<iostream>
using namespace std;


/*syntax for multiple inheretence
class derived:visibility-mode base1, visibility-mode base2
{
  class structure___---__
}
*/
class vaccine1{
	protected:
		int serum;
	public:
		void set_serum(int a){
			serum=a;
		}
};
class vaccine2{
	protected:
		int cipla;
	public:
		void set_cipla(int a){
			cipla=a;
		}
};

class covaccine: public vaccine1, public vaccine2{
	 public:
	 	void display(){
	 		cout<<"the value of  vaccine1 is  "<<serum<<endl;
	 		cout<<"the value of vaccine2 is "<<cipla<<endl;
	 		cout<<"sum of vaccine 1 and 2 is "<<serum+cipla<<endl;
	 		
		 }
		
};



int main(){
	
	covaccine phase;
	phase.set_serum(200);
	phase.set_cipla(600);
	phase.display();
	
	return 0;
}

#include<iostream>
#include<string>
#include<string.h>



using namespace std;
class band
{
	protected:
		int count;
		
		//virtual void getcount()=0;
};

class metal:public band
{
	private:
		int pyrotec;
		
	public:
		void set_pyrotec(int a);
		int get_pyrotec();
		int get_members();
		metal(int band_count,int no_pyrotech);
		
};


class symphony:public band
{
	private:
		int conductor;
		int members;
	public:
		void set_conductor(int a);
		int get_conductor();
		int get_members();
		int band_member();
		symphony(int band_count,int no_condutor);
		
		
};
int symphony::get_members()
{
	return(conductor+count);
}
int metal::get_members()
{
	return (count+pyrotec);
}
int metal::get_pyrotec()
{
 	return pyrotec;	
}
void metal::set_pyrotec(int a)
{
	pyrotec=a;
}
metal::metal(int band_count,int no_pyrotech)
{
	count=band_count;
	pyrotec=no_pyrotech;
}

int symphony::get_conductor()
{
	return conductor;
}
void symphony::set_conductor(int a)
{
	conductor=a;
}
symphony::symphony(int band_count,int no_condutor)
{
	count=band_count;
	conductor=no_condutor;
}



int main (void)
{
	cout<<"The band Member of symphony 10 and conductor are 1=";
	symphony qw(10 ,1);
	int a=qw.get_members();
	cout<<a<<"\n";
	qw.set_conductor(7);
	cout<<"\nthe Conductor is set 7";
	a=qw.get_members();
	cout<< "\nthe new total member are  ="<<a;
	
	cout<<"\nThe band Member of metal 20 and conductor are 87=";
	metal q(10 ,87);
	a=q.get_members();
	cout<<a<<"\n";
	q.set_pyrotec(7);
	cout<<"\nthe Conductor is set 7";
	a=q.get_members();
	cout<< "the new total member are  ="<<a;
	
	return 0;
	
}

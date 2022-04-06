#include<iostream>
using namespace std;

class Grades
{
	public:
	float attendance,test_score,total_score,a = 0.70;
	int ctr1,ctr2,ctr3;
	void input()
	{
		cout<<"Enter Attendances -\n";
		cin>> attendance;
		cout<<"Enter test Score- \n";
		cin>> test_score;
		cout<<"Enter total Score- \n";
		cin>> total_score;
	}
	void output()
	{
		if(attendance >=50)
		{
			ctr1 =1;
		}
		if(test_score >a || test_score == a)
		{ cout<<"Test Score is:\n";
			ctr2 = 1;
		}
		if(total_score >=5600)
		{
			ctr3 = 1;
		}

		if(ctr1 == 1 && ctr2 == 1 && ctr3 == 1)
		{
			cout<<"Grade is 10\n";
		}
		else if(ctr1 == 1 && ctr2 == 1)
		{
			cout<<"Grade is 9\n";
		}
		else if(ctr2 == 1 && ctr3 == 1)
		{
			cout<<"Grade is 8 \n";
		}
		else if(ctr1 == 1 && ctr3 == 1 )
		{
			cout<<"Grade is 7\n";
		}
		else if(ctr1 == 1 || ctr2 == 1 || ctr3 == 1)
		{
			cout<<"Grade is 6 \n";
		}
		else
		{
			cout<<"Grade is \n";
		}
					
	}

};

int main()
{
	Grades obj1;
	obj1.input();
	obj1.output();
	return 0;
}

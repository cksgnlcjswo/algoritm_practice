#include <iostream>

typedef struct people {
	int weight;
	int height;
	int grade;
} People;

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	People *people;
	people=new People[n];

	for(int i=0;i<n;i++)
	{
		cin>>people[i].weight;
		cin>>people[i].height;
		people[i].grade=1;
	}

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(people[i].weight<people[j].weight&&people[i].height<people[j].height)
				people[i].grade++;
			if(people[i].weight>people[j].weight&&people[i].height>people[j].height)
				people[j].grade++;
		}
	}
	for(int i=0;i<n;i++)
		cout<<people[i].grade<<' ';
}

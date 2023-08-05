#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int guess,wordtoguess,tries;
	srand(time(0));
	//To Create random Number To Guess
	wordtoguess=rand()%100+1;
	cout<<"I Have Aa Number Between 1 to 1000 Can You Guess It:"<<endl;
	//Logic Using DO & if else if
	do{
		cout<<"Enter Your Guess:";
		cin>>guess;
		if(guess==wordtoguess)
		{
		cout<<"Your Guess Is True"<<endl;
		}
		else if(guess>wordtoguess)
		{
		cout<<"You Entered A Larger Number"<<endl;
		}
		else
		{
		cout<<"You Entered A Smaller Number"<<endl;
		}
		tries++;
	}while(guess!=wordtoguess);
	cout<<" Your Guess is True After "<<tries<<" Tries";
	cout<<"Created By Hammad Mir";
	return 0;
}

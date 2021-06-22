#include <iostream>
#include <Mutex>
#include <thread>
#include <stdio.h>
#include <time.h>

using namespace std;
static int accountBalance = 10000;
const int familyMembers = 5; 
static mutex mLock;

void bankingFn(int number) 
{
	int nDeposit = 0;
	string sDeposit = {};
	cout << "Your credit card has a balance of " << accountBalance << endl;
		cout << "Would you like to make a deposit? type yes or no." << endl;
		cin >> sDeposit;
		if (sDeposit == "yes" || sDeposit == "YES")
		{
			cout << "How much? Type: " << endl;
			cin >> nDeposit;
			for (int i = 0; i < 1; i++)
			{
				mLock.lock();
				cout << "You have make a doposit of " << nDeposit << " dollars!" << endl;
				accountBalance = accountBalance + nDeposit;

				cout << " Depositing Done => Account Balance: " << accountBalance << endl;

				mLock.unlock();
			}
		}

}
void withdrawingFn(int id)
{

	srand(time(NULL));
	mLock.lock();
	int nLimit = accountBalance + 1;
	int nWithdrawing = rand() % nLimit;
	if (accountBalance > 1000) {
		
		cout << "Family member[" << id << "] Withdraw => " << nWithdrawing << " Dollars!" << endl;
		accountBalance = accountBalance - nWithdrawing;

	}
	else if (accountBalance > 0 && accountBalance < 1000) 
	{
		cout << "Be careful, your balance is low, money left is " << accountBalance << endl;
		cout << "Family member[" << id << "] Withdraw => " << nWithdrawing << " Dollars!" << endl;
		accountBalance = accountBalance - nWithdrawing;

	}
	else if ( accountBalance == 0)
	{
		cout << "You have no money left, please make a deposit" << endl;
	}
	mLock.unlock();
}
void GameWithdraw()
{
	thread threadConsummers[5];
	int random = rand() % 5;
	threadConsummers[random] = thread(withdrawingFn, random);
	threadConsummers[random].join();
}
void Game()
{
	thread threadProducers[1];
	
	
	threadProducers[0] = thread(bankingFn, 0);
	
	
	threadProducers[0].join();
	GameWithdraw();
	system("pause");
	system("cls");
}
int main()
{
	srand(time(NULL));
	cout << "Welcome to the credit card game! be careful, don't reach 0" << endl;
	int nPayment = 0;
	//cin >> nPayment;
	while (accountBalance >= 0)
	{
		Game();

	}
}
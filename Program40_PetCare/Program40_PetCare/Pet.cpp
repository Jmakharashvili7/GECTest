#include "Pet.h"
#include <iostream>
using namespace std;

Pet::Pet(int hunger, int boredom)
{
	// inform the user a new pet was initialized
	cout << "A new pet has arrived!" << endl;

	// initalize variables
	m_hunger = hunger;
	m_boredom = boredom;
}

void Pet::Feed()
{	
	m_hunger -= food;

	// Prevent hunger from going negative
	if (m_hunger < 0)
		m_hunger = 0;

	// Inform the user pet has eaten
	cout << "The pet has been fed! (hunger decereased)\n" << "Current hunger: " << m_hunger << endl;

	PassingTime();
}

void Pet::Play()
{
	m_boredom -= fun;

	// Make sure boredom does not fall below 0
	if (m_boredom < 0)
		m_boredom = 0;

	// Inform the user the pet is entertained
	cout << "The pet has been entertained! (boredom decresed)\n" << "Current boredom: " << m_boredom << endl;

	PassingTime();
}

void Pet::Talk()
{
	cout << "I am your pet and I feel ";

	int mood = GetMood();

	if (mood > 15)
		cout << "mad" << endl;
	else if (mood > 10)
		cout << "frustrated" << endl;
	else if (mood > 5)
		cout << "okay" << endl;
	else
		cout << "happy" << endl;	

	PassingTime();
}

void Pet::PassingTime()
{
	m_hunger += time;
	m_boredom += time;
}

void Cat::Talk()
{
	cout << "I am your cat and I feel ";

	int mood = GetMood();

	if (mood > 15)
		cout << "mad" << endl;
	else if (mood > 10)
		cout << "frustrated" << endl;
	else if (mood > 5)
		cout << "okay" << endl;
	else
		cout << "happy" << endl;

	PassingTime();
}

void Dog::Talk()
{
	cout << "I am your dog and I feel ";

	int mood = GetMood();

	if (mood > 15)
		cout << "mad\n" << endl;
	else if (mood > 10)
		cout << "frustrated\n" << endl;
	else if (mood > 5)
		cout << "okay\n" << endl;
	else
		cout << "happy\n" << endl;

	PassingTime();
}

void Hamster::Talk()
{
	cout << "I am your cat and I feel ";

	int mood = GetMood();

	if (mood > 15)
		cout << "mad\n" << endl;
	else if (mood > 10)
		cout << "frustrated\n" << endl;
	else if (mood > 5)
		cout << "okay\n" << endl;
	else
		cout << "happy\n" << endl;

	PassingTime();
}


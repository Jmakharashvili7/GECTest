#pragma once

class Pet
{
public:
	// Constructor and Destructor
	Pet(int hunger, int boredom);
	~Pet();

	// variables
	int food = 4, fun = 4, time = 1;

	// Functions
	virtual void Talk();
	void Feed();
	void Play();
private:
	int m_hunger;
	int m_boredom;
protected:
	inline const int GetMood() { return m_hunger + m_boredom; }
	void PassingTime();
};

class Cat : public Pet
{
public:
	using Pet::Pet;
	void Talk();
};

class Dog : public Pet
{
public:
	using Pet::Pet;
	void Talk();
};

class Hamster : public Pet
{	
public:
	using Pet::Pet;
	void Talk();
};


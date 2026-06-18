#include <iostream>
#include "rocket.h"
#include <string>
#include <string_view>

bool PIN_verification(int PIN, int attempts)
{
	constexpr int max_attempts{ 0 };
	int password{};
	do
	{
		std::cout << "Enter the PIN: ";
		std::cin >> password;
		
		if (PIN != password)
		{

			std::cout << "PIN Incorrect! Attempts left: " << --attempts << '\n';
		}
		

		if (attempts <= max_attempts)
		{
			std::cout << "START TERMINATED. System Blocked!";
			return 0;
		}

	} while (password != PIN);
	std::cout << "Password is Correct!\n";
	return true;

}

void countdown()
{
	std::cout << "\nStarting the countdown!\n";
	
	for (int i{10};i >= 1;--i)
	{
		std::cout << i << "...\n";
	}

	std::cout << "Blast Off! Brace for impact!\n\n";
}

double telemetry_1(double speed, double weight)
{
	double energy{ 0.5 * weight * (speed * speed) };
	return energy;
}

void telemetry_2(std::string_view phase, double acceleration)
{
	double gravity{ 9.81 };
	double gforce{acceleration/gravity};
	std::cout << "Current phase of the flight: " << phase << '\n';
	std::cout << "Reached force: " << gforce << " G\n";
	double max_gforce{ 4 };
		if (gforce >= max_gforce)
		{
			std::cout << "\nWARNING: G force is too high for the crew, evacuate the spacecraft IMMEDIATELY!\n\n";
		}
}
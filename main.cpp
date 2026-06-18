#include <iostream>
#include "rocket.h"
#include <string>
#include <string_view>

int main()
{
	if (PIN_verification(PIN, attempts))
	{
		countdown();
		constexpr double speed{ 1500 };
		constexpr double weight{ 5000 };

		double energy{ telemetry_1(speed, weight) };
		std::cout << "=== FLIGHT TELEMETRY ===\n";
		std::cout << "Kinetic energy of the spacecraft: " << energy << " J\n";
		
		constexpr double acceleration{ 45 };
		constexpr std::string_view phase{ "Booster" };
		telemetry_2(phase, acceleration);
	}
	else return 0;
	
	return 0;
}
#include<iostream>
#include <string>
#include <string_view>

#pragma once
constexpr int PIN{ 1234 };
constexpr int attempts{ 3 };
bool PIN_verification(int PIN, int attempts);
void countdown();
double telemetry_1(double speed, double weight);
void telemetry_2(std::string_view phase, double acceleration);


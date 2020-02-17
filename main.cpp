#include <iostream>
#include "Temperature.h"


int main() {

    Temperature temperature(260);
    std::cout << "Fahrenheit! "<< temperature.getFahrenheit() << std::endl;
    std::cout << "Kelvin! "<< temperature.getKelvin() << std::endl;
    std::cout << "Celsius! "<< temperature.getCelsius() << std::endl;

    temperature.setTempCelsius(-222);
    std::cout << "Celsius! "<< temperature.getCelsius() << std::endl;

    temperature.setTempFahrenheit(32);
    std::cout << "Fahrenheit! "<< temperature.getFahrenheit() << std::endl;
    std::cout << "Kelvin! "<< temperature.getKelvin() << std::endl;

    return 0;
}

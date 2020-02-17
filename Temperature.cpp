//
// Created by Javier Fuentes Mora on 17/02/20.
//

#include "Temperature.h"

Temperature::Temperature(double kelvin) : kelvin(kelvin) {}

void Temperature::setTempKelvin(double temp) {
    Temperature::kelvin = temp;
}

void Temperature::setTempCelsius(double temp) {
    const double tempKelvin = temp + 273.15;
    Temperature::kelvin = tempKelvin;
}

void Temperature::setTempFahrenheit(double temp) {
    const double tempKelvin = (temp - 32) * 5 / 9 + 273.15;
    Temperature::kelvin = tempKelvin;
}

double Temperature::getKelvin() const {
    return kelvin;
}

double Temperature::getFahrenheit() const {
    const double tempFahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
    return tempFahrenheit;
}

double Temperature::getCelsius() const {
    const double tempCelsius = (kelvin - 273.15);
    return tempCelsius;
}

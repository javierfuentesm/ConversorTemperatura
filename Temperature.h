//
// Created by Javier Fuentes Mora on 17/02/20.
//

#ifndef TEMPERATURA_TEMPERATURE_H
#define TEMPERATURA_TEMPERATURE_H


class Temperature {
public:

private:
    double kelvin;

public:
    Temperature(double kelvin);
    void setTempKelvin(double temp);
    void setTempCelsius(double temp);
    void setTempFahrenheit(double temp);
    double getKelvin() const;
    double getFahrenheit() const;

    double getCelsius() const;
};


#endif //TEMPERATURA_TEMPERATURE_H

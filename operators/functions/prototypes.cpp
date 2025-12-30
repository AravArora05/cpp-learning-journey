#include <iostream>
#include <cmath>
using namespace std;

double farenheit_to_celsius(double value);
double farenheit_to_kelvin(double value);

void temperature_conversion(double fahrenheit_temperature) {
    
    
    double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);
    
    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

double farenheit_to_celsius(double value) {
    return round(((temperature - 32)*5)/9);
}

double farenheit_to_kelvin(double value) {
    return round(((temperature - 32)*5)/9 + 273);
}

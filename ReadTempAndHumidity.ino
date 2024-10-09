#include <LiquidCrystal.h>
#include <DHT11.h>

// Create an instance of the DHT11 class.
// - For Arduino: Connect the sensor to Digital I/O Pin 2.
// - For ESP32: Connect the sensor to pin GPIO2 or P2.
// - For ESP8266: Connect the sensor to GPIO2 or D4.
DHT11 dht11(15);
LiquidCrystal lcd (13,12,11,10,9,8);

void setup() {
    // Initialize serial communication to allow debugging and data readout.
    // Using a baud rate of 9600 bps.
    Serial.begin(9600);
    lcd.begin(16,2);
    // Uncomment the line below to set a custom delay between sensor readings (in milliseconds).
    // dht11.setDelay(500); // Set this to the desired delay. Default is 500ms.
}

void loop() {
    int temperature = 0;
    int humidity = 0;

    // Attempt to read the temperature and humidity values from the DHT11 sensor.
    int result = dht11.readTemperatureHumidity(temperature, humidity);

    // Check the results of the readings.
    // If the reading is successful, print the temperature and humidity values.
    // If there are errors, print the appropriate error messages.
    if (result == 0) {
        lcd.print("Temperature: ");
        lcd.print(temperature);
        lcd.println(" C");
        lcd.print("Humidity: ");
        lcd.print(humidity);
        lcd.println(" %");
    } else {
        // Print error message based on the error code.
        lcd.println(DHT11::getErrorString(result));
    }
}

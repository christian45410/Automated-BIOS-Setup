uint8_t buf[8] = { 
  0 };   /* Keyboard report buffer */

void setup() 
{
Serial.begin(9600);
delay(500);
/*
Automated Lenovo ThinkCentre M920z BIOS setup

Settings changed:
Administrator password: null
Boot1: M.2-SSD, Network
Boot2: M.2-SSD
Boot3: M.2-SSD

All other changes are left at default:
Bluetooth: Enabled
Side button control: Enabled
Web camera: Enabled
F12 Administrator Password: Disabled
IPv6 Boot: Enabled

Configured by CL - 07/01/2020
*/

// Navigating to setup BIOS admin password
buf[2] = 79;   // Right
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 79;   // Right
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 79;   // Right
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 79;   // Right
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

// Setup BIOS admin password
buf[2] = 40;   // Enter
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = KEY_GOES_HERE;   // Key
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(50);

buf[2] = KEY_GOES_HERE;   // Key
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(50);

buf[2] = KEY_GOES_HERE;   // Key
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(50);

buf[2] = KEY_GOES_HERE;   // Key
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(50);

buf[2] = KEY_GOES_HERE;   // Key
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(50);

buf[2] = 40;   // Enter
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

// Verify BIOS Administrator password
buf[2] = KEY_GOES_HERE;   // Key
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(50);

buf[2] = KEY_GOES_HERE;   // Key
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(50);

buf[2] = KEY_GOES_HERE;   // Key
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(50);

buf[2] = KEY_GOES_HERE;   // Key
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(50);

buf[2] = KEY_GOES_HERE;   // Key
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(50);

buf[2] = 40;   // Enter
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 40;   // Enter
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

// Navigating to boot order setup
buf[2] = 79;   // Right
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 40;   // Enter
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

// Primary boot setup
buf[2] = 81;   // Down
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 81;   // Down
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 27;   // X
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 27;   // X
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 81;   // Down
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 81;   // Down
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 81;   // Down
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 27;   // X
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 27;   // X
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 27;   // X
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 41;   // Esc
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

// Secondary boot setup
buf[2] = 81;   // Down
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 40;   // Enter
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 27;   // X
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 81;   // Down
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 81;   // Down
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 27;   // X
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 27;   // X
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 27;   // X
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 41;   // Esc
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

//Tertiary boot setup
buf[2] = 81;   // Down
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 40;   // Enter
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 27;   // X
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 81;   // Down
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 81;   // Down
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 27;   // X
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 27;   // X
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 27;   // X
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 41;   // Esc
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

//  Save BIOS settings
buf[2] = 79;   // Right
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);

buf[2] = 40;   // Enter
Serial.write(buf, 8); // Send keypress
releaseKey();
delay(100);
}

void loop() 
{

}

void releaseKey()
{
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf, 8); // Release key  
}

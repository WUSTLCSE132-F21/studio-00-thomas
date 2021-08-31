// heartbeat.ino
unsigned long n; // n is an unsigned long for millis() is of type unsigned long
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  /* This section of code has a slight delay in the beginning where it
  will say '0 seconds have passed' for the first 1-2 bits of output, after
  which will readjust back to normal

  n = millis(); // n = # of ms since the program started
  delay(1000); // delay by 1000 ms or 1s
  Serial.print(n / 1000); // 'n' seconds have passed
  Serial.println(" seconds have passed");

  This next section attempts to shorten the number of lines of code from 4 to 3
  but has a similar issue

  delay(1000);
  Serial.print(millis() / 1000);
  Serial.println(" seconds have passed");
  */

  /* This section of code uses an alternative solution where
  n is incremented by 1 after a delay of 1000 ms. It is noticed that
  there exists no repeat outputs in the beginning unlike the other approach.
  
  delay(1000); // 1 seconds later...
  n++; // increment n so it goes from 0 to 1 second passing and so on and so forth
  Serial.print(n); // print out 'n seconds have passed'
  Serial.println(" seconds have passed");
  */

  delay(1000); // delay by 1 s
  digitalWrite(13, HIGH); // after 1 second delay, turn LED on
  Serial.print(++n); // ++n makes sure n is outputted after being incremented
  Serial.println(" seconds have passed"); // n seconds have passed
  delay(1000);
  digitalWrite(13, LOW); // turn off LED
}



void configureSensors(){
  
}


//this is the core of the line following algorithm
  //startPower is the value of the motor power which should be used as a basepoint for setting all other values
  //pScale is the proportional value by which the value of the difference between the right and left sensor is scaled.
void followLine(int startPower, int pScale){
  int lightDiff = analogRead(lightFR) - analogRead(lightFL);
  lightDiff = lightDiff * pScale;
  runMotors(startPower - lightDiff, startPower + lightDiff);
}

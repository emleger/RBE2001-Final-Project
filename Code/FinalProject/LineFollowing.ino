

void configureSensors(){
  
}


//this is the core of the line following algorithm
  //startPower is the value of the motor power which should be used as a basepoint for setting all other values
  //pScale is the proportional value by which the value of the difference between the right and left sensor is scaled.
void followLine(int startPower, float pScale){
  float lightDiff = analogRead(lightFL) - analogRead(lightFR);
  Serial.println(lightDiff);
  lightDiff = lightDiff * pScale;
  runMotors(startPower - lightDiff, startPower + lightDiff);
}

boolean checkForInterSection(int threshold){
  int rr = analogRead(lightRR);//Read the value of the right read sensor
  int rl = analogRead(lightRL); //Read the value of the left rear sensor  
  if (rr < threshold && rl < threshold){// check to see that the values of each sensor are below the threshold
   return true; 
  }
  else{
    return false;
  }
}

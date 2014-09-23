

//This section contains all of the configurations for everything on the robot
  //This include the motor ports, sensor ports, and any other values which are set once at the beginning and not touched again
const int rightDrivePort = 5;
const int leftDrivePort = 6;
const int lightFR = 1;
const int lightFL = 2;
const int lightRR = 3;
const int lightRL = 4;


void setup() {
  setupMotors();

}

void loop() {
  followLine(100, 10);
  
}

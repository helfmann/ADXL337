
//Use 3 (3g) for ADXL337
//int scale = 3;
//Use 200 (200g) for ADXL377
int scale = 200;
int offset;
float velA;
float resting = 3000;
float reading;

void setup()
{
  Serial.begin(9600);

}

void loop()
{
 unsigned int analog[5001];
 velA = 0;
 if (analogRead(A5) < 50){
  Serial.println("Reading Z:");
 #define a A1
 offset = 355;
  for(int count = 0; count < 5000; count = count + 1){
analog[count] = analogRead(A1);
resting = min(analog[count], resting);
analog[count] = analog[count] - offset;

velA = velA + analog[count] * 0.00001;

 // delay(1);
 }
 }
 else {
  Serial.println("Reading X:");
 #define a A0
 offset = 276;
  for(int count = 0; count < 5000; count = count + 1){
analog[count] = analogRead(A1);
resting = min(analog[count], resting);
analog[count] = analog[count] - offset;

velA = velA + analog[count] * 0.00001;

 // delay(1);
 }
 }
 

//reading = velA - 14.8584;
 //Serial.print("X: ");
  Serial.println(velA, 4);
//  Serial.println(resting,4);
}



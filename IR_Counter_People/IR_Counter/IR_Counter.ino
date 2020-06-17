int Sensor1=7;
int Sensor2=8;
boolean S1active = true;
boolean S2active = true;
int i=1;
int count=-1;
void setup() {
Serial.begin(9600);
pinMode(Sensor1, INPUT);
pinMode(Sensor2, INPUT);
}

void loop() {
  
  if (!digitalRead(Sensor1) && i==1 && S1active){   
     delay(100);
     i++;
     S1active = false;
  }

   if (!digitalRead(Sensor2) && i==2 &&   S2active){
     Serial.println("Person entering detected");
    // outsideIr=true;
     delay(100);
     i = 1 ;
     count++;
     Serial.print("People into the room: ");
     Serial.println(count);
     S2active = false;
  }

   if (!digitalRead(Sensor2) && i==1 && S2active ){
    // outsideIr=true;
     delay(100);
     i = 2 ;
     S2active = false;
  }

  if (!digitalRead(Sensor1) && i==2 && S1active ){
     Serial.println("Person exiting detected");
    // outsideIr=true;
     delay(100);
     count--;
       Serial.print("People into the room: ");
       Serial.println(count);
     i = 1;
     S1active = false;
  }  

    if (digitalRead(Sensor1)){
     S1active = true;
    }

     if (digitalRead(Sensor2)){
     S2active = true;
    }
  
}

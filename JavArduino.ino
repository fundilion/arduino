#include <AFMotor.h>
//Some comment asd
AF_Stepper motor(200,1);

char captura;
void setup (){

  motor.setSpeed(150);
  Serial.begin(9600);

}
void loop (){
 
 captura = Serial.read();
    
  switch(captura){
    case '3':
      motor.step (3,BACKWARD,MICROSTEP);
      break;
    case '4':
     motor.step (3,FORWARD,MICROSTEP);
      break;
    case '7':
       motor.step(200,BACKWARD,MICROSTEP);
      break;
    case '8':
     motor.step(200,FORWARD,MICROSTEP);
      break;
  }
}
 
  

  

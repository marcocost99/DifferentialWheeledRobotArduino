void loop() {

  if (distanceL<7) {

    digitalWrite (motor1pin1, LOW);
    digitalWrite (motor1pin2, HIGH);
    digitalWrite(motor2pin1, LOW);
    digitalWrite (motor2pin2, HIGH);

    delay(2000);

    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, HIGH);
    digitalWrite(motor2pin1, LOW);
    digitalWrite(motor2pin2, LOW);

    delay(300);

  }else if(distanceR<7) {

    digitalWrite (motor1pin1, LOW);
    digitalWrite (motor1pin2, HIGH);
    digitalWrite(motor2pin1, LOW);
    digitalWrite(motor2pin2, HIGH);

    delay(2000);

    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, LOW);
    digitalWrite(motor2pin1, LOW);
    digitalWrite(motor2pin2, HIGH);
    
    delay(300);

  }else{

    digitalWrite(motor1pin1, HIGH);
    digitalWrite(motor1pin2, LOW);
    digitalWzite (motor2pin1, HIGH);
    digitalWrite(motor2pin2, LOW);

  }

}

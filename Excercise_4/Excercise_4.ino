]kvoid setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT); //a
  pinMode(2, OUTPUT); // b
  pinMode(10, OUTPUT); // c
  pinMode(12, OUTPUT); // d
  pinMode(13, OUTPUT); // e
  pinMode(7, OUTPUT); //f
  pinMode(8, OUTPUT); // g
}

void loop() {
  // put your main code here, to run repeatedly:
  //9
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  delay(1500);

  //8
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  delay(1500);
  
  //7
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);

  delay(1500);

  //6
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  delay(1500);

  //5
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  delay(1500);

  //4
  digitalWrite(4, HIGH); //A
  digitalWrite(2, LOW); //B
  digitalWrite(10, LOW); //C
  digitalWrite(12, HIGH); //D
  digitalWrite(13, HIGH); //E
  digitalWrite(7, LOW); //F
  digitalWrite(8, LOW); //G

  delay(1500);

  //3
  digitalWrite(4, LOW); //A
  digitalWrite(2, LOW); //B
  digitalWrite(10, LOW); //C
  digitalWrite(12, LOW); //D
  digitalWrite(13, HIGH); //E
  digitalWrite(7, HIGH); //F
  digitalWrite(8, LOW); //G

  delay(1500);

  //2
  digitalWrite(4, LOW); //A
  digitalWrite(2, LOW); //B
  digitalWrite(10, HIGH); //C
  digitalWrite(12, LOW); //D
  digitalWrite(13, LOW); //E
  digitalWrite(7, HIGH); //F
  digitalWrite(8, LOW); //G

  delay(1500);

  //1
  digitalWrite(4, HIGH); //A
  digitalWrite(2, LOW); //B
  digitalWrite(10, LOW); //C
  digitalWrite(12, HIGH); //D
  digitalWrite(13, HIGH); //E
  digitalWrite(7, HIGH); //F
  digitalWrite(8, HIGH); //G

  delay(1500);

  //0
  digitalWrite(4, LOW); //A
  digitalWrite(2, LOW); //B
  digitalWrite(10, LOW); //C
  digitalWrite(12, LOW); //D
  digitalWrite(13, LOW); //E
  digitalWrite(7, LOW); //F
  digitalWrite(8, HIGH); //G
  delay(1500);
}

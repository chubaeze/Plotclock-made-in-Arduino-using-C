#include <Servo.h>

Servo myservoA; //left
Servo myservoB; //Right
Servo myservoC; //Bottom

int posA = 0;
int posB = 0;
int potpin = 0;
int val = 0;
int clean = 1;
char action = ' ';
char data;
void setup() {
  Serial.begin(9600);
  myservoA.attach(9);  // attaches the servo on pin 9 to the servo object
  myservoB.attach(5);  // attaches the servo on pin 3 to the servo object
  myservoC.attach(3);  // attaches the servo on pin 3 to the servo object

  myservoA.write(70);
  myservoB.write(33);
  myservoC.write(170);
  delay(1000);
}

void loop() {

  if (Serial.available() > 0) {
    switch (Serial.read())
    {
      case 's':
        {
          if (action == 'o')  //clean ONE
            one_clean();
          if (action == 's')  //clean SQUARE
            square_clean();
          if (action == 't')  //clean TRIANGLE
            triangle_clean();
          if (action == 'c')  //clean CIRCLE
            circle_clean();
          if (action == 'e')  //clean eleven
            eleven_clean();
          else;
          //write SQUARE
          delay(1000);
          square();
          action = 's'; break;
        } break;

      case 'o':
        {
          if (action == 'o')  //clean ONE
            one_clean();
          if (action == 's')  //clean SQUARE
            square_clean();
          if (action == 't')  //clean TRIANGLE
            triangle_clean();
          if (action == 'c')  //clean CIRCLE
            circle_clean();
          if (action == 'e')  //clean eleven
            eleven_clean();
          else;
          //write ONE
          delay(1000);
          one();
          action = 'o'; break;
        } break;
      case 't':
        {
          if (action == 'o')  //clean ONE
            one_clean();
          if (action == 's')  //clean SQUARE
            square_clean();
          if (action == 't')  //clean TRIANGLE
            triangle_clean();
          if (action == 'c')  //clean CIRCLE
            circle_clean();
          if (action == 'e')  //clean eleven
            eleven_clean();
          else;
          //write triangle
          delay(1000);
          triangle();
          action = 't'; break;
        } break;

      case 'c':
        {
          if (action == 'o')  //clean ONE
            one_clean();
          if (action == 's')  //clean SQUARE
            square_clean();
          if (action == 't')  //clean TRIANGLE
            triangle_clean();
          if (action == 'c')  //clean CIRCLE
            circle_clean();
          if (action == 'e')  //clean eleven
            eleven_clean();
          else;
          //write circle
          delay(1000);
          circle();
          action = 'c'; break;
        } break;
      case 'e':
        {
          if (action == 'o')  //clean ONE
            one_clean();
          if (action == 's')  //clean SQUARE
            square_clean();
          if (action == 't')  //clean TRIANGLE
            triangle_clean();
          if (action == 'c')  //clean CIRCLE
            circle_clean();
          if (action == 'e')  //clean eleven
            eleven_clean();
          else;
          //write 11
          delay(1000);
          eleven();
          action = 'e'; break;
        } break;
    }
  }
}

void eleven() {
  Serial.println("11");
  posA = 70, posB = 33;
  myservoA.write(posA);              // tell servo to go to position in variable 'pos'
  myservoB.write(posB);              // tell servo to go to position in variable 'pos'
  myservoC.write(130);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA + 2, posB = posB + 1;
    if (posA > 115)posA = 115;
    if (posB > 60)posB = 60;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 114) && (posB > 59)) {
      break;
    }
  }
  myservoC.write(170);              // tell servo to go to position in variable 'pos'
  delay(1000);

  //posA = 115, posB = 60;
  while (1) {
    posA = posA + 2, posB = posB - 1;
    if (posA > 133)posA = 133;
    if (posB < 50)posB = 50;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 132) && (posB < 51)) {
      break;
    }
  }
  delay(1000);

  //posA = 133, posB = 50;
  myservoC.write(130);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA - 1, posB = posB + 5;
    if (posA < 130)posA = 130;
    if (posB > 80)posB = 80;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 131) && (posB > 79)) {
      break;
    }
  }
  myservoC.write(170);              // tell servo to go to position in variable 'pos'
  delay(1000);

  //posA = 130, posB = 80;
  while (1) {
    posA = posA + 1, posB = posB - 1;
    if (posA > 152)posA = 152;
    if (posB < 63)posB = 63;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 151) && (posB < 64)) {
      break;
    }
  }
  delay(1000);




  myservoC.write(130);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA - 2, posB = posB - 1;
    if (posA < 70)posA = 70;
    if (posB < 33)posB = 33;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 71) && (posB < 34)) {
      break;
    }
  }
  myservoC.write(170);              // tell servo to go to position in variable 'pos'
  delay(1000);
}

void eleven_clean() {
  posA = 70, posB = 33;
  myservoA.write(posA);              // tell servo to go to position in variable 'pos'
  myservoB.write(posB);              // tell servo to go to position in variable 'pos'
  //myservoC.write(130);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA + 2, posB = posB + 1;
    if (posA > 115)posA = 115;
    if (posB > 60)posB = 60;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 114) && (posB > 59)) {
      break;
    }
  }
  //myservoC.write(170);              // tell servo to go to position in variable 'pos'
  delay(1000);

  //posA = 115, posB = 60;
  while (1) {
    posA = posA + 2, posB = posB - 1;
    if (posA > 133)posA = 133;
    if (posB < 50)posB = 50;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 132) && (posB < 51)) {
      break;
    }
  }
  delay(1000);

  //posA = 133, posB = 50;
  //myservoC.write(130);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA - 1, posB = posB + 5;
    if (posA < 130)posA = 130;
    if (posB > 80)posB = 80;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 131) && (posB > 79)) {
      break;
    }
  }
  //myservoC.write(170);              // tell servo to go to position in variable 'pos'
  delay(1000);

  //posA = 130, posB = 80;
  while (1) {
    posA = posA + 1, posB = posB - 1;
    if (posA > 152)posA = 152;
    if (posB < 63)posB = 63;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 151) && (posB < 64)) {
      break;
    }
  }
  delay(1000);




  //myservoC.write(130);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA - 2, posB = posB - 1;
    if (posA < 70)posA = 70;
    if (posB < 33)posB = 33;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 71) && (posB < 34)) {
      break;
    }
  }
  //myservoC.write(170);              // tell servo to go to position in variable 'pos'
  delay(1000);
}

void one() {
  Serial.println("one()");
  posA = 70, posB = 33;
  myservoA.write(posA);              // tell servo to go to position in variable 'pos'
  myservoB.write(posB);              // tell servo to go to position in variable 'pos'
  myservoC.write(130);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA + 2, posB = posB + 1;
    if (posA > 115)posA = 115;
    if (posB > 60)posB = 60;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 114) && (posB > 59)) {
      break;
    }
  }
  myservoC.write(170);              // tell servo to go to position in variable 'pos'
  delay(1000);

  //posA = 115, posB = 60;
  while (1) {
    posA = posA + 2, posB = posB - 1;
    if (posA > 133)posA = 133;
    if (posB < 50)posB = 50;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 132) && (posB < 51)) {
      break;
    }
  }
  delay(1000);


  //posA = 133, posB = 50;
  myservoC.write(130);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA - 2, posB = posB - 1;
    if (posA < 70)posA = 70;
    if (posB < 33)posB = 33;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 71) && (posB < 34)) {
      break;
    }
  }
  myservoC.write(170);              // tell servo to go to position in variable 'pos'
  delay(1000);
}

void circle() {
  Serial.println("circle()");
  posA = 70, posB = 33;
  myservoA.write(posA);              // tell servo to go to position in variable 'pos'
  myservoB.write(posB);              // tell servo to go to position in variable 'pos'
  myservoC.write(130);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA + 1, posB = posB + 1;
    if (posA > 115)posA = 115;
    if (posB > 60)posB = 60;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 114) && (posB > 59)) {
      break;
    }
  }
  myservoC.write(170);              // tell servo to go to position in variable 'pos'
  delay(1000);

  //posA = 115, posB = 60;
  while (1) {
    posA = posA + 1, posB = posB + 1;
    if (posA > 140)posA = 140;
    if (posB > 70)posB = 70;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 139) && (posB > 69)) {
      break;
    }
  }
  delay(1000);

  //posA = 140, posB = 70;
  while (1) {
    posA = posA - 1, posB = posB - 2;
    if (posA < 133)posA = 133;
    if (posB < 50)posB = 50;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 134) && (posB < 51)) {
      break;
    }
  }
  delay(1000);

  //posA = 133, posB = 50;
  while (1) {
    posA = posA - 1, posB = posB - 1;
    if (posA < 110)posA = 110;
    if (posB < 38)posB = 38;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 111) && (posB < 39)) {
      break;
    }
  }
  delay(1000);

  //posA = 110, posB = 38;
  while (1) {
    posA = posA + 1, posB = posB + 1;
    if (posA > 115)posA = 115;
    if (posB > 60)posB = 60;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 114) && (posB > 59)) {
      break;
    }
  }
  delay(1000);


  //posA = 115, posB = 60;
  myservoC.write(130);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA - 2, posB = posB - 1;
    if (posA < 70)posA = 70;
    if (posB < 33)posB = 33;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 71) && (posB < 34)) {
      break;
    }
  }
  myservoC.write(170);              // tell servo to go to position in variable 'pos'
  delay(1000);

}

void square() {
  Serial.println("square()");
  posA = 70, posB = 33;
  myservoA.write(posA);              // tell servo to go to position in variable 'pos'
  myservoB.write(posB);              // tell servo to go to position in variable 'pos'
  myservoC.write(130);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA + 1, posB = posB + 1;
    if (posA > 95)posA = 95;
    if (posB > 45)posB = 45;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 94) && (posB > 44)) {
      break;
    }
  }
  myservoC.write(170);              // tell servo to go to position in variable 'pos'
  delay(1000);

  //posA = 95, posB = 45;
  while (1) {
    posA = posA + 1, posB = posB + 1;
    if (posA > 130)posA = 130;
    if (posB > 80)posB = 80;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 129) && (posB > 79)) {
      break;
    }
  }
  delay(1000);

  //posA = 130, posB = 80;
  while (1) {
    posA = posA + 1, posB = posB - 1;
    if (posA > 152)posA = 152;
    if (posB < 70)posB = 70;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 151) && (posB < 71)) {
      break;
    }
  }
  delay(1000);

  //posA = 150, posB = 70;
  while (1) {
    posA = posA - 1, posB = posB - 1;
    if (posA < 105)posA = 105;
    if (posB < 35)posB = 35;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 106) && (posB < 36)) {
      break;
    }
  }
  delay(1000);

  //posA = 115, posB = 35;
  while (1) {
    posA = posA - 2, posB = posB + 1;
    if (posA < 95)posA = 95;
    if (posB < 45)posB = 45;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 96) && (posB > 44)) {
      break;
    }
  }
  delay(1000);


  //posA = 95, posB = 45;
  myservoC.write(130);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA - 2, posB = posB - 1;
    if (posA < 70)posA = 70;
    if (posB < 33)posB = 33;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 71) && (posB < 34)) {
      break;
    }
  }
  myservoC.write(170);              // tell servo to go to position in variable 'pos'
  delay(1000);

}
void triangle() {
  Serial.println("triangle()");
  posA = 70, posB = 33;
  myservoA.write(posA);              // tell servo to go to position in variable 'pos'
  myservoB.write(posB);              // tell servo to go to position in variable 'pos'
  myservoC.write(130);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA + 1, posB = posB + 1;
    if (posA > 115)posA = 115;
    if (posB > 60)posB = 60;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 114) && (posB > 59)) {
      break;
    }
  }
  myservoC.write(170);              // tell servo to go to position in variable 'pos'
  delay(1000);

  //posA = 115, posB = 60;
  while (1) {
    posA = posA + 2, posB = posB + 1;
    if (posA > 150)posA = 150;
    if (posB > 65)posB = 65;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 149) && (posB > 64)) {
      break;
    }
  }
  delay(1000);

  //posA = 150, posB = 65;
  while (1) {
    posA = posA - 1, posB = posB - 1;
    if (posA < 115)posA = 115;
    if (posB < 30)posB = 30;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 116) && (posB < 31)) {
      break;
    }
  }
  delay(1000);

  //posA = 115, posB = 30;
  while (1) {
    posA = posA + 1, posB = posB + 3;
    if (posA > 115)posA = 115;
    if (posB > 60)posB = 60;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 114) && (posB > 59)) {
      break;
    }
  }
  delay(1000);

  //posA = 133, posB = 50;
  myservoC.write(130);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA - 2, posB = posB - 1;
    if (posA < 70)posA = 70;
    if (posB < 33)posB = 33;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 71) && (posB < 34)) {
      break;
    }
  }
  myservoC.write(170);              // tell servo to go to position in variable 'pos'
  delay(1000);
}

//clean
void one_clean() {
  Serial.println("one_clean()");
  posA = 70, posB = 33;
  myservoA.write(posA);              // tell servo to go to position in variable 'pos'
  myservoB.write(posB);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA + 2, posB = posB + 1;
    if (posA > 115)posA = 115;
    if (posB > 60)posB = 60;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 114) && (posB > 59)) {
      break;
    }
  }
  delay(1000);

  //posA = 115, posB = 60;
  while (1) {
    posA = posA + 2, posB = posB - 1;
    if (posA > 133)posA = 133;
    if (posB < 50)posB = 50;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 132) && (posB < 51)) {
      break;
    }
  }
  delay(1000);


  //posA = 133, posB = 50;
  while (1) {
    posA = posA - 2, posB = posB - 1;
    if (posA < 70)posA = 70;
    if (posB < 33)posB = 33;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 71) && (posB < 34)) {
      break;
    }
  }
  delay(1000);
}

void circle_clean() {
  Serial.println("circle_clean()");
  posA = 70, posB = 33;
  myservoA.write(posA);              // tell servo to go to position in variable 'pos'
  myservoB.write(posB);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA + 1, posB = posB + 1;
    if (posA > 115)posA = 115;
    if (posB > 60)posB = 60;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 114) && (posB > 59)) {
      break;
    }
  }
  delay(1000);

  //posA = 115, posB = 60;
  while (1) {
    posA = posA + 1, posB = posB + 1;
    if (posA > 140)posA = 140;
    if (posB > 70)posB = 70;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 139) && (posB > 69)) {
      break;
    }
  }
  delay(1000);

  //posA = 140, posB = 70;
  while (1) {
    posA = posA - 1, posB = posB - 2;
    if (posA < 133)posA = 133;
    if (posB < 50)posB = 50;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 134) && (posB < 51)) {
      break;
    }
  }
  delay(1000);

  //posA = 133, posB = 50;
  while (1) {
    posA = posA - 1, posB = posB - 1;
    if (posA < 110)posA = 110;
    if (posB < 38)posB = 38;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 111) && (posB < 39)) {
      break;
    }
  }
  delay(1000);

  //posA = 110, posB = 38;
  while (1) {
    posA = posA + 1, posB = posB + 1;
    if (posA > 115)posA = 115;
    if (posB > 60)posB = 60;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 114) && (posB > 59)) {
      break;
    }
  }
  delay(1000);


  //posA = 115, posB = 60;
  while (1) {
    posA = posA - 2, posB = posB - 1;
    if (posA < 70)posA = 70;
    if (posB < 33)posB = 33;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 71) && (posB < 34)) {
      break;
    }
  }
  delay(1000);

}

void square_clean() {
  Serial.println("square_clean()");
  posA = 70, posB = 33;
  myservoA.write(posA);              // tell servo to go to position in variable 'pos'
  myservoB.write(posB);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA + 1, posB = posB + 1;
    if (posA > 95)posA = 95;
    if (posB > 45)posB = 45;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 94) && (posB > 44)) {
      break;
    }
  }
  delay(1000);

  //posA = 95, posB = 45;
  while (1) {
    posA = posA + 1, posB = posB + 1;
    if (posA > 130)posA = 130;
    if (posB > 80)posB = 80;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 129) && (posB > 79)) {
      break;
    }
  }
  delay(1000);

  //posA = 130, posB = 80;
  while (1) {
    posA = posA + 1, posB = posB - 1;
    if (posA > 152)posA = 152;
    if (posB < 70)posB = 70;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 151) && (posB < 71)) {
      break;
    }
  }
  delay(1000);

  //posA = 150, posB = 70;
  while (1) {
    posA = posA - 1, posB = posB - 1;
    if (posA < 105)posA = 105;
    if (posB < 35)posB = 35;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 106) && (posB < 36)) {
      break;
    }
  }
  delay(1000);

  //posA = 115, posB = 35;
  while (1) {
    posA = posA - 2, posB = posB + 1;
    if (posA < 95)posA = 95;
    if (posB < 45)posB = 45;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 96) && (posB > 44)) {
      break;
    }
  }
  delay(1000);


  //posA = 95, posB = 45;
  while (1) {
    posA = posA - 2, posB = posB - 1;
    if (posA < 70)posA = 70;
    if (posB < 33)posB = 33;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 71) && (posB < 34)) {
      break;
    }
  }
  delay(1000);

}
void triangle_clean() {
  Serial.println("triangle_clean()");
  posA = 70, posB = 33;
  myservoA.write(posA);              // tell servo to go to position in variable 'pos'
  myservoB.write(posB);              // tell servo to go to position in variable 'pos'
  while (1) {
    posA = posA + 1, posB = posB + 1;
    if (posA > 115)posA = 115;
    if (posB > 60)posB = 60;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 114) && (posB > 59)) {
      break;
    }
  }
  delay(1000);

  //posA = 115, posB = 60;
  while (1) {
    posA = posA + 2, posB = posB + 1;
    if (posA > 150)posA = 150;
    if (posB > 65)posB = 65;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 149) && (posB > 64)) {
      break;
    }
  }
  delay(1000);

  //posA = 150, posB = 65;
  while (1) {
    posA = posA - 1, posB = posB - 1;
    if (posA < 115)posA = 115;
    if (posB < 30)posB = 30;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 116) && (posB < 31)) {
      break;
    }
  }
  delay(1000);

  //posA = 115, posB = 30;
  while (1) {
    posA = posA + 1, posB = posB + 3;
    if (posA > 115)posA = 115;
    if (posB > 60)posB = 60;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA > 114) && (posB > 59)) {
      break;
    }
  }
  delay(1000);

  //posA = 133, posB = 50;
  while (1) {
    posA = posA - 2, posB = posB - 1;
    if (posA < 70)posA = 70;
    if (posB < 33)posB = 33;
    myservoA.write(posA);              // tell servo to go to position in variable 'pos'
    myservoB.write(posB);              // tell servo to go to position in variable 'pos'
    delay(30);

    if ((posA < 71) && (posB < 34)) {
      break;
    }
  }
  delay(1000);
}

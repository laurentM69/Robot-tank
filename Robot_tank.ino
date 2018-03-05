//Motor Shield 2-Channel DC Motor Demo
//by Laurent Macron
//*************************************************************/

//moteur A
#define Direction_A 12
#define Vitesse_A 3
#define Frein_A 9
#define Courant_A 0
//moteur B
#define Direction_B 13
#define Vitesse_B 11
#define Frein_B 8
#define Courant_B 1


void Marche_Avant()
{
  digitalWrite(Direction_A, LOW); //Establishes forward direction of Channel A
  digitalWrite(Direction_B, HIGH); //Establishes forward direction of Channel B
  analogWrite(Vitesse_A, 255);   //Spins the motor on Channel A at full speed
  analogWrite(Vitesse_B, 255);   //Spins the motor on Channel B at full speed
}


void Marche_Arriere()
{
  digitalWrite(Direction_A, HIGH); //Establishes forward direction of Channel A
  digitalWrite(Direction_B, LOW); //Establishes forward direction of Channel B
  analogWrite(Vitesse_A, 255);   //Spins the motor on Channel A at full speed
  analogWrite(Vitesse_B, 255);   //Spins the motor on Channel B at full speed
}


void Tourne_Droite()
{
  digitalWrite(Direction_A, HIGH); //Establishes forward direction of Channel A
  digitalWrite(Direction_B, HIGH); //Establishes forward direction of Channel B
  analogWrite(Vitesse_A, 255);   //Spins the motor on Channel A at full speed
  analogWrite(Vitesse_B, 255);   //Spins the motor on Channel B at full speed
}


void Tourne_Gauche()
{
  digitalWrite(Direction_A, LOW); //Establishes forward direction of Channel A
  digitalWrite(Direction_B, LOW); //Establishes forward direction of Channel B
  analogWrite(Vitesse_A, 255);   //Spins the motor on Channel A at full speed
  analogWrite(Vitesse_B, 255);   //Spins the motor on Channel B at full speed
}


void setup()
{
  //Setup Channel A
  pinMode(Direction_A, OUTPUT); //Initiates Motor Channel A pin
  pinMode(Frein_A, OUTPUT); //Initiates Brake Channel A pin
  //Setup Channel B
  pinMode(Direction_B, OUTPUT); //Initiates Motor Channel B pin
  pinMode(Frein_B,OUTPUT); //Initiates Brake Channel B pin
}

void loop()
{
Marche_Avant();
delay(5000);
Tourne_Droite();
delay(5000);
Marche_Arriere();
delay(5000);
Tourne_Gauche();
delay(5000);
}


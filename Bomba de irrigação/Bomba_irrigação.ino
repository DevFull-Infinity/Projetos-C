#include <LiquidCrystal.h>

const int rs = 1, en = 2, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int born_sensor = A0;
int valor_umidade;

int solo_seco = 812;
int solo_umido = 180;
int perct_solo_seco = 0;
int perct_solo_umido = 100;
int bomba_ativada;

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(3, 0);
  lcd.print("Bem vindo");
  lcd.setCursor(0,1);
  lcd.print("Sistema Hidrico");
  
  delay(2000);
  
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("Medindo..");
  pinMode(11,OUTPUT);
  
  delay(1000);
}

void loop() {
  valor_umidade = constrain(analogRead(born_sensor),solo_umido,solo_seco);
  valor_umidade = map(valor_umidade,solo_umido,solo_seco,perct_solo_umido,perct_solo_seco);

  while (valor_umidade >= 50){
    if (valor_umidade < 50){
      break;
    }

    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("Bomba Ativada..");
    digitalWrite(11,HIGH);
    bomba_ativada == 1;
    delay(1500);
    
  }
  
  if ((bomba_ativada == 1) && (valor_umidade < 50)){
  	lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("Bomba OFF");
    digitalWrite(11,LOW);
    bomba_ativada == 0;
    
    delay(1000);
  }
 
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("Umidade:");
  lcd.print(valor_umidade);
  lcd.print("%");

  delay(1000);
}
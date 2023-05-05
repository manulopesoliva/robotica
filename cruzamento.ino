int vermelho1 = 11;
int vermelho2 = 8;
int verde1 = 13;
int verde2 = 10;
int amarelo1 = 12;
int amarelo2 = 9; 

void setup (){

pinMode(vermelho1, OUTPUT);
pinMode(vermelho2, OUTPUT);
pinMode(verde1, OUTPUT);
pinMode(verde2, OUTPUT);
pinMode(amarelo1, OUTPUT);
pinMode(amarelo2, OUTPUT);
}

void loop(){
digitalWrite(vermelho1, LOW);
digitalWrite(vermelho2, HIGH);
digitalWrite(verde1, HIGH);
digitalWrite(verde2, LOW);
digitalWrite(amarelo1, LOW);
digitalWrite(amarelo2, LOW);

delay(2000);

digitalWrite(vermelho1, LOW);
digitalWrite(vermelho2, HIGH);
digitalWrite(verde1, LOW);
digitalWrite(verde2, LOW);
digitalWrite(amarelo1, HIGH);
digitalWrite(amarelo2, LOW);

delay(3000);

digitalWrite(vermelho1, HIGH);
digitalWrite(vermelho2, LOW);
digitalWrite(verde1, LOW);
digitalWrite(verde2, HIGH);
digitalWrite(amarelo1, LOW);
digitalWrite(amarelo2, LOW);

delay(3000);

digitalWrite(vermelho1, HIGH);
digitalWrite(vermelho2, LOW);
digitalWrite(verde1, LOW);
digitalWrite(verde2, LOW);
digitalWrite(amarelo1, LOW);
digitalWrite(amarelo2, HIGH);

delay(3000);

digitalWrite(vermelho1, LOW);
digitalWrite(vermelho2, HIGH);
digitalWrite(verde1, HIGH);
digitalWrite(verde2, LOW);
digitalWrite(amarelo1, LOW);
digitalWrite(amarelo2, LOW);

delay(3000);
}

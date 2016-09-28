
const int cde_a = 9;
const int cde_b = 8;
const int cde_c = 4;
const int cde_d = 3;
const int cde_e = 2;
const int cde_f = 11;
const int cde_g = 12;
const int cde_dp = 5;
const int bp = 12;
int f = 0;


void setup()
            {
              Serial.begin(9600);
              pinMode(cde_a, OUTPUT);
              pinMode(cde_b, OUTPUT);
              pinMode(cde_c, OUTPUT);
              pinMode(cde_d, OUTPUT);
              pinMode(cde_e, OUTPUT);
              pinMode(cde_f, OUTPUT);
              pinMode(cde_g, OUTPUT);
              pinMode(cde_dp, OUTPUT);
              pinMode(bp, INPUT);
              
            }

void loop()
           {
             while(f == 0)
            {
            digitalWrite(cde_a, HIGH);
            digitalWrite(cde_b, HIGH);
            digitalWrite(cde_c, HIGH);
            digitalWrite(cde_d, HIGH);
            digitalWrite(cde_e, HIGH);
            digitalWrite(cde_f, HIGH);
            digitalWrite(cde_g, HIGH);
            digitalWrite(cde_dp, LOW);
            f = digitalRead(bp);
            delay(50);
            }
            digitalWrite(cde_dp, HIGH);
            digitalWrite(cde_a, LOW);
            digitalWrite(cde_b, LOW);
            digitalWrite(cde_c, LOW);
            digitalWrite(cde_d, LOW);
            digitalWrite(cde_e, LOW);
            digitalWrite(cde_f, LOW);
            digitalWrite(cde_g, HIGH);
            digitalWrite(cde_dp, HIGH);
            delay(1000);
            digitalWrite(cde_a, HIGH);
            digitalWrite(cde_b, LOW);
            digitalWrite(cde_c, LOW);
            digitalWrite(cde_d, HIGH);
            digitalWrite(cde_e, HIGH);
            digitalWrite(cde_f, HIGH);
            digitalWrite(cde_g, HIGH);
            digitalWrite(cde_dp, HIGH);
            delay(1000);            
            digitalWrite(cde_a, LOW);
            digitalWrite(cde_b, LOW);
            digitalWrite(cde_c, HIGH);
            digitalWrite(cde_d, LOW);
            digitalWrite(cde_e, LOW);
            digitalWrite(cde_f, HIGH);
            digitalWrite(cde_g, LOW);
            digitalWrite(cde_dp, HIGH);
            delay(1000);          
            digitalWrite(cde_a, LOW);
            digitalWrite(cde_b, LOW);
            digitalWrite(cde_c, LOW);
            digitalWrite(cde_d, LOW);
            digitalWrite(cde_e, HIGH);
            digitalWrite(cde_f, HIGH);
            digitalWrite(cde_g, LOW);
            digitalWrite(cde_dp, HIGH);
            delay(1000);            
            digitalWrite(cde_a, HIGH);
            digitalWrite(cde_b, LOW);
            digitalWrite(cde_c, LOW);
            digitalWrite(cde_d, HIGH);
            digitalWrite(cde_e, HIGH);
            digitalWrite(cde_f, LOW);
            digitalWrite(cde_g, LOW);
            digitalWrite(cde_dp, HIGH);
            delay(1000);            
            digitalWrite(cde_a, LOW);
            digitalWrite(cde_b, HIGH);
            digitalWrite(cde_c, LOW);
            digitalWrite(cde_d, LOW);
            digitalWrite(cde_e, HIGH);
            digitalWrite(cde_f, LOW);
            digitalWrite(cde_g, LOW);
            digitalWrite(cde_dp, HIGH);
            delay(1000);            
            digitalWrite(cde_a, LOW);
            digitalWrite(cde_b, HIGH);
            digitalWrite(cde_c, LOW);
            digitalWrite(cde_d, LOW);
            digitalWrite(cde_e, LOW);
            digitalWrite(cde_f, LOW);
            digitalWrite(cde_g, LOW);
            digitalWrite(cde_dp, HIGH);
            delay(1000);            
            digitalWrite(cde_a, LOW);
            digitalWrite(cde_b, LOW);
            digitalWrite(cde_c, LOW);
            digitalWrite(cde_d, HIGH);
            digitalWrite(cde_e, HIGH);
            digitalWrite(cde_f, HIGH);
            digitalWrite(cde_g, HIGH);
            digitalWrite(cde_dp, HIGH);
            delay(1000);            
            digitalWrite(cde_a, LOW);
            digitalWrite(cde_b, LOW);
            digitalWrite(cde_c, LOW);
            digitalWrite(cde_d, LOW);
            digitalWrite(cde_e, LOW);
            digitalWrite(cde_f, LOW);
            digitalWrite(cde_g, LOW);
            digitalWrite(cde_dp, HIGH);
            delay(1000);            
            digitalWrite(cde_a, LOW);
            digitalWrite(cde_b, LOW);
            digitalWrite(cde_c, LOW);
            digitalWrite(cde_d, LOW);
            digitalWrite(cde_e, HIGH);
            digitalWrite(cde_f, LOW);
            digitalWrite(cde_g, LOW);
            digitalWrite(cde_dp, HIGH);
            delay(1000);
           }


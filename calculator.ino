/*
 * Arduino Calculator - Mobile Interface via USB-OTG Serial
 * Computer Organization & Architecture Project
 */

// Global Variables (Registers)
long Num1 = 0;
long Num2 = 0;
long Number = 0;
char action = ' ';
bool result = false;

// Function declarations (IMPORTANT!)
void detectKey(char key);
void calculate();

void setup() {
  Serial.begin(9600);
  while(!Serial) {
    ;
  }
  Serial.println("0");
}

void loop() {
  if (Serial.available() > 0) {
    char key = Serial.read();
    
    if (key == '\n' || key == '\r') {
      return;
    }
    
    detectKey(key);
    
    if (result) {
      calculate();
      Serial.println(Number);
      result = false;
    } 
    else if (key >= '0' && key <= '9') {
      Serial.println(Number);
    }
  }
}

// Control Unit - Instruction Decoder
void detectKey(char key) {
  
  if (key == '*') {
    Number = 0;
    Num1 = 0;
    Num2 = 0;
    action = ' ';
    Serial.println("0");
    return;
  }
  
  if (key >= '0' && key <= '9') {
    int digit = key - '0';
    
    if (Number == 0) {
      Number = digit;
    } else {
      Number = (Number * 10) + digit;
    }
    return;
  }
  
  if (key == '#') {
    Num2 = Number;
    result = true;
    return;
  }
  
  if (key >= 'A' && key <= 'D') {
    Num1 = Number;
    Number = 0;
    
    switch(key) {
      case 'A': 
        action = '+'; 
        break;
      case 'B': 
        action = '-'; 
        break;
      case 'C': 
        action = '*'; 
        break;
      case 'D': 
        action = '/'; 
        break;
    }
    
    Serial.println(Num1);
  }
}

// ALU - Arithmetic Logic Unit
void calculate() {
  switch (action) {
    
    case '+':
      Number = Num1 + Num2;
      break;
      
    case '-':
      Number = Num1 - Num2;
      break;
      
    case '*':
      Number = Num1 * Num2;
      break;
      
    case '/':
      if (Num2 != 0) {
        Number = Num1 / Num2;
      } else {
        Number = 0;
      }
      break;
      
    default:
      Number = 0;
  }
}

#include <Morse.h>
 
Morse morse(13);
 
void setup()
{
}

//*-** *---****
void loop()
{
 char num;
 num=getchar();
 switch(num)
 {
  case 97:morse.dot();morse.dash();delay(3000);break;
  case 98:morse.dash();morse.dot();morse.dot();delay(3000);break;
  case 99:morse.dash();morse.dot();morse.dash();morse.dot();delay(3000);break;
  
  case 100:morse.dash();morse.dot();morse.dot();delay(3000);break;
  case 101:morse.dot();delay(3000);break;
  case 102:morse.dot();morse.dot();morse.dash();morse.dot();delay(3000);break;
 
  case 103:morse.dash();morse.dash();morse.dot();delay(3000);break;
  case 104:morse.dot();morse.dot();morse.dot();morse.dot();delay(3000);break;
  case 105:morse.dot();morse.dot();delay(3000);break;

  case 106:morse.dot();morse.dash();morse.dash();morse.dash();delay(3000);break;
  case 107:morse.dash();morse.dot();morse.dash();delay(3000);break;
  case 108:morse.dot();morse.dash();morse.dot();morse.dot();delay(3000);break;

  case 109:morse.dash();morse.dash();delay(3000);break;
  case 110:morse.dash();morse.dot();delay(3000);break;
  case 111:morse.dash();morse.dash();morse.dash();delay(3000);break;
  case 112:morse.dot();morse.dash();morse.dash();morse.dot();delay(3000);break;
  case 113:morse.dash();morse.dash();morse.dot();morse.dash();delay(3000);break;
  case 114:morse.dot();morse.dash();morse.dot();delay(3000);break;
  case 115:morse.dot();morse.dot();morse.dot();delay(3000);break;

  case 116:morse.dash();delay(3000);break;
  case 117:morse.dot();morse.dot();morse.dash();delay(3000);break;
  case 118:morse.dot();morse.dot();morse.dot();morse.dash();delay(3000);break;

  case 119:morse.dot();morse.dash();morse.dash();delay(3000);break;
  case 120:morse.dash();morse.dot();morse.dot();morse.dash();delay(3000);break;
  case 121:morse.dash();morse.dot();morse.dash();morse.dash();delay(3000);break;
  case 122:morse.dash();morse.dash();morse.dot();morse.dot();delay(3000);break;

  case 32:morse.dash();morse.dash();morse.dot();morse.dot();morse.dash();morse.dash();delay(3000);break;
  case 13:morse.dot();morse.dot();morse.dash();morse.dash();morse.dot();morse.dot();delay(3000);break;
  }
 
}

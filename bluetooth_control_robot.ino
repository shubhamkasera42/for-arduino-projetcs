#define m11 3
#define m12 4

#define m21 5
#define m22 6

#define m31 9
#define m32 10
#define m41 12
#define m42 13

void setup()
{
  pinMode(m11, OUTPUT);
  pinMode(m12, OUTPUT);
  pinMode(m21, OUTPUT);
  pinMode(m22, OUTPUT);

    pinMode(m31, OUTPUT);
  pinMode(m32, OUTPUT);
  pinMode(m41, OUTPUT);
  pinMode(m42, OUTPUT);
 
  Serial.begin(38400);
}
void loop()
{
  while(Serial.available())
  {
    char In=Serial.read();
    
    if(In=='1')           // for forward movement 
     
    {
      digitalWrite(m11, HIGH);
      digitalWrite(m12, LOW);
       
      
      digitalWrite(m21, HIGH);
      digitalWrite(m22, LOW); 
    }
    
     else if(In=='2')          //for backward movement 
    {
      digitalWrite(m11, LOW);
      digitalWrite(m12, HIGH);
      
      
      digitalWrite(m21, LOW);
      digitalWrite(m22, HIGH);
      
    }
    
     else if(In=='3')  // for left leg movement 
    {
      digitalWrite(m11, HIGH);
      digitalWrite(m12, LOW);
    
      digitalWrite(m21, LOW);
      digitalWrite(m22, LOW);
     
      
    }
    
     else if(In=='4')  // for right leg movement     {
      digitalWrite(m11, LOW);
      digitalWrite(m12, LOW);
     
      digitalWrite(m21, HIGH);
      digitalWrite(m22, LOW);
     
    }
    
     else if(In=='5')   // stop 
    {
      digitalWrite(m11, LOW);
      digitalWrite(m12, LOW);
      
            digitalWrite(m21, LOW);
      digitalWrite(m22, LOW);
      
    }
       if(In=='6')           // for left hand movement 
    {
      digitalWrite(m31, HIGH);
      digitalWrite(m32, LOW);
       
      
      digitalWrite(m41, HIGH);
      digitalWrite(m42, LOW);
    
    }
    
     else if(In=='7')            // for right hand movement 
    {
      digitalWrite(m31, LOW);
      digitalWrite(m32, HIGH);
     
      digitalWrite(m41, LOW);
      digitalWrite(m42, HIGH);
      
    }
    
     else if(In=='8')   // for neck movement in clockwise direction 
    {
      digitalWrite(m31, HIGH);
      digitalWrite(m32, LOW);
     
      digitalWrite(m41, LOW);
      digitalWrite(m42, LOW);
     
      
    }
    
     else if(In=='9')     // for neck movement in anti-clockwise direction 
    {
      digitalWrite(m31, LOW);
      digitalWrite(m32, LOW);
      
      digitalWrite(m41, HIGH);
      digitalWrite(m42, LOW);
       
    }
    
     else if(In=='0')    //stop 
    {
      digitalWrite(m31, LOW);
      digitalWrite(m32, LOW);
   
            digitalWrite(m41, LOW);
      digitalWrite(m42, LOW);
      
    }
    
    else
    {
      
    }
  }
}


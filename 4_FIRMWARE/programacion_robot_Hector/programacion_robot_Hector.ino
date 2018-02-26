char dato;
int a=200;
int b=200;
void setup( ) {
  //configuramos E/S digitales del robot
  Serial.begin(9600);
  //MOTOR 1
  pinMode(6,OUTPUT);//MOTOR 1
  pinMode(7,OUTPUT);//MOTOR 1
  //MOTOR 2
  pinMode(8,OUTPUT);//MOTOR 2
  pinMode(9,OUTPUT);//MOTOR 2
}
void loop( ) {
 if (Serial.available() > 0) {
   dato = Serial.read();
   switch (dato) {
    case ('F'): {    
        //robot movimiento adelante
        //MOTOR 1
        analogWrite(10,200);
        digitalWrite(6,1);
        digitalWrite(7,0);  
        //MOTOR 2 
        analogWrite(11,200);
        digitalWrite(8,1);
        digitalWrite(9,0);
        break;
    }
    case ('B'): {    
       //robot movimiento atrás
       //MOTOR 1
       analogWrite(10,170);
       digitalWrite(6,0);
       digitalWrite(7,1);  
       //MOTOR 2 
       analogWrite(11,230);
       digitalWrite(8,0);
       digitalWrite(9,1);
       break;          
    }
    case ('L'): {       
        //robot movimiento izquierda
        //MOTOR 1
        analogWrite(10,a);
        digitalWrite(6,1);
        digitalWrite(7,0);
        //MOTOR 2
        analogWrite(11,0);
        digitalWrite(8,1);
        digitalWrite(9,0);
        break;
    }    
    case ('R'): {     
        //robot movimiento derecha
        //MOTOR 1
        analogWrite(10,0);
        digitalWrite(6,1);
        digitalWrite(7,0);
       //MOTOR 2
        analogWrite(11,b);
        digitalWrite(8,1);
        digitalWrite(9,0);   
        break;
    }
    case ('X'): {
        //MICHAEL JACKSON 
        //MOTOR 1
        analogWrite(10,a);
        digitalWrite(6,1);
        digitalWrite(7,0);
        //MOTOR 2
        analogWrite(11,b);
        digitalWrite(8,0);
        digitalWrite(9,1); 
        break; 
    }
    case ('Y'): {
        //MICHAEL JACKSON
        //MOTOR 1
        analogWrite(10,a);
        digitalWrite(6,0);
        digitalWrite(7,1);
        //MOTOR 2
        analogWrite(11,b);
        digitalWrite(8,1);
        digitalWrite(9,0);
        break;
    }
    case ('S'): {     
        //paro motores
        //MOTOR 1
        analogWrite(10,0);
        //MOTOR 2
        analogWrite(11,0);
        break;
    }
   }
  }
} 

   


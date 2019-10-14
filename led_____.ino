int gameover=0;
int redLED=3;

void setup(){
  pinMode(8,INPUT);
  pinMode(2,INPUT);
  pinMode(12,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop(){
    int switchState1 = digitalRead(8);
    int switchState2 = digitalRead(12);
    int switchState3 = digitalRead(2);
    
    if (gameover==0){
       digitalWrite(3,LOW);
       digitalWrite(4,LOW);
       digitalWrite(5,LOW);
      //所有灯都是灭的  
    } 
    
   
    if (switchState1 == HIGH ){
     
       digitalWrite(4,HIGH);
       digitalWrite(5,HIGH);
       delay(600);
       digitalWrite(4,LOW);
       digitalWrite(5,LOW);
       delay(600);
    
      gameover=1;
    }

    if (gameover==1) {
       digitalWrite(3,HIGH);
      
       delay(600);
       
    //game start 
  
         if  (digitalRead(2)!=redLED){
             gameover=2;
       
             //游戏结束 
             }  
          digitalWrite(3,LOW);   
          delay(600);
          digitalWrite(3,HIGH);   
          delay(600);          
       
            
       }
          
         
    
       if (gameover==2){
       digitalWrite(3,HIGH);
       digitalWrite(4,HIGH);
       digitalWrite(5,HIGH);
       delay(1000);
       gameover=0;
  
}
}

   
    
  


  

  

         

 

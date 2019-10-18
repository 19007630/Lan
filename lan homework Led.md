## Homework1(Lan)

### Lab 01 
Here, this is the final effect picture about this lab

![image](/Users/yanglan/Desktop/cci-ual-pcomp/ledtest.jpg)


*Here is an image *

**Video of Lab 01**
This is the first time i upload it to youTube,and this is the first time i write code,so i think this is a simple game...
This game is like this. When the white and blue lights are on, it proves that the game starts. When the red light is on, you need to press and hold according to its lighting frequency. When the red light is on and you don't press the button, or when you hold down the button, it is red. When the light is not on, the game is over and the three lights are on, proving the end of the game.

[This is a cool video from Contrapoints]https://youtu.be/ypd0M7VOjQY

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
      //
    } 
    
   
    if (switchState1 == HIGH ){
     
       digitalWrite(4,HIGH);
       digitalWrite(5,HIGH);
       delay(600);
     
       
      gameover=1;
    }

    if (gameover==1) {
       digitalWrite(3,HIGH);
      
       delay(600);
       
    //game start 
  
         if  (digitalRead(2)!=redLED){
             gameover=2;
       
             //
             }  
          digitalWrite(3,LOW);   
          delay(600);
          digitalWrite(3,HIGH);   
          delay(600);          
          digitalWrite(3,LOW);   
          delay(600);
          digitalWrite(3,HIGH);   
          delay(600); 
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
---
END

THANK YOU FOR WATCHING!
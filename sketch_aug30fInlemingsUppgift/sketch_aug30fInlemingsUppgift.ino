#include <LiquidCrystal.h> 
LiquidCrystal cd(12, 11, 5, 4, 3 ,2);
const int switchPin=6; 
int switchState=0; 
int prevSwitchState=0;
int reply;
void setup(){   
  cd.begin(16, 2);
  pinMode(switchPin, INPUT);
  cd.print("Ask the");
  cd.setCursor(0, 1);
  cd.print("Crystal Ball!");
  }  
  void loop(){   
    switchState=digitalRead(switchPin);   
    if (switchState !=prevSwitchState) {     
      if (switchState == LOW){       
        reply = random(8);       
        cd.clear();       
        cd.setCursor(0, 0);       
        cd.print("The ball says");       
        cd.setCursor(0, 1);       
        switch(reply){         
        case 0:         
        cd.print("yes");         
        break;         
        case 1:         
        cd.print("Most Likly");         
        break;         
        case 2:         
        cd.print("Outlook Good");         
        break;         
        case 3:         
        cd.print("Certainly");         
        break;         
        case 4:         
        cd.print("Unsure");         
        break;         
        case 5:         
        cd.print("Ask again");         
        break;         
        case 6:         
        cd.print("Doubtful");         
        break;         
        case 7:         
        cd.print("no");         
        break;                
      }     
    }   
  }   
  prevSwitchState=switchState; 
}

//Class definition for pushbutton
class pushbutton{
  public:
  	pushbutton(byte pin){
   		pb = pin; 
  	}
  	void initialize(){
    	pinMode(pb, INPUT);
  	}
  	//read pushbutton with debounce capability
  	bool read(){
    	int reading = digitalRead(pb);
      	if (reading != lastButtonState) {
    		lastDebounceTime = millis();
  		}
  		if ((millis() - lastDebounceTime) > debounceDelay) {
    		if (reading != buttonState) {
      			buttonState = reading;
    		}
  		}
  		lastButtonState = reading;
        return buttonState;
    }
  	//return toggle value when button is pushed
  	bool toggle(){
      	bool read_input = read();
      	if(read_input != last_read_input){
          	if(read_input == HIGH){
            	toggle_value = !toggle_value;
          	}
      	}
      	last_read_input = read_input;
      	return toggle_value;
  	}
  	//return HIGH = there is change of state, LOW = no change
  	bool cosd(){
    	bool read_input = read();
      	if(read_input != last_read_input){
        	last_read_input = read_input;
          	return HIGH;
      	}
      	else{
          	last_read_input = read_input;
          	return LOW;
      	}
  	}
  	//return the number of times pushbutton is pressed
  	int clicker(int max_count){
      	bool read_input = read();
      	if(read_input != last_read_input){
          	if(read_input == HIGH){
            	counter = (counter < max_count-1) ? counter + 1: 0;
          	}
      	}
      	last_read_input = read_input; 
    	return counter;
  	}
  private:
  	byte pb;
    bool buttonState;             // the current reading from the input pin
	bool lastButtonState = LOW;   // the previous reading from the input pi
  	bool last_read_input = LOW;
  	bool toggle_value;
  	int counter = 0;
  	unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
	unsigned long debounceDelay = 30;    // the debounce time; increase if the output flickers
};

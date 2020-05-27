//This is a function that is able to parse data from UART/serial communication. This function is suitable to send commands to
//to Arduino to control Hbridge direction and speed.
//Function will reject if data received is alphanumeric. Only numerical values accepted. commands are separated by comma values.
//example:
//Transmit from PC: direction, speed (can add more commands must be separated by comma)

int serial_data_control(){
  int conversion = 0;
  char read_buffer;
  
  do{
    delay(1); //ensure the remaining data arrive the serial buffer
	read_buffer = Serial.read();
    //convert ASCII to decimal values
  	if(isDigit(read_buffer)){ 
    	conversion = (conversion * 10) + (read_buffer - '0');
    }
    else{
      	//in the event data received is alphanumeric, reject converted values 
      	if(isAlpha(read_buffer)){
      		//resets the value of conversion if its alphanumeric
      		if(conversion > 0){
       			conversion = 0; 
      		}
      		//clears the data that is in the serial buffer until separator marker
          	do{
            	read_buffer = Serial.read();
          	}while(Serial.available() > 0 && read_buffer != ',');
      	}
    }
  //when serial buffer reads ',' or no data in buffer, marks as end of data received
  }while(Serial.available() > 0 && read_buffer != ',');
  return conversion;
}

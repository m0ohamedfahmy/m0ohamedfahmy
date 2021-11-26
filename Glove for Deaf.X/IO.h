/* 
 * File:   IO.h
 * Author: mohamed
 *
 * Created on November 14, 2021, 10:52 AM
 */

#ifndef IO_H
#define	IO_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif
// PORT LEVEL 


void setPortDir ( int portNum , int state);    
void setPortData ( int portNum , int data);    
void togglePortData(int portNum);



//PIN LEVEL

void setPinDir ( int portNum , int pinNum, int state);    
void setPinData ( int portNum , int pinNum, int data);    
void togglePinData(int portnum ,int pinNum);
#endif	/* IO_H */


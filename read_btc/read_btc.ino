#include <ESP8266WiFi.h>
#include <WiFiClient.h>
//#include "stdio.h"
//#include "string.h"
#define READ_BITCOIN_VALUE
WiFiClient Socket;
ESP8266WiFiClass ESP_Net;  
char btc_buff[4096] ;
const char *host_btc = "52.84.229.36";
char btc_port = 80;
char btc_read_req[] = "GET /v1/bpi/currentprice.json HTTP/1.1\r\nHost: api.coindesk.com\r\n\r\n";
//char btc_read_req[] = "GET /v1/bpi/currentprice.json HTTP/1.1Host: api.coindesk.com";
void setup() {
  // put your setup code here, to run once:
    Serial.begin(115200);
    ESP_Net.disconnect();
    
        /*wifi connect*/
        
    ESP_Net.begin("huuthuyet19-04","axbycz123456789");
    while(ESP_Net.isConnected()!=true)
    {
      delay(500);
      Serial.print(".");
    }
    Serial.println();
    Serial.println("da vao dc WIFI");
    
       /*server connect*/
       
    Socket.connect(host_btc, btc_port);
    while(Socket.status()== false){
          delay(500);
          Serial.print(".");
      }
    Socket.write(btc_read_req,strlen(btc_read_req));
    int sizeofread = Socket.available();
    //Serial.print(sizeofread);
    if(sizeofread>0){
        Socket.read((uint8_t*)btc_buff,sizeofread);
        //Serial.print(btc_buff);
     }
}
void loop() {
  // put your main code here, to run repeatedly:
    int sizeofread = Socket.available();
    if(sizeofread>0){
        //Serial.printf("sizeofread = %d \r\n",sizeofread);
        Socket.read((uint8_t*)btc_buff,sizeofread);
        //Serial.print(btc_buff);
        delay(100);
        char * key_Start = "\"rate_float\":";
        char key_End = '}';
        char * start_Pos = strstr(btc_buff, key_Start);
        if(start_Pos > 0){
          
          start_Pos += strlen(key_Start);
        
          int index = 0;
          char getValue[50] = {0};
          while (start_Pos[index] != key_End) {
            
                getValue[index] = start_Pos[index];
                index++;
          }
           
           Serial.printf("\r\n bitcoin price: %s USD", getValue);
         }  
    }
}

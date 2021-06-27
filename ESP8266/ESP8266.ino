#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#define READ_BITCOIN_VALUE
char buff[] = "truong nham lan\r\n";
char recive_buff[20] = {'\0'};
WiFiClient Socket;
ESP8266WiFiClass ESP_Net;  
const char *host = "192.168.1.15";
/*#########BTC_READ_VALUE#########*/
char btc_buff[15536] ;
const char *host_btc = "52.84.229.36";
char btc_port = 80;
char btc_read_req[] = "GET /v1/bpi/currentprice.json HTTP/1.1Host: api.coindesk.com";
/*#########END DEF BTC_READ_VALUE#########*/
void setup() {
  // put your setup code here, to run once:
    Serial.begin(115200);
    ESP_Net.disconnect();
    ESP_Net.begin("huuthuyet19-04","axbycz123456789");
    while(ESP_Net.isConnected()!=true)
    {
      delay(500);
      Serial.print(".");
    }
    
    Serial.println();
    Serial.println("da vao dc WIFI");
//#ifdef HERCULES_DBG
//    Socket.connect(host, (uint16_t)2000);
//    while(Socket.status()== false){
//          delay(500);
//          Serial.print(".");
//      }
//    Socket.write(buff,strlen(buff));
//#endif
#ifdef READ_BITCOIN_VALUE
    Socket.connect(host_btc, btc_port);
    while(Socket.status()== false){
          delay(500);
          Serial.print(".");
      }
    Socket.write(btc_read_req,strlen(btc_read_req));
    int sizeofread = Socket.available();
    Serial.print(sizeofread);
    if(sizeofread>0){
        Socket.read((uint8_t*)btc_buff,sizeofread);
        Serial.print(btc_buff);
     }
#endif
}
void loop() {
  // put your main code here, to run repeatedly:
//  int sizeofread = Socket.available();
//     if(sizeofread>0){
//        Socket.read((uint8_t*)recive_buff,sizeofread);
//        Serial.print(recive_buff);
//        delay(100);
//     }

   
}

Steps to Upload and Run

Step:1 Set Up WiFi Credentials:

Replace your_SSID and your_PASSWORD in both sketches with your WiFi network's SSID and password.

Step:2 Server IP Address:

Replace 192.168.1.x in the client sketch with the actual IP address of the server ESP32. You can get this IP address from the serial monitor output of the server sketch after it connects to the WiFi.

Step:3 Upload Code:

Upload the server code to one ESP32.
Upload the client code to the other ESP32.

Step:4 Open Serial Monitors:

Open the Serial Monitor for both ESP32 devices in the Arduino IDE.

Step:5 Verify Communication:

The client should connect to the server and send a message. The server will print the received message and respond back to the client. Both actions will be visible in the respective Serial Monitors.

/*--OUTPUT--*/
Sender::
![Screenshot 2024-06-11 163205](https://github.com/owais8113/TCP_ESP32/assets/127936539/062bf56d-fa18-42cc-8b4d-a32791b8786f)
Receiver::
![WhatsApp Image 2024-06-11 at 4 32 28 PM](https://github.com/owais8113/TCP_ESP32/assets/127936539/51125b25-53a4-4475-b63d-5d28380a06bc)

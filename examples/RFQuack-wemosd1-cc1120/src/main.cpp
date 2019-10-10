/*****************************************************************************
 * RFQuack configuration/
 *****************************************************************************/

/* ID definition */
#define RFQUACK_UNIQ_ID "WEMOSD1_CC1120"

/* Network configuration */
#define RFQUACK_NETWORK_ESP8266
#define RFQUACK_NETWORK_SSID "GuglioHouse"
#define RFQUACK_NETWORK_PASS "Leonida1"

/* Transport configuration */
#define RFQUACK_TRANSPORT_MQTT
#define RFQUACK_MQTT_BROKER_HOST "192.168.1.200"

/* Radio configuration */
#define RFQUACK_RADIO_CC1120

#define RFQUACK_RADIO_PIN_CS 15
#define RFQUACK_RADIO_PIN_IRQ 4
#define RFQUACK_RADIO_PIN_RST 5

/* Enable RadioHAL debug messages */
#define RFQUACK_DEBUG_RADIO true
#define RFQUACK_DEV

#define RFQUACK_LOG_SS_DISABLED

/*****************************************************************************
 * /RFQuack configuration - DO NOT EDIT BELOW THIS LINE
 *****************************************************************************/

#include "rfquack.h"

void setup() { rfquack_setup(); }
void loop() { rfquack_loop(); }

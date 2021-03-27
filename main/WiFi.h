//
// Created by mw on 27.03.2021.
//

#ifndef WIFI_STATION_WIFI_H
#define WIFI_STATION_WIFI_H

/**
 * Simple wrapper for C connection from ESP32 example.
 */
class WiFi {
public:
    /**
     * Try to connect to WiFi.
     *
     * @param aSSID is a network SSID.
     * @param aPass is a network password.
     * @param aRetry how many times it should try to connect.
     */
    void connect(const char *aSSID, const char *aPass, int aRetry);

    /**
     * Check if WiFi is connected.
     *
     * @return true if connected, false otherwise.
     */
    bool isConnected();
};


#endif //WIFI_STATION_WIFI_H

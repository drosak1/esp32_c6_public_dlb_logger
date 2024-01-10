#ifndef dlb_server_h
#define dlb_server_h

#include "Arduino.h"

class dlb_server
{
  public:
    dlb_server();
    void set_macAddress();
    bool get_credential(String addres);
    bool update(String addres);
  private:
    uint8_t fingerprint[128] = { 0 };
    int update_version = 0;
};

#endif
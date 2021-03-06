#ifndef ESP_CUSTOM_CONFIG
#define ESP_CUSTOM_CONFIG
#define ESP_SWITCH_01
//Switches
#ifdef ESP_SWITCH_01
struct ConfigData {
  char deviceUUID[40] = "NEW"; //unique id of the device globally if "UNCLAIMED"
  char deviceTYPE[20] = "SWITCH-01"; //"Switch-01" / "TEMPHUMIDITYSENSOR" / "MOTIONDETECTOR"
  char version[10] = "1.0"; //1.0
  char claimedID[40] = "NONE"; // ID of user who claims this device
  char chipID[40] = ""; // wifi chip id for uniue id of the chip
  int updateDelay = 1; //seconds to wait between each update to server
  int useSocket = 0; // 0 - false 1 - true
  int delay = 5000;
};
#endif
#ifdef ESP_SWITCH_02
struct ConfigData {
  char deviceUUID[40] = "NEW"; //unique id of the device globally if "UNCLAIMED"
  char deviceTYPE[20] = "SWITCH-02"; //"Switch-01" / "TEMPHUMIDITYSENSOR" / "MOTIONDETECTOR"
  char version[10] = "1.0"; //1.0
  char claimedID[40] = "NONE"; // ID of user who claims this device
  char chipID[40] = ""; // wifi chip id for uniue id of the chip
  int updateDelay = 2; //seconds to wait between each update to server
  int useSocket = 0; // 0 - false 1 - true
  int delay = 5000;
};
#endif
#ifdef ESP_SWITCH_03
struct ConfigData {
  char deviceUUID[40] = "NEW"; //unique id of the device globally if "UNCLAIMED"
  char deviceTYPE[20] = "SWITCH-03"; //"Switch-01" / "TEMPHUMIDITYSENSOR" / "MOTIONDETECTOR"
  char version[10] = "1.0"; //1.0
  char claimedID[40] = "NONE"; // ID of user who claims this device
  char chipID[40] = ""; // wifi chip id for uniue id of the chip
  int updateDelay = 1; //seconds to wait between each update to server
  int useSocket = 0; // 0 - false 1 - true
  int delay = 5000;
};
#endif
#ifdef ESP_SWITCH_04
struct ConfigData {
  char deviceUUID[40] = "NEW"; //unique id of the device globally if "UNCLAIMED"
  char deviceTYPE[20] = "SWITCH-04"; //"Switch-01" / "TEMPHUMIDITYSENSOR" / "MOTIONDETECTOR"
  char version[10] = "1.0"; //1.0
  char claimedID[40] = "NONE"; // ID of user who claims this device
  char chipID[40] = ""; // wifi chip id for uniue id of the chip
  int updateDelay = 1; //seconds to wait between each update to server
  int useSocket = 0; // 0 - false 1 - true
  int delay = 5000;
};
#endif
#ifdef ESP_TEMP_HUMIDITY
struct ConfigData {
  char deviceUUID[40] = "NEW"; //unique id of the device globally if "UNCLAIMED"
  char deviceTYPE[20] = "TEMP_HUMIDITY"; //"Switch-01" / "TEMPHUMIDITYSENSOR" / "MOTIONDETECTOR"
  char version[10] = "1.0"; //1.0
  char claimedID[40] = "NONE"; // ID of user who claims this device
  char chipID[40] = ""; // wifi chip id for uniue id of the chip
  int updateDelay = 60; //seconds to wait between each update to server
  int useSocket = 0; // 0 - false 1 - true
  int delay = 5000;
};
#endif
#if !defined(ESP_SWITCH_01) && !defined(ESP_SWITCH_02) && !defined(ESP_SWITCH_03) && !defined(ESP_SWITCH_04) && !defined(ESP_TEMP_HUMIDITY)
struct ConfigData {
  char deviceUUID[40] = "NEW"; //unique id of the device globally if "UNCLAIMED"
  char deviceTYPE[20] = "UNKNOWN"; //"Switch-01" / "TEMPHUMIDITYSENSOR" / "MOTIONDETECTOR"
  char version[10] = "1.0"; //1.0
  char claimedID[40] = "NONE"; // ID of user who claims this device
  char chipID[40] = ""; // wifi chip id for uniue id of the chip
  int updateDelay = 60; //seconds to wait between each update to server
  int useSocket = 0; // 0 - false 1 - true
  int delay = 5000;
};

#endif
#endif

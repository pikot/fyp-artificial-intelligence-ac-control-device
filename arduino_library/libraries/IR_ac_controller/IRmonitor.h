/*
  IRmonitor.h - Library for controlling the AC
  Created by Eddy Lau, March 17, 2020.
*/
#ifndef IRmonitor_h
#define IRmonitor_h

#include <IRremote.h>
#include "Arduino.h"

#define TOTAL_SIGNALS 16
#define SIGNAL_LENGTH 99

class IRmonitor{
  public:
    int fanspeed = 1;
    int temperature = 24;
    int swing_state = 0;
    int power_state = 0;
    const int high = 1600;
    const int low = 500;

    unsigned int wave[SIGNAL_LENGTH] = {4450,4250,600,1550,650,450,650,1500,600,1600,600,450,600,500,600,1550,600,500,600,450,600,1600,550,500,600,500,600,1550,600,1550,600,500,650,1500,600,1550,650,450,600,1550,700,1500,600,1550,600,1550,550,1600,650,1500,600,500,600,1550,600,500,600,450,650,450,600,500,600,450,650,450,600,500,550,1600,600,500,600,450,650,450,600,500,600,450,650,450,600,1550,650,450,550,1600,600,1550,600,1600,600,1550,650,1500,600,1550,500};
    unsigned int off_wave[SIGNAL_LENGTH] = {4300,4400,600,1550,650,450,600,1550,600,1550,600,500,600,450,650,1550,600,450,600,500,650,1500,600,500,600,500,600,1550,600,1550,600,500,600,1550,650,450,600,1550,600,1550,650,1500,650,1500,600,500,600,1550,700,1500,600,1550,650,450,600,450,650,450,600,450,650,1550,600,450,650,450,650,1500,700,1500,600,1550,600,450,650,450,650,450,600,450,700,400,650,450,600,450,650,450,650,1500,600,1600,600,1550,600,1550,600,1550,500};
    const int fanspeed_mask[5][7] = {{-1,35,37,39,51,53,55},
                                     {1,1,0,0,0,1,1},
                                     {2,0,1,0,1,0,1},
                                     {3,0,0,1,1,1,0},
                                     {4,1,0,1,0,1,0}};
    const int temp_mask[15][9] = {{-1,67,69,71,73,83,85,87,89},
                                  {30,1,0,1,1,0,1,0,0},
                                  {29,1,0,1,0,0,1,0,1},
                                  {28,1,0,0,0,0,1,1,1},
                                  {27,1,0,0,1,0,1,1,0},
                                  {26,1,1,0,1,0,0,1,0},
                                  {25,1,1,0,0,0,0,1,1},
                                  {24,0,1,0,0,1,0,1,1},
                                  {23,0,1,0,1,1,0,1,0},
                                  {22,0,1,1,1,1,0,0,0},
                                  {21,0,1,1,0,1,0,0,1},
                                  {20,0,0,1,0,1,1,0,1},
                                  {19,0,0,1,1,1,1,0,0},
                                  {18,0,0,0,1,1,1,1,0},
                                  {17,0,0,0,0,1,1,1,1}};
    // 1: power on, 0: power off
    const int power_mask[3][3] = {{-1,45,61},
                                  {1,1,0},
                                  {0,0,1}};

    const String commands[3] = {{"power"},{"temp"},{"fanspeed"}};

    IRmonitor();

    bool checkCommand(String input_command);

    int get_command(String input_command);

    int get_command_value(String input_command, int i);

    void sendCommand(IRsend &irsend, String input_command);

    void sendIR(IRsend &irsend, unsigned int raw[], int rawlen);

    private:
      void translate_signal(unsigned int *send_wave);

      void assign_mask_value(unsigned int *send_wave, int mask_location[], int mask_value[], int mask_length);

};

#endif

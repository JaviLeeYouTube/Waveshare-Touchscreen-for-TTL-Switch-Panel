// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: UI v5

#ifndef _UI_V4_TEST_UI_H
#define _UI_V4_TEST_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"



#ifndef UI_H
#define UI_H

void ui_Screen1_screen_init(void);
void ui_Setup_Screen_screen_init(void);
void ui_init(void);
void sendControlByte(void);
void update_button_label(lv_obj_t * button, const char * text);


#endif
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
void ui_event_Screen1(lv_event_t * e);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Panel1;
void ui_event_AUX_1(lv_event_t * e);
extern lv_obj_t * ui_AUX_1;
extern lv_obj_t * ui_Label_1;
void ui_event_AUX_2(lv_event_t * e);
extern lv_obj_t * ui_AUX_2;
extern lv_obj_t * ui_Label_2;
void ui_event_AUX_3(lv_event_t * e);
extern lv_obj_t * ui_AUX_3;
extern lv_obj_t * ui_Label_3;
void ui_event_AUX_4(lv_event_t * e);
extern lv_obj_t * ui_AUX_4;
extern lv_obj_t * ui_Label_4;
void ui_event_AUX_5(lv_event_t * e);
extern lv_obj_t * ui_AUX_5;
extern lv_obj_t * ui_Label_5;
void ui_event_AUX_6(lv_event_t * e);
extern lv_obj_t * ui_AUX_6;
extern lv_obj_t * ui_Label_6;
void ui_event_AUX_7(lv_event_t * e);
extern lv_obj_t * ui_AUX_7;
extern lv_obj_t * ui_Label_7;
void ui_event_AUX_8(lv_event_t * e);
extern lv_obj_t * ui_AUX_8;
extern lv_obj_t * ui_Label_8;
void ui_event_ALL_ON(lv_event_t * e);
extern lv_obj_t * ui_ALL_ON;
extern lv_obj_t * ui_Label10;
void ui_event_ALL_OFF(lv_event_t * e);
extern lv_obj_t * ui_ALL_OFF;
extern lv_obj_t * ui_Label11;
extern lv_obj_t * ui_Battery_Panel;
void ui_event_Battery_Gauge(lv_event_t * e);
extern lv_obj_t * ui_Battery_Gauge;
extern lv_obj_t * ui_Voltage_Meter;
extern lv_obj_t * ui_Battery_Voltage_Label;
extern lv_obj_t * ui_voltage_label;
void ui_event_Setup_Button(lv_event_t * e);
extern lv_obj_t * ui_Setup_Button;
void ui_event_Label1(lv_event_t * e);
extern lv_obj_t * ui_Label1;
// CUSTOM VARIABLES
extern lv_obj_t * uic_AUX_1;
extern lv_obj_t * uic_Label_1;
extern lv_obj_t * uic_AUX_2;
extern lv_obj_t * uic_Label_2;
extern lv_obj_t * uic_AUX_3;
extern lv_obj_t * uic_Label_3;
extern lv_obj_t * uic_AUX_4;
extern lv_obj_t * uic_Label_4;
extern lv_obj_t * uic_AUX_5;
extern lv_obj_t * uic_Label_5;
extern lv_obj_t * uic_AUX_6;
extern lv_obj_t * uic_Label_6;
extern lv_obj_t * uic_AUX_7;
extern lv_obj_t * uic_Label_7;
extern lv_obj_t * uic_AUX_8;
extern lv_obj_t * uic_Label_8;
extern lv_obj_t * uic_ALL_ON;
extern lv_obj_t * uic_ALL_OFF;
extern lv_obj_t * uic_Battery_Panel;
extern lv_obj_t * uic_Battery_Gauge;
extern lv_obj_t * uic_Voltage_Meter;
extern lv_obj_t * uic_Battery_Voltage_Label;
extern lv_obj_t * uic_voltage_label;

// SCREEN: ui_Setup_Screen
void ui_Setup_Screen_screen_init(void);
extern lv_obj_t * ui_Setup_Screen;
void ui_event_ta_aux_1(lv_event_t * e);
extern lv_obj_t * ui_ta_aux_1;
void ui_event_ta_aux_2(lv_event_t * e);
extern lv_obj_t * ui_ta_aux_2;
void ui_event_ta_aux_3(lv_event_t * e);
extern lv_obj_t * ui_ta_aux_3;
void ui_event_ta_aux_4(lv_event_t * e);
extern lv_obj_t * ui_ta_aux_4;
void ui_event_ta_aux_5(lv_event_t * e);
extern lv_obj_t * ui_ta_aux_5;
void ui_event_ta_aux_6(lv_event_t * e);
extern lv_obj_t * ui_ta_aux_6;
void ui_event_ta_aux_7(lv_event_t * e);
extern lv_obj_t * ui_ta_aux_7;
void ui_event_ta_aux_8(lv_event_t * e);
extern lv_obj_t * ui_ta_aux_8;
extern lv_obj_t * ui_Keyboard2;
void ui_event_Save_Button(lv_event_t * e);
extern lv_obj_t * ui_Save_Button;
void ui_event_Save_Label(lv_event_t * e);
extern lv_obj_t * ui_Save_Label;
// CUSTOM VARIABLES
extern lv_obj_t * uic_ta_aux_1;
extern lv_obj_t * uic_ta_aux_2;
extern lv_obj_t * uic_ta_aux_3;
extern lv_obj_t * uic_ta_aux_4;
extern lv_obj_t * uic_ta_aux_5;
extern lv_obj_t * uic_ta_aux_6;
extern lv_obj_t * uic_ta_aux_7;
extern lv_obj_t * uic_ta_aux_8;
extern lv_obj_t * uic_Save_Button;
extern lv_obj_t * uic_Save_Label;

// EVENTS

extern lv_obj_t * ui____initial_actions0;

// UI INIT
void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: UI v5

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x2B2B35), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel1, 780);
    lv_obj_set_height(ui_Panel1, 460);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel1, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x2E332C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_border_color(ui_Panel1, lv_color_hex(0x000000), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel1, 255, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel1, 2, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Panel1, LV_BORDER_SIDE_FULL, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_AUX_1 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_AUX_1, 120);
    lv_obj_set_height(ui_AUX_1, 140);
    lv_obj_set_x(ui_AUX_1, -320);
    lv_obj_set_y(ui_AUX_1, -20);
    lv_obj_set_align(ui_AUX_1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_AUX_1, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_AUX_1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_radius(ui_AUX_1, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_1, lv_color_hex(0x4D4B4B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_AUX_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_AUX_1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_AUX_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_AUX_1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_AUX_1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_AUX_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_AUX_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_1, lv_color_hex(0x268A38), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_AUX_1, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Label_1 = lv_label_create(ui_AUX_1);
    lv_obj_set_width(ui_Label_1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_1, "");
    lv_obj_set_style_text_color(ui_Label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_1, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AUX_2 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_AUX_2, 120);
    lv_obj_set_height(ui_AUX_2, 140);
    lv_obj_set_x(ui_AUX_2, -160);
    lv_obj_set_y(ui_AUX_2, -20);
    lv_obj_set_align(ui_AUX_2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_AUX_2, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_AUX_2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_radius(ui_AUX_2, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_2, lv_color_hex(0x4D4B4B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_AUX_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_AUX_2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_AUX_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_AUX_2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_AUX_2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_2, lv_color_hex(0x268A38), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_AUX_2, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Label_2 = lv_label_create(ui_AUX_2);
    lv_obj_set_width(ui_Label_2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_2, "");
    lv_obj_set_style_text_color(ui_Label_2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_2, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AUX_3 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_AUX_3, 120);
    lv_obj_set_height(ui_AUX_3, 140);
    lv_obj_set_x(ui_AUX_3, 0);
    lv_obj_set_y(ui_AUX_3, -20);
    lv_obj_set_align(ui_AUX_3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_AUX_3, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_AUX_3, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_radius(ui_AUX_3, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_3, lv_color_hex(0x4D4B4B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_AUX_3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_AUX_3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_AUX_3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_AUX_3, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_AUX_3, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_3, lv_color_hex(0x268A38), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_AUX_3, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Label_3 = lv_label_create(ui_AUX_3);
    lv_obj_set_width(ui_Label_3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_3, "");
    lv_obj_set_style_text_color(ui_Label_3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_3, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AUX_4 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_AUX_4, 120);
    lv_obj_set_height(ui_AUX_4, 140);
    lv_obj_set_x(ui_AUX_4, 160);
    lv_obj_set_y(ui_AUX_4, -20);
    lv_obj_set_align(ui_AUX_4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_AUX_4, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_AUX_4, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_radius(ui_AUX_4, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_4, lv_color_hex(0x4D4B4B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_AUX_4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_AUX_4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_AUX_4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_AUX_4, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_AUX_4, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_4, lv_color_hex(0x268A38), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_AUX_4, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Label_4 = lv_label_create(ui_AUX_4);
    lv_obj_set_width(ui_Label_4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_4, "");
    lv_obj_set_style_text_color(ui_Label_4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_4, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AUX_5 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_AUX_5, 120);
    lv_obj_set_height(ui_AUX_5, 140);
    lv_obj_set_x(ui_AUX_5, -320);
    lv_obj_set_y(ui_AUX_5, 140);
    lv_obj_set_align(ui_AUX_5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_AUX_5, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_AUX_5, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_radius(ui_AUX_5, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_5, lv_color_hex(0x4D4B4B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_AUX_5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_AUX_5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_AUX_5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_AUX_5, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_AUX_5, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_5, lv_color_hex(0x268A38), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_AUX_5, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Label_5 = lv_label_create(ui_AUX_5);
    lv_obj_set_width(ui_Label_5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_5, "");
    lv_obj_set_style_text_color(ui_Label_5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_5, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AUX_6 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_AUX_6, 120);
    lv_obj_set_height(ui_AUX_6, 140);
    lv_obj_set_x(ui_AUX_6, -160);
    lv_obj_set_y(ui_AUX_6, 140);
    lv_obj_set_align(ui_AUX_6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_AUX_6, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_AUX_6, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_radius(ui_AUX_6, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_6, lv_color_hex(0x4D4B4B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_AUX_6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_AUX_6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_AUX_6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_AUX_6, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_AUX_6, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_6, lv_color_hex(0x268A38), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_AUX_6, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Label_6 = lv_label_create(ui_AUX_6);
    lv_obj_set_width(ui_Label_6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_6, "");
    lv_obj_set_style_text_color(ui_Label_6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_6, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AUX_7 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_AUX_7, 120);
    lv_obj_set_height(ui_AUX_7, 140);
    lv_obj_set_x(ui_AUX_7, 0);
    lv_obj_set_y(ui_AUX_7, 140);
    lv_obj_set_align(ui_AUX_7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_AUX_7, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_AUX_7, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_radius(ui_AUX_7, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_7, lv_color_hex(0x4D4B4B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_AUX_7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_AUX_7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_AUX_7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_AUX_7, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_AUX_7, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_7, lv_color_hex(0x268A38), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_AUX_7, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Label_7 = lv_label_create(ui_AUX_7);
    lv_obj_set_width(ui_Label_7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_7, "");
    lv_obj_set_style_text_color(ui_Label_7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_7, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AUX_8 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_AUX_8, 120);
    lv_obj_set_height(ui_AUX_8, 140);
    lv_obj_set_x(ui_AUX_8, 160);
    lv_obj_set_y(ui_AUX_8, 140);
    lv_obj_set_align(ui_AUX_8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_AUX_8, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_AUX_8, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_radius(ui_AUX_8, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_8, lv_color_hex(0x4D4B4B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_AUX_8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_AUX_8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_AUX_8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_AUX_8, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_AUX_8, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_AUX_8, lv_color_hex(0x268A38), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_AUX_8, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Label_8 = lv_label_create(ui_AUX_8);
    lv_obj_set_width(ui_Label_8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_8, "");
    lv_obj_set_style_text_color(ui_Label_8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_8, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ALL_ON = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_ALL_ON, 120);
    lv_obj_set_height(ui_ALL_ON, 140);
    lv_obj_set_x(ui_ALL_ON, 320);
    lv_obj_set_y(ui_ALL_ON, -20);
    lv_obj_set_align(ui_ALL_ON, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ALL_ON, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_ALL_ON, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_radius(ui_ALL_ON, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ALL_ON, lv_color_hex(0x1E5130), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ALL_ON, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_ALL_ON, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_ALL_ON, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_ALL_ON, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_ALL_ON, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ALL_ON, lv_color_hex(0x268A38), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_ALL_ON, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label10 = lv_label_create(ui_ALL_ON);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "ALL\nON");
    lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label10, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ALL_OFF = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_ALL_OFF, 120);
    lv_obj_set_height(ui_ALL_OFF, 140);
    lv_obj_set_x(ui_ALL_OFF, 320);
    lv_obj_set_y(ui_ALL_OFF, 140);
    lv_obj_set_align(ui_ALL_OFF, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ALL_OFF, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_radius(ui_ALL_OFF, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ALL_OFF, lv_color_hex(0x702C2C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ALL_OFF, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_ALL_OFF, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_ALL_OFF, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_ALL_OFF, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_ALL_OFF, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ALL_OFF, lv_color_hex(0x268A38), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_ALL_OFF, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_ALL_OFF, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_ALL_OFF, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label11 = lv_label_create(ui_ALL_OFF);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "ALL\nOFF");
    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label11, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Battery_Panel = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Battery_Panel, 266);
    lv_obj_set_height(ui_Battery_Panel, 100);
    lv_obj_set_x(ui_Battery_Panel, -239);
    lv_obj_set_y(ui_Battery_Panel, -160);
    lv_obj_set_align(ui_Battery_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Battery_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Battery_Panel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Battery_Panel, lv_color_hex(0x292831), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery_Panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Battery_Gauge = lv_bar_create(ui_Battery_Panel);
    lv_bar_set_value(ui_Battery_Gauge, 100, LV_ANIM_OFF);
    lv_bar_set_start_value(ui_Battery_Gauge, 5, LV_ANIM_OFF);
    lv_obj_set_width(ui_Battery_Gauge, 260);
    lv_obj_set_height(ui_Battery_Gauge, 30);
    lv_obj_set_x(ui_Battery_Gauge, 0);
    lv_obj_set_y(ui_Battery_Gauge, -5);
    lv_obj_set_align(ui_Battery_Gauge, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_style_radius(ui_Battery_Gauge, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Battery_Gauge, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery_Gauge, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_Battery_Gauge, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Battery_Gauge, lv_color_hex(0xFF0000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery_Gauge, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Battery_Gauge, lv_color_hex(0x2DA041), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Battery_Gauge, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Battery_Gauge, 160, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Battery_Gauge, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Battery_Gauge, lv_color_hex(0x000000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Battery_Gauge, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Battery_Gauge, 1, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Battery_Gauge, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_Voltage_Meter = lv_label_create(ui_Battery_Gauge);
    lv_obj_set_width(ui_Voltage_Meter, 250);
    lv_obj_set_height(ui_Voltage_Meter, 17);
    lv_obj_set_align(ui_Voltage_Meter, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Voltage_Meter, " 9    10    11    12    13    14    15");
    lv_obj_set_style_text_color(ui_Voltage_Meter, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Voltage_Meter, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Voltage_Meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Voltage_Meter, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Voltage_Meter, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Voltage_Meter, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Battery_Voltage_Label = lv_label_create(ui_Battery_Panel);
    lv_obj_set_width(ui_Battery_Voltage_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Battery_Voltage_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Battery_Voltage_Label, 0);
    lv_obj_set_y(ui_Battery_Voltage_Label, 14);
    lv_obj_set_align(ui_Battery_Voltage_Label, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Battery_Voltage_Label, "Battery Voltage:      ");
    lv_obj_set_style_text_color(ui_Battery_Voltage_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Battery_Voltage_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Battery_Voltage_Label, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_voltage_label = lv_label_create(ui_Battery_Panel);
    lv_obj_set_width(ui_voltage_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_voltage_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_voltage_label, 85);
    lv_obj_set_y(ui_voltage_label, -25);
    lv_obj_set_align(ui_voltage_label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_voltage_label, "");
    lv_obj_set_style_text_color(ui_voltage_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_voltage_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_voltage_label, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Setup_Button = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Setup_Button, 120);
    lv_obj_set_height(ui_Setup_Button, 80);
    lv_obj_set_x(ui_Setup_Button, 320);
    lv_obj_set_y(ui_Setup_Button, -160);
    lv_obj_set_align(ui_Setup_Button, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Setup_Button, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Setup_Button, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Setup_Button, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Setup_Button, lv_color_hex(0x292831), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Setup_Button, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Setup_Button, lv_color_hex(0x4A4857), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Setup_Button, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label1 = lv_label_create(ui_Setup_Button);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "SETUP");
    lv_obj_add_flag(ui_Label1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_AUX_1, ui_event_AUX_1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_AUX_2, ui_event_AUX_2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_AUX_3, ui_event_AUX_3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_AUX_4, ui_event_AUX_4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_AUX_5, ui_event_AUX_5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_AUX_6, ui_event_AUX_6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_AUX_7, ui_event_AUX_7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_AUX_8, ui_event_AUX_8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ALL_ON, ui_event_ALL_ON, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ALL_OFF, ui_event_ALL_OFF, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Battery_Gauge, ui_event_Battery_Gauge, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Label1, ui_event_Label1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Setup_Button, ui_event_Setup_Button, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen1, ui_event_Screen1, LV_EVENT_ALL, NULL);
    uic_AUX_1 = ui_AUX_1;
    uic_Label_1 = ui_Label_1;
    uic_AUX_2 = ui_AUX_2;
    uic_Label_2 = ui_Label_2;
    uic_AUX_3 = ui_AUX_3;
    uic_Label_3 = ui_Label_3;
    uic_AUX_4 = ui_AUX_4;
    uic_Label_4 = ui_Label_4;
    uic_AUX_5 = ui_AUX_5;
    uic_Label_5 = ui_Label_5;
    uic_AUX_6 = ui_AUX_6;
    uic_Label_6 = ui_Label_6;
    uic_AUX_7 = ui_AUX_7;
    uic_Label_7 = ui_Label_7;
    uic_AUX_8 = ui_AUX_8;
    uic_Label_8 = ui_Label_8;
    uic_ALL_ON = ui_ALL_ON;
    uic_ALL_OFF = ui_ALL_OFF;
    uic_Battery_Panel = ui_Battery_Panel;
    uic_Battery_Gauge = ui_Battery_Gauge;
    uic_Voltage_Meter = ui_Voltage_Meter;
    uic_Battery_Voltage_Label = ui_Battery_Voltage_Label;
    uic_voltage_label = ui_voltage_label;

}

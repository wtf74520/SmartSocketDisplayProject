#include <SPI.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup(void) {
  // 初始化彩屏
  tft.init();
  tft.fillScreen(TFT_BLACK);
  tft.setRotation(3);
  // 设置起始坐标(20, 10)，4 号字体
  tft.setCursor(20, 10, 4);
  // 设置文本颜色为白色，黑色文本背景
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  // 设置显示的文字，注意这里有个换行符 \n 产生的效果
  tft.println("hello");
 


  // 设置起始坐标(10, 140)，4 号字体，文本颜色绿色，无背景设置
  tft.setCursor(10, 60, 4);
  tft.setTextColor(TFT_GREEN);
  tft.println("Test  Text\n");


  // 设置起始坐标(70, 180)，字体不变，文本颜色蓝色，黄色文本背景
  tft.setCursor(10, 100);
  tft.setTextColor(TFT_BLUE, TFT_YELLOW);
  tft.println("Blue text");

  // 设置起始坐标(50, 220)，4 号字体，文本颜色黄色，无背景设置
  tft.setCursor(10, 150);
  tft.setTextFont(4);
  tft.setTextColor(TFT_YELLOW);
  tft.println("2023-09");

  // 设置起始坐标(50, 260)，7 号字体，文本颜色粉色，无背景设置
  tft.setCursor(10, 190);
  tft.setTextFont(7);
  tft.setTextColor(TFT_PINK);
  tft.println("20:35");
}

void loop() {
}
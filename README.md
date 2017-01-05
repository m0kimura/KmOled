# KmOled Adafruit OLEDデバイス操作

  #include <ESP_SSD1306.h>
  #include <Adafruit_GFX.h>
  #include <SPI.h>
  #include <Wire.h>
  #include "KmOled"

##オブジェクトの生成
  KmOled オブジェクト変数(「デバッグモード」);
    デバッグモード 1:デバッグ対応, 0:デバッグ非対応

##開始処理
  begin();

##テキスト書き込み
  textWrite(「テキスト」, 「文字の大きさ」, 「x位置」, 「y位置」);
    テキスト(String型):  表示するテキスト
    文字の大きさ(int型): 表示する文字の大きさ
      1:
      2:
      3:
      4:
    x位置(int型):        表示開始x位置をピクセルで指定します。
    y位置(int型):        表示開始y位置をピクセルで指定します。

##画面をクリア
  clear();


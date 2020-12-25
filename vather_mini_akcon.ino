//int sw_pins[] = {6,7,8,9,10,14,15,16};
//int joystick_pins[] = {2,3,4,5};
//int start = 0;
//int select = 1;
int sw_r1 = 2;
int val;
// スタートした時に１度だけ起動する
// スクラッチのハタをクリックした時の下のブロック
void setup() {
  pinMode(sw_r1,INPUT_PULLUP); // pinの2番をプルアップインプットモードにする
  Serial.begin(115200);
}

// 起動している間ずっと繰り返される
// スクラッチのずっとの中のブロック
void loop() {
  val = digitalRead(sw_r1);
  Serial.print("R1:");
  Serial.print(val);
  Serial.println();
  
}

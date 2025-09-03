#define R_LED 18   // 첫 번째 LED 핀
#define G_LED 17  // 두 번째 LED 핀

// Group1 수정 내용 사항

unsigned long previousMillis = 0; // 마지막으로 LED 상태를 바꾼 시간 저장
const long interval = 2000;       // 2초 간격으로 LED 상태 변경

bool ledState1 = false; // 첫 번째 LED 상태 (초기값: 꺼짐)
bool ledState2 = true;  // 두 번째 LED 상태 (초기값: 켜짐)

void setup() {
  pinMode(R_LED, OUTPUT); // 첫 번째 LED 출력 모드
  pinMode(G_LED, OUTPUT); // 두 번째 LED 출력 모드
  
  // 초기 LED 상태 출력
  digitalWrite(R_LED, ledState1);
  digitalWrite(G_LED, ledState2);
}

void loop(){
  unsigned long currentMillis = millis(); // 현재 경과 시간(밀리초) 읽기

  // 현재 시간에서 이전 시간을 뺀 값이 interval 이상일 때 LED 상태 변경
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis; // 이전 시간 갱신

    // LED 상태 반전 (ON ↔ OFF)
    ledState1 = !ledState1;
    ledState2 = !ledState2;

    // 새로운 LED 상태 출력
    digitalWrite(R_LED, ledState1);
    digitalWrite(G_LED, ledState2);
  }
}
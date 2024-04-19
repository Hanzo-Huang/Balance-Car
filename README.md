# Balance-Car

### GPIO configure

1. **Serial Wire**

   PA13 -> SWDIO

   PA14 -> SWCLK

2. **HSE**

   PD0 -> OSC_IN

   PD1 -> OSC_OUT

3. **Bluetooth UART**

   **USART3**

   PB10 -> USART3_TX

   RB11 -> USART3_RX

4. **MPU6050 I2C**

   **I2C1**

   PB8 -> I2C1_SCL

   PB9 -> I2C1_SDA

5. **HC-SR04**

   PB0 -> Trig

   PB1 -> Echo

6. **Battery**

   PA0 -> ADC1_IN0

7. **Motor**

   **M1**

   PB13 -> BIN1

   PB12 -> BIN2

   PA3 -> PWMB

   PA6 -> M1A

   PA7 -> M1B

   **M2**

   PB14 -> AIN1

   PB15 -> AIN2

   PA2 -> PWMA

   PB6 -> M2A

   PB7 -> M2B

8. **CH340 UART**

   **USART1**

   PA9 -> USART1_TX

   PA10 -> USART1_RX

9. **infrared**

   PA4 -> infrared

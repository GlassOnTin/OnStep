// -------------------------------------------------------------------------------------------------
// Pin map for OnStep using FYSETC F6 board (Mega2560)

#if defined(__AVR_ATmega2560__)

#define SS_MISO               50     //SPI_MISO_PIN PB3         

// Axis1 RA/Azm step/dir driver
#define Axis1_EN              38     // X-EN        PD7
#define Axis1_DIR             A1     // X-DIR       PF1
#define Axis1_DirPORT      PORTF
#define Axis1_DirBIT           1
#define Axis1_STEP            A0     // X-STEP      PF0
#define Axis1_StepPORT     PORTF    
#define Axis1_StepBIT          0    
#define Axis1_M0              71     // X_2208_RX   PG3
#define Axis1_M1              72     // X_2208_TX   PJ2
#define Axis1_M2              70     // X_CS        PG4
#define Axis1_M3        SS_MISO     // SPI MISO/Fault

// Axis2 Dec/Alt step/dir driver
#define Axis2_EN              A2     // Y-EN        PF2
#define Axis2_DIR             A7     // Y-DIR       PF7
#define Axis2_DirPORT      PORTF
#define Axis2_DirBIT           7
#define Axis2_STEP            A6     // Y-STEP      PF6
#define Axis2_StepPORT     PORTF
#define Axis2_StepBIT          6    
#define Axis2_M0              73     // Y_2208_RX   PJ3
#define Axis2_M1              75     // Y_2208_TX   PJ4
#define Axis2_M2              39     // Y_CS        PG2
#define Axis2_M3        SS_MISO     // SPI MISO/Fault

// Axis3 (Rotator) step/dir driver
#define Axis3_EN              A4     // Z-EN        PF4
#define Axis3_DIR             48     // Z-DIR       PL1
#define Axis3_DirPORT      PORTL
#define Axis3_DirBIT           1
#define Axis3_STEP            43     // Z-STEP      PL6
#define Axis3_StepPORT     PORTL    
#define Axis3_StepBIT          6    
#define Axis3_M0              78     // Z_2208_RX   PE2
#define Axis3_M1              79     // Z_2208_TX   PE6
#define Axis3_M2              74     // Z_CS        PJ7
#define Axis3_M3        SS_MISO     // SPI MISO/Fault

// Axis4 (Focuser1) step/dir driver
#define Axis4_EN              24     // E0-EN       PA4
#define Axis4_DIR             28     // E0-DIR      PA6
#define Axis4_DirPORT      PORTA
#define Axis4_DirBIT           6
#define Axis4_STEP            26     // E0-STEP     PA4
#define Axis4_StepPORT     PORTA
#define Axis4_StepBIT          4   
#define Axis4_M0              76     // E0_2208_RX  PJ5
#define Axis4_M1              77     // E0_2208_TX  PJ6
#define Axis4_M2              47     // E0_CS       PL2
#define Axis4_M3        SS_MISO     // SPI MISO/Fault

// Axis5 (Focuser2) step/dir driver
#define Axis5_EN              30     // E1-EN       PC7
#define Axis5_DIR             34     // E1-DIR      PC3
#define Axis5_DirPORT      PORTC
#define Axis5_DirBIT           3
#define Axis5_STEP            36     // E1-STEP     PC1
#define Axis5_StepPORT     PORTC
#define Axis5_StepBIT          1   
#define Axis5_M0              80     // E1_2208_RX  PE7
#define Axis5_M1              81     // E1_2208_TX  PD4
#define Axis5_M2              32     // E1_CS       PC5
#define Axis5_M3        SS_MISO     // SPI MISO/Fault

// Axis6 (Focuser3) step/dir driver
#define Axis6_EN              40     // E2-EN       PG1
#define Axis6_DIR             A3     // E2-DIR      PF3
#define Axis6_DirPORT      PORTF
#define Axis6_DirBIT           3
#define Axis6_STEP            A5     // E2-STEP     PF5
#define Axis6_StepPORT     PORTF   
#define Axis6_StepBIT          5
#define Axis6_M0              22     // E2_2208_RX  PA0
#define Axis6_M1              82     // E2_2208_TX  PD5
#define Axis6_M2              42     // E2_CS       PL7
#define Axis6_M3        SS_MISO     // SPI MISO/Fault

// ST4 interface
#define ST4RAw                14     // Y-MIN (TX3) PJ1
#define ST4DEs                15     // Y-MAX (RX3) PJ0
#define ST4DEn                A9     // X-MIN       PK1
#define ST4RAe                A10    // X-MAX       PK2

// Misc
#define LEDposPin             3      // LED-R       PE5
#define LEDnegPin             4      // LED-G       PG5
#define LEDneg2Pin            9      // LED-B       PH6
#define ReticlePin            13     // S1 Servo    PG5

#define PecPin                2      // Z-MAX       PE4
#define AnalogPecPin          A11    // AUX1_6      PK3

#define LimitPin              12     // Z-MIN       PB6

// For a piezo buzzer
#define TonePin               37     // EXP1_L4     PC0  ("BEEP")

// The PPS pin is a 5V logic input for GPS pulse-per-second
#define PpsPin                41     // EXP2_R1     PG0

// DS3234 RTC CS pin
#define DS3234_CS_PIN         53     // SD7,EXP2_R4 PB0

// BME280 CS pin
#define BME280_CS_PIN         49     // SD5,EXP2_L2 PL0

// SPI
#define SPI_MOSI_PIN          51     // SD6,EXP2_R3 PB2
#define SPI_MISO_PIN          50     // SD2,EXP2_L5 PB3
#define SPI_SCK_PIN           52     // SD3,EXP2_R5 PB1

// I2C (for other devices if needed)
#define I2C_SDA_PIN           20     // SDA         PD0 
#define I2C_SCL_PIN           21     // SCL         PD1

// Temperature sensors
#define Temp0Pin              A12    // T_E0        PK4   ("TE0", "THERMO0")
#define Temp1Pin              A13    // T_E1        PK5   ("TE1", "THERMO1")
#define Temp2Pin              A14    // T_E2        PK6   ("TE2", "THERMO2")
#define Temp3Pin              A15    // T_Bed       PK7   ("TB" , "THERMO3")

// Fans
#define Fan0Pin               44     // FAN0        PL5
#define Fan1Pin               45     // FAN1        PL4
#define Fan2Pin               46     // FAN2        PL3

// Heaters
#define Heater0Pin            5      // E0 MOSFET   PE3   ( "E0-OUT", "E0-Heater")
#define Heater1Pin            6      // E1 MOSFET   PH3   ( "E1-OUT", "E1-Heater")
#define Heater2Pin            7      // E2 MOSFET   PH4   ( "E2-OUT", "E2-Heater")
#define Heater3Pin            8      // BED MOSFET  PH5   ("BED-OUT", "Heated-Bed")

#else
#error "Wrong processor for this configuration!"

#endif

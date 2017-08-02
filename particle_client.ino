
Compiling code for photon

Including:
    ArduinoJson.h
    src\ArduinoJson.h
    particle_client.ino
attempting to compile firmware 
Processing  particle_client.ino
make -C ../modules/photon/user-part all
make[1]: Entering directory '/firmware/modules/photon/user-part'
make -C ../../../user 
make[2]: Entering directory '/firmware/user'
Building cpp file: particle_client.cpp
Invoking: ARM GCC CPP Compiler
mkdir -p ../build/target/user/platform-6-m
arm-none-eabi-gcc -DSTM32_DEVICE -DSTM32F2XX -DPLATFORM_THREADING=1 -DPLATFORM_ID=6 -DPLATFORM_NAME=photon -DUSBD_VID_SPARK=0x2B04 -DUSBD_PID_DFU=0xD006 -DUSBD_PID_CDC=0xC006 -DSPARK_PLATFORM -g3 -gdwarf-2 -Os -mcpu=cortex-m3 -mthumb -DINCLUDE_PLATFORM=1 -DPRODUCT_ID=6 -DPRODUCT_FIRMWARE_VERSION=65535 -DUSE_STDPERIPH_DRIVER -DDFU_BUILD_ENABLE -DSYSTEM_VERSION_STRING=0.6.2 -DRELEASE_BUILD -I./inc -I../wiring/inc -I../system/inc -I../services/inc -I../communication/src -I../hal/inc -I../hal/shared -I../hal/src/photon -I../hal/src/stm32f2xx -I../hal/src/stm32 -I../hal/src/photon/api -I../platform/shared/inc -I../platform/MCU/STM32F2xx/STM32_USB_Host_Driver/inc -I../platform/MCU/STM32F2xx/STM32_StdPeriph_Driver/inc -I../platform/MCU/STM32F2xx/STM32_USB_OTG_Driver/inc -I../platform/MCU/STM32F2xx/STM32_USB_Device_Driver/inc -I../platform/MCU/STM32F2xx/SPARK_Firmware_Driver/inc -I../platform/MCU/shared/STM32/inc -I../platform/MCU/STM32F2xx/CMSIS/Include -I../platform/MCU/STM32F2xx/CMSIS/Device/ST/Include -I../dynalib/inc -I -I./libraries -I -I -I -I -I. -MD -MP -MF ../build/target/user/platform-6-mparticle_client.o.d -ffunction-sections -fdata-sections -Wall -Wno-switch -Wno-error=deprecated-declarations -fmessage-length=0 -fno-strict-aliasing -DSPARK=1 -DPARTICLE=1 -DSTART_DFU_FLASHER_SERIAL_SPEED=14400 -DSTART_YMODEM_FLASHER_SERIAL_SPEED=28800 -DSPARK_PLATFORM_NET=BCM9WCDUSI09 -fno-builtin-malloc -fno-builtin-free -fno-builtin-realloc  -DLOG_INCLUDE_SOURCE_INFO=1 -DPARTICLE_USER_MODULE -DUSE_THREADING=0 -DUSE_SPI=SPI -DUSE_CS=A2 -DUSE_SPI=SPI -DUSE_CS=A2 -DUSE_THREADING=0 -DUSER_FIRMWARE_IMAGE_SIZE=0x20000 -DUSER_FIRMWARE_IMAGE_LOCATION=0x80A0000 -DMODULAR_FIRMWARE=1 -DMODULE_VERSION=4 -DMODULE_FUNCTION=5 -DMODULE_INDEX=1 -DMODULE_DEPENDENCY=4,2,108 -D_WINSOCK_H -D_GNU_SOURCE -DLOG_MODULE_CATEGORY="\"app\""  -fno-exceptions -fno-rtti -fcheck-new -std=gnu++11 -c -o ../build/target/user/platform-6-mparticle_client.o particle_client.cpp
particle_client.ino:6:5: error: stray '\' in program
     srcArduinoJson.h
     ^
particle_client.ino:2:1: error: 'Compiling' does not name a type
 Compiling code for photon
 ^
../build/module.mk:267: recipe for target '../build/target/user/platform-6-mparticle_client.o' failed
make[2]: Leaving directory '/firmware/user'
make[2]: *** [../build/target/user/platform-6-mparticle_client.o] Error 1
../../../build/recurse.mk:11: recipe for target 'user' failed
make[1]: Leaving directory '/firmware/modules/photon/user-part'
make[1]: *** [user] Error 2
../build/recurse.mk:11: recipe for target 'modules/photon/user-part' failed
make: *** [modules/photon/user-part] Error 2

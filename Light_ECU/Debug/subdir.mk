################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Light_control.c \
../Seven_Seg.c \
../Timer0.c \
../TrafficLight_ECU.c \
../dc_motor.c \
../gpio.c \
../pwm.c 

OBJS += \
./Light_control.o \
./Seven_Seg.o \
./Timer0.o \
./TrafficLight_ECU.o \
./dc_motor.o \
./gpio.o \
./pwm.o 

C_DEPS += \
./Light_control.d \
./Seven_Seg.d \
./Timer0.d \
./TrafficLight_ECU.d \
./dc_motor.d \
./gpio.d \
./pwm.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



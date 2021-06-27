################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/main.c \
../Src/syscalls.c \
../Src/sysmem.c \
../Src/uart.c 

OBJS += \
./Src/main.o \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/uart.o 

C_DEPS += \
./Src/main.d \
./Src/syscalls.d \
./Src/sysmem.d \
./Src/uart.d 


# Each subdirectory must supply rules for building sources it contributes
Src/main.o: ../Src/main.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F411VETx -DSTM32 -DSTM32F4 -c -I../Inc -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/CMSIS" -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/inc" -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/main.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/syscalls.o: ../Src/syscalls.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F411VETx -DSTM32 -DSTM32F4 -c -I../Inc -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/CMSIS" -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/inc" -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/syscalls.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/sysmem.o: ../Src/sysmem.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F411VETx -DSTM32 -DSTM32F4 -c -I../Inc -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/CMSIS" -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/inc" -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/sysmem.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/uart.o: ../Src/uart.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F411VETx -DSTM32 -DSTM32F4 -c -I../Inc -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/CMSIS" -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/inc" -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"F:/00 - C embedded/STM32F411_DISCO/STM32F4/F411/STM32F411_DRIVER/drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/uart.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"


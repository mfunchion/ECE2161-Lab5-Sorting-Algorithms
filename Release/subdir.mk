################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Bubble_Sort.cpp \
../helper_fns.cpp \
../main.cpp 

CPP_DEPS += \
./Bubble_Sort.d \
./helper_fns.d \
./main.d 

OBJS += \
./Bubble_Sort.o \
./helper_fns.o \
./main.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./Bubble_Sort.d ./Bubble_Sort.o ./helper_fns.d ./helper_fns.o ./main.d ./main.o

.PHONY: clean--2e-


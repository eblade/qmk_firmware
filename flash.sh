echo "Reset it now!"
sleep 3
dfu-programmer atmega32u4 erase --force
dfu-programmer atmega32u4 flash 40percentclub_gherkin_johan.hex
dfu-programmer atmega32u4 reset

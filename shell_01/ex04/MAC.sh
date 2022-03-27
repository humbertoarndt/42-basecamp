#!/bin/bash
#ifconfig -a | grep -iE '([a-z0-9]{2}:){5}..' | cut -c15- 
#ifconfig | grep -iE '([a-f0-9]{2}:){5}' | awk '{print $2,"",$3 " "$4,"",$5}'
ifconfig | grep -iE '([a-f0-9]{2}:){5}' | sed 's/ *ether *//'
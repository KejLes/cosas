#!/bin/sh
ifconfig | grep -E "ether|HWaddr" | awk '{print $2}'

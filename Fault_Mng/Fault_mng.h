#include<stdint.h>

void sens_fault_check();

enum sensor_io_pin_stat 
	{SNA_Both_gnd=0,
	 SNV_Both_gnd,
	 SNA_Revs_conn,
	 SNV_Revs_conn,
	 SNA_Prop_conn,
	 No_fault,
	 SNA_Both_high,
	 SNV_Both_high};

typedef struct 
	{
		uint8_t Sens_pin1:2;
		uint8_t Sens_pin2:2;
		uint8_t Sens_IP_stat:1;
	}Sens_stat_check;
/** CAN message encoder/decoder: automatically generated - do not edit
  * Generated by dbcc: See https://github.com/howerj/dbcc */
#ifndef BHZ3_H
#define BHZ3_H

/* If the contents of this file have caused breaking changes for you, you could try using
   an older version of the generator. You can specify this on the command line with
   the -n option. */
#define DBCC_GENERATOR_VERSION (3)

#include <stdint.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" { 
#endif

#ifndef PREPACK
#define PREPACK
#endif

#ifndef POSTPACK
#define POSTPACK
#endif

#ifndef DBCC_TIME_STAMP
#define DBCC_TIME_STAMP
typedef uint32_t dbcc_time_stamp_t; /* Time stamp for message; you decide on units */
#endif

#ifndef DBCC_STATUS_ENUM
#define DBCC_STATUS_ENUM
typedef enum {
	DBCC_SIG_STAT_UNINITIALIZED_E = 0, /* Message never sent/received */
	DBCC_SIG_STAT_OK_E            = 1, /* Message ok */
	DBCC_SIG_STAT_ERROR_E         = 2, /* Encode/Decode/Timestamp/Any error */
} dbcc_signal_status_e;
#endif

#define CAN_ID_BHZ3_VOLUMENSTROM_SOLAR (470827008) /* 0x1c104000 */

typedef PREPACK struct {
	int16_t BHZ3_VOLUMENSTROM_SOLAR; /* scaling 0.1, offset 0.0, units l/min  */
} POSTPACK can_0x1c104000_BHZ3_VOLUMENSTROM_SOLAR_t;

typedef PREPACK struct {
	dbcc_time_stamp_t can_0x1c104000_BHZ3_VOLUMENSTROM_SOLAR_time_stamp_rx;
	unsigned can_0x1c104000_BHZ3_VOLUMENSTROM_SOLAR_status : 2;
	unsigned can_0x1c104000_BHZ3_VOLUMENSTROM_SOLAR_tx : 1;
	unsigned can_0x1c104000_BHZ3_VOLUMENSTROM_SOLAR_rx : 1;
	can_0x1c104000_BHZ3_VOLUMENSTROM_SOLAR_t can_0x1c104000_BHZ3_VOLUMENSTROM_SOLAR;
} POSTPACK can_obj_bhz3_h_t;

int unpack_message(can_obj_bhz3_h_t *o, const unsigned long id, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp);
int pack_message(can_obj_bhz3_h_t *o, const unsigned long id, uint64_t *data);
int print_message(const can_obj_bhz3_h_t *o, const unsigned long id, FILE *output);

int decode_can_0x1c104000_BHZ3_VOLUMENSTROM_SOLAR(const can_obj_bhz3_h_t *o, double *out);
int encode_can_0x1c104000_BHZ3_VOLUMENSTROM_SOLAR(can_obj_bhz3_h_t *o, double in);


#ifdef __cplusplus
} 
#endif

#endif

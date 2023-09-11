/* Generated by DBCC, see <https://github.com/howerj/dbcc> */
#include "eos7.h"
#include <inttypes.h>
#include <assert.h>

#define UNUSED(X) ((void)(X))

static inline uint64_t reverse_byte_order(uint64_t x) {
	x = (x & 0x00000000FFFFFFFF) << 32 | (x & 0xFFFFFFFF00000000) >> 32;
	x = (x & 0x0000FFFF0000FFFF) << 16 | (x & 0xFFFF0000FFFF0000) >> 16;
	x = (x & 0x00FF00FF00FF00FF) << 8  | (x & 0xFF00FF00FF00FF00) >> 8;
	return x;
}

static inline int print_helper(int r, int print_return_value) {
	return ((r >= 0) && (print_return_value >= 0)) ? r + print_return_value : -1;
}

static int pack_can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM(can_obj_eos7_h_t *o, uint64_t *data) {
	assert(o);
	assert(data);
	register uint64_t x;
	register uint64_t m = 0;
	/* EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM: start-bit 15, length 16, endianess motorola, scaling 1, offset 0 */
	x = ((uint16_t)(o->can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM.EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM)) & 0xffff;
	x <<= 40; 
	m |= x;
	*data = reverse_byte_order(m);
	o->can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM_tx = 1;
	return 4;
}

static int unpack_can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM(can_obj_eos7_h_t *o, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp) {
	assert(o);
	assert(dlc <= 8);
	register uint64_t x;
	register uint64_t m = reverse_byte_order(data);
	if (dlc < 4)
		return -1;
	/* EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM: start-bit 15, length 16, endianess motorola, scaling 1, offset 0 */
	x = (m >> 40) & 0xffff;
	o->can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM.EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM = x;
	o->can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM_rx = 1;
	o->can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM_time_stamp_rx = time_stamp;
	return 4;
}

int decode_can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM(const can_obj_eos7_h_t *o, int16_t *out) {
	assert(o);
	assert(out);
	int16_t rval = (int16_t)(o->can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM.EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM);
	*out = rval;
	return 0;
}

int encode_can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM(can_obj_eos7_h_t *o, int16_t in) {
	assert(o);
	o->can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM.EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM = in;
	return 0;
}

int print_can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM(const can_obj_eos7_h_t *o, FILE *output) {
	assert(o);
	assert(output);
	int r = 0;
	r = print_helper(r, fprintf(output, "EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM = (wire: %.0f)\n", (double)(o->can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM.EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM)));
	return r;
}

static int pack_can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR(can_obj_eos7_h_t *o, uint64_t *data) {
	assert(o);
	assert(data);
	register uint64_t x;
	register uint64_t m = 0;
	/* EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR: start-bit 15, length 16, endianess motorola, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR.EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR)) & 0xffff;
	x <<= 40; 
	m |= x;
	*data = reverse_byte_order(m);
	o->can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR_tx = 1;
	return 4;
}

static int unpack_can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR(can_obj_eos7_h_t *o, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp) {
	assert(o);
	assert(dlc <= 8);
	register uint64_t x;
	register uint64_t m = reverse_byte_order(data);
	if (dlc < 4)
		return -1;
	/* EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR: start-bit 15, length 16, endianess motorola, scaling 0.1, offset 0 */
	x = (m >> 40) & 0xffff;
	o->can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR.EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR = x;
	o->can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR_rx = 1;
	o->can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR_time_stamp_rx = time_stamp;
	return 4;
}

int decode_can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR(const can_obj_eos7_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR.EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR(can_obj_eos7_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR.EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR = in;
	return 0;
}

int print_can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR(const can_obj_eos7_h_t *o, FILE *output) {
	assert(o);
	assert(output);
	int r = 0;
	r = print_helper(r, fprintf(output, "EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR = (wire: %.0f)\n", (double)(o->can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR.EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR)));
	return r;
}

static int pack_can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR(can_obj_eos7_h_t *o, uint64_t *data) {
	assert(o);
	assert(data);
	register uint64_t x;
	register uint64_t m = 0;
	/* EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR: start-bit 15, length 16, endianess motorola, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR.EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR)) & 0xffff;
	x <<= 40; 
	m |= x;
	*data = reverse_byte_order(m);
	o->can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR_tx = 1;
	return 4;
}

static int unpack_can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR(can_obj_eos7_h_t *o, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp) {
	assert(o);
	assert(dlc <= 8);
	register uint64_t x;
	register uint64_t m = reverse_byte_order(data);
	if (dlc < 4)
		return -1;
	/* EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR: start-bit 15, length 16, endianess motorola, scaling 0.1, offset 0 */
	x = (m >> 40) & 0xffff;
	o->can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR.EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR = x;
	o->can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR_rx = 1;
	o->can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR_time_stamp_rx = time_stamp;
	return 4;
}

int decode_can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR(const can_obj_eos7_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR.EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR(can_obj_eos7_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR.EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR = in;
	return 0;
}

int print_can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR(const can_obj_eos7_h_t *o, FILE *output) {
	assert(o);
	assert(output);
	int r = 0;
	r = print_helper(r, fprintf(output, "EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR = (wire: %.0f)\n", (double)(o->can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR.EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR)));
	return r;
}

static int pack_can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU(can_obj_eos7_h_t *o, uint64_t *data) {
	assert(o);
	assert(data);
	register uint64_t x;
	register uint64_t m = 0;
	/* EOS7_STATUS_FESTBRENNOFEN_TUER_ZU: start-bit 15, length 16, endianess motorola, scaling 1, offset 0 */
	x = ((uint16_t)(o->can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU.EOS7_STATUS_FESTBRENNOFEN_TUER_ZU)) & 0xffff;
	x <<= 40; 
	m |= x;
	*data = reverse_byte_order(m);
	o->can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU_tx = 1;
	return 4;
}

static int unpack_can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU(can_obj_eos7_h_t *o, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp) {
	assert(o);
	assert(dlc <= 8);
	register uint64_t x;
	register uint64_t m = reverse_byte_order(data);
	if (dlc < 4)
		return -1;
	/* EOS7_STATUS_FESTBRENNOFEN_TUER_ZU: start-bit 15, length 16, endianess motorola, scaling 1, offset 0 */
	x = (m >> 40) & 0xffff;
	o->can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU.EOS7_STATUS_FESTBRENNOFEN_TUER_ZU = x;
	o->can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU_rx = 1;
	o->can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU_time_stamp_rx = time_stamp;
	return 4;
}

int decode_can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU(const can_obj_eos7_h_t *o, int16_t *out) {
	assert(o);
	assert(out);
	int16_t rval = (int16_t)(o->can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU.EOS7_STATUS_FESTBRENNOFEN_TUER_ZU);
	*out = rval;
	return 0;
}

int encode_can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU(can_obj_eos7_h_t *o, int16_t in) {
	assert(o);
	o->can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU.EOS7_STATUS_FESTBRENNOFEN_TUER_ZU = in;
	return 0;
}

int print_can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU(const can_obj_eos7_h_t *o, FILE *output) {
	assert(o);
	assert(output);
	int r = 0;
	r = print_helper(r, fprintf(output, "EOS7_STATUS_FESTBRENNOFEN_TUER_ZU = (wire: %.0f)\n", (double)(o->can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU.EOS7_STATUS_FESTBRENNOFEN_TUER_ZU)));
	return r;
}

static int pack_can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART(can_obj_eos7_h_t *o, uint64_t *data) {
	assert(o);
	assert(data);
	register uint64_t x;
	register uint64_t m = 0;
	/* EOS7_STATUS_FESTBRENNOFEN_HOLZART: start-bit 15, length 16, endianess motorola, scaling 1, offset 0 */
	x = ((uint16_t)(o->can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART.EOS7_STATUS_FESTBRENNOFEN_HOLZART)) & 0xffff;
	x <<= 40; 
	m |= x;
	*data = reverse_byte_order(m);
	o->can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART_tx = 1;
	return 4;
}

static int unpack_can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART(can_obj_eos7_h_t *o, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp) {
	assert(o);
	assert(dlc <= 8);
	register uint64_t x;
	register uint64_t m = reverse_byte_order(data);
	if (dlc < 4)
		return -1;
	/* EOS7_STATUS_FESTBRENNOFEN_HOLZART: start-bit 15, length 16, endianess motorola, scaling 1, offset 0 */
	x = (m >> 40) & 0xffff;
	o->can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART.EOS7_STATUS_FESTBRENNOFEN_HOLZART = x;
	o->can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART_rx = 1;
	o->can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART_time_stamp_rx = time_stamp;
	return 4;
}

int decode_can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART(const can_obj_eos7_h_t *o, int16_t *out) {
	assert(o);
	assert(out);
	int16_t rval = (int16_t)(o->can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART.EOS7_STATUS_FESTBRENNOFEN_HOLZART);
	*out = rval;
	return 0;
}

int encode_can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART(can_obj_eos7_h_t *o, int16_t in) {
	assert(o);
	o->can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART.EOS7_STATUS_FESTBRENNOFEN_HOLZART = in;
	return 0;
}

int print_can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART(const can_obj_eos7_h_t *o, FILE *output) {
	assert(o);
	assert(output);
	int r = 0;
	r = print_helper(r, fprintf(output, "EOS7_STATUS_FESTBRENNOFEN_HOLZART = (wire: %.0f)\n", (double)(o->can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART.EOS7_STATUS_FESTBRENNOFEN_HOLZART)));
	return r;
}

static int pack_can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS(can_obj_eos7_h_t *o, uint64_t *data) {
	assert(o);
	assert(data);
	register uint64_t x;
	register uint64_t m = 0;
	/* EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS: start-bit 15, length 16, endianess motorola, scaling 1, offset 0 */
	x = ((uint16_t)(o->can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS.EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS)) & 0xffff;
	x <<= 40; 
	m |= x;
	*data = reverse_byte_order(m);
	o->can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS_tx = 1;
	return 4;
}

static int unpack_can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS(can_obj_eos7_h_t *o, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp) {
	assert(o);
	assert(dlc <= 8);
	register uint64_t x;
	register uint64_t m = reverse_byte_order(data);
	if (dlc < 4)
		return -1;
	/* EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS: start-bit 15, length 16, endianess motorola, scaling 1, offset 0 */
	x = (m >> 40) & 0xffff;
	o->can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS.EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS = x;
	o->can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS_rx = 1;
	o->can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS_time_stamp_rx = time_stamp;
	return 4;
}

int decode_can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS(const can_obj_eos7_h_t *o, int16_t *out) {
	assert(o);
	assert(out);
	int16_t rval = (int16_t)(o->can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS.EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS);
	*out = rval;
	return 0;
}

int encode_can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS(can_obj_eos7_h_t *o, int16_t in) {
	assert(o);
	o->can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS.EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS = in;
	return 0;
}

int print_can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS(const can_obj_eos7_h_t *o, FILE *output) {
	assert(o);
	assert(output);
	int r = 0;
	r = print_helper(r, fprintf(output, "EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS = (wire: %.0f)\n", (double)(o->can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS.EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS)));
	return r;
}

int unpack_message(can_obj_eos7_h_t *o, const unsigned long id, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp) {
	assert(o);
	assert(id < (1ul << 29)); /* 29-bit CAN ID is largest possible */
	assert(dlc <= 8);         /* Maximum of 8 bytes in a CAN packet */
	switch (id) {
	case 0x1c10a412: return unpack_can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM(o, data, dlc, time_stamp);
	case 0x1cb86000: return unpack_can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR(o, data, dlc, time_stamp);
	case 0x1cb86001: return unpack_can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR(o, data, dlc, time_stamp);
	case 0x1cb86008: return unpack_can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU(o, data, dlc, time_stamp);
	case 0x1cb8c00d: return unpack_can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART(o, data, dlc, time_stamp);
	case 0x1cb8c00e: return unpack_can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS(o, data, dlc, time_stamp);
	default: break; 
	}
	return -1; 
}

int pack_message(can_obj_eos7_h_t *o, const unsigned long id, uint64_t *data) {
	assert(o);
	assert(id < (1ul << 29)); /* 29-bit CAN ID is largest possible */
	switch (id) {
	case 0x1c10a412: return pack_can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM(o, data);
	case 0x1cb86000: return pack_can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR(o, data);
	case 0x1cb86001: return pack_can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR(o, data);
	case 0x1cb86008: return pack_can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU(o, data);
	case 0x1cb8c00d: return pack_can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART(o, data);
	case 0x1cb8c00e: return pack_can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS(o, data);
	default: break; 
	}
	return -1; 
}

int print_message(const can_obj_eos7_h_t *o, const unsigned long id, FILE *output) {
	assert(o);
	assert(id < (1ul << 29)); /* 29-bit CAN ID is largest possible */
	assert(output);
	switch (id) {
	case 0x1c10a412: return print_can_0x1c10a412_EOS7_STEUERUNG_ZUSATZHEIZUNG_PROGRAMM(o, output);
	case 0x1cb86000: return print_can_0x1cb86000_EOS7_TEMPERATUR_FESTBRENNOFEN_BRENNRAUMTEMPERATUR(o, output);
	case 0x1cb86001: return print_can_0x1cb86001_EOS7_TEMPERATUR_FESTBRENNOFEN_KESSELTEMPERATUR(o, output);
	case 0x1cb86008: return print_can_0x1cb86008_EOS7_STATUS_FESTBRENNOFEN_TUER_ZU(o, output);
	case 0x1cb8c00d: return print_can_0x1cb8c00d_EOS7_STATUS_FESTBRENNOFEN_HOLZART(o, output);
	case 0x1cb8c00e: return print_can_0x1cb8c00e_EOS7_STATUS_FESTBRENNOFEN_OEKOBETRIEB_AUS(o, output);
	default: break; 
	}
	return -1; 
}


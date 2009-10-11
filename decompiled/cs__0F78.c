/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0F78_0008_002C_AB63()
 *
 * @name f__0F78_0008_002C_AB63
 * @implements 0F78:0008:002C:AB63 ()
 * @implements 0F78:002A:000A:80BD
 * @implements 0F78:0031:0003:9DBE
 * @implements 0F78:0034:0009:542B
 * @implements 0F78:003D:0020:7C2F
 * @implements 0F78:005D:002F:3722
 * @implements 0F78:008C:0012:745F
 * @implements 0F78:008D:0011:3449
 * @implements 0F78:0096:0008:D046
 * @implements 0F78:009E:000D:43A4
 * @implements 0F78:00AB:0006:BB3C
 * @implements 0F78:00B1:0035:3DDF
 * @implements 0F78:00E6:0044:7B39
 * @implements 0F78:012A:000D:2FF9
 * @implements 0F78:0137:003E:BA89
 * @implements 0F78:015B:001A:32E3
 * @implements 0F78:0164:0011:C0E1
 * @implements 0F78:0175:0024:4F8D
 * @implements 0F78:0199:0008:43E5
 * @implements 0F78:01A1:0008:1199
 * @implements 0F78:01A9:000B:91F4
 * @implements 0F78:01AE:0006:F7CE
 *
 * Called From: 07D4:02E6:000D:0FE3
 * Called From: 07D4:1332:0011:E99F
 * Called From: 07D4:15D5:0016:4DD5
 */
void f__0F78_0008_002C_AB63()
{
l__0008:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_cmpw(&emu_si, 0xFFFF);
	if (!emu_flags.zf) {
		emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3564));
		if (emu_flags.zf) {
			emu_orw(&emu_di, emu_di);
			if (emu_flags.zf) goto l__0031;
		}
	}
	goto l__002A;
l__002A:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x0);
	if (!emu_flags.zf) goto l__0034;
	goto l__0031;
l__0031:
	goto l__01AE;
l__0034:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x003D); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	goto l__003D;
l__003D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3564), 0xFFFF);
	if (emu_flags.zf) goto l__0096;
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3564));
	if (emu_flags.zf) goto l__0096;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x3566;
	goto l__008D;
l__005D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3564);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_cl = 0x3;
	emu_sarw(&emu_bx, emu_cl);
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x12);
	emu_andb(&emu_cl, 0x7);
	emu_al = 0x1;
	emu_shlb(&emu_al, emu_cl);
	emu_notb(&emu_al, emu_al);
	emu_andb(&emu_get_memory8(emu_ds, emu_bx, 0x93E5), emu_al);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x008C); emu_cs = 0x07D4; f__07D4_1625_001A_07E5();
	goto l__008C;
l__008C:
	emu_pop(&emu_cx);
	goto l__008D;
l__008D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (!emu_flags.zf) goto l__005D;
	goto l__0096;
l__0096:
	emu_cmpw(&emu_si, 0xFFFF);
	if (!emu_flags.zf) goto l__009E;
	goto l__0164;
l__009E:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3564));
	if (!emu_flags.zf) goto l__00AB;
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) goto l__00AB;
	goto l__0164;
l__00AB:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00B1); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	goto l__00B1;
l__00B1:
	emu_pop(&emu_cx);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C0E));
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_incw(&emu_dx);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x100);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_incw(&emu_ax);
	emu_dx = 0xE;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_dx, emu_ax);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00E6); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	goto l__00E6;
l__00E6:
	emu_pop(&emu_cx);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C10));
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_incw(&emu_dx);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x88);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_incw(&emu_ax);
	emu_dx = 0x9;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_dx, emu_ax);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x251B; f__251B_0000_001E_7202();
	goto l__012A;
l__012A:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x3566;
	goto l__015B;
l__0137:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_cl = 0x3;
	emu_sarw(&emu_bx, emu_cl);
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x12);
	emu_andb(&emu_cl, 0x7);
	emu_al = 0x1;
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx, 0x93E5), emu_al);
	goto l__015B;
l__015B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (!emu_flags.zf) goto l__0137;
	goto l__0164;
l__0164:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) goto l__01A1;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) goto l__01A1;
	emu_push(emu_cs); emu_push(0x0175); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	goto l__0175;
l__0175:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x40;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0199); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	goto l__0199;
l__0199:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x01A1); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	goto l__01A1;
l__01A1:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x01A9); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	goto l__01A9;
l__01A9:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x3564) = emu_si;
	goto l__01AE;
l__01AE:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F78_01B4_0016_23DD()
 *
 * @name f__0F78_01B4_0016_23DD
 * @implements 0F78:01B4:0016:23DD ()
 * @implements 0F78:01C6:0004:7052
 * @implements 0F78:01CA:0012:8D4D
 * @implements 0F78:01DC:0017:D910
 * @implements 0F78:01DE:0015:BDA3
 * @implements 0F78:01F3:0008:9F16
 * @implements 0F78:01F5:0006:C6A4
 * @implements 0F78:01FB:0004:DE52
 *
 * Called From: 0642:0216:0012:4ECE
 * Called From: 0642:0220:000A:0B5A
 * Called From: 07D4:00FE:0009:FDC6
 * Called From: 07D4:0200:0024:9249
 * Called From: 07D4:0200:0021:3AC0
 * Called From: 07D4:0200:000F:E9F6
 * Called From: 07D4:02D9:000A:0B5A
 * Called From: 0F78:029E:001C:04DB
 * Called From: 0F78:02C7:0029:1FEE
 * Called From: 1A34:10CD:000C:746E
 */
void f__0F78_01B4_0016_23DD()
{
l__01B4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ds, 0x00, 0x35C4);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x35C4));
	if (!emu_flags.zf) goto l__01CA;
	goto l__01C6;
l__01C6:
	emu_ax = emu_di;
	goto l__01FB;
l__01CA:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x35C4));
	if (emu_flags.zf) goto l__01DE;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x35C4));
	emu_push(emu_cs);
	emu_push(0x01DC); f__0F78_01FF_0010_E2F2();
	goto l__01DC;
l__01DC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__01DE;
l__01DE:
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_flags.zf) goto l__01F5;
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x35C4));
	if (emu_flags.zf) goto l__01F5;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x01F3); f__0F78_01FF_0010_E2F2();
	goto l__01F3;
l__01F3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__01F5;
l__01F5:
	emu_get_memory16(emu_ds, 0x00, 0x35C4) = emu_si;
	goto l__01C6;
l__01FB:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F78_01FF_0010_E2F2()
 *
 * @name f__0F78_01FF_0010_E2F2
 * @implements 0F78:01FF:0010:E2F2 ()
 * @implements 0F78:020F:0004:DCD9
 * @implements 0F78:0213:0004:C379
 * @implements 0F78:0217:0007:5B94
 * @implements 0F78:021E:001C:FC04
 * @implements 0F78:023A:0020:F0F7
 * @implements 0F78:025A:002B:0E75
 * @implements 0F78:0271:0014:6FE1
 * @implements 0F78:0272:0013:0FE5
 * @implements 0F78:0279:000C:48CC
 * @implements 0F78:027F:0006:F7CE
 *
 * Called From: 0F78:01D9:0012:8D4D
 * Called From: 0F78:01F0:0017:D910
 */
void f__0F78_01FF_0010_E2F2()
{
l__01FF:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0xFFFF);
	if (!emu_flags.zf) goto l__020F;
	goto l__027F;
l__020F:
	emu_xorw(&emu_di, emu_di);
	goto l__0279;
l__0213:
	emu_xorw(&emu_si, emu_si);
	goto l__0272;
l__0217:
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x021E); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	goto l__021E;
l__021E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x023A); emu_cs = 0x34CD; ovl__34CD(29);
	goto l__023A;
l__023A:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) goto l__025A;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x3;
	emu_sarw(&emu_bx, emu_cl);
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_andb(&emu_cl, 0x7);
	emu_al = 0x1;
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx, 0x95E5), emu_al);
	goto l__0271;
l__025A:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x3;
	emu_sarw(&emu_bx, emu_cl);
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_andb(&emu_cl, 0x7);
	emu_al = 0x1;
	emu_shlb(&emu_al, emu_cl);
	emu_notb(&emu_al, emu_al);
	emu_andb(&emu_get_memory8(emu_ds, emu_bx, 0x95E5), emu_al);
	goto l__0271;
l__0271:
	emu_incw(&emu_si);
	goto l__0272;
l__0272:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3A04));
	if ((emu_flags.sf != emu_flags.of)) goto l__0217;
	emu_incw(&emu_di);
	goto l__0279;
l__0279:
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x3A06));
	if ((emu_flags.sf != emu_flags.of)) goto l__0213;
	goto l__027F;
l__027F:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F78_0285_001C_04DB()
 *
 * @name f__0F78_0285_001C_04DB
 * @implements 0F78:0285:001C:04DB ()
 * @implements 0F78:02A1:0029:1FEE
 * @implements 0F78:02CA:0006:DFE7
 * @implements 0F78:02D0:0005:8BCF
 *
 * Called From: 0F78:03BB:0021:A39A
 * Called From: 0F78:03D2:0007:80C9
 * Called From: B4E9:02BE:001A:E38F
 * Called From: B511:0406:002D:9F7E
 */
void f__0F78_0285_001C_04DB()
{
l__0285:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x35C6);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x02CB; emu_last_cs = 0x0F78; emu_last_ip = 0x0297; emu_last_length = 0x001C; emu_last_crc = 0x04DB; emu_call(); return; }
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x02A1); f__0F78_01B4_0016_23DD();
	goto l__02A1;
l__02A1:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x35C6) = emu_si;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x2E40);
	emu_get_memory16(emu_ds, 0x00, 0x3A04) = emu_ax;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x2E42);
	emu_get_memory16(emu_ds, 0x00, 0x3A06) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x02CA); f__0F78_01B4_0016_23DD();
	goto l__02CA;
l__02CA:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__02D0;
l__02D0:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F78_02D5_0014_4ABC()
 *
 * @name f__0F78_02D5_0014_4ABC
 * @implements 0F78:02D5:0014:4ABC ()
 * @implements 0F78:02E9:0011:CCF5
 * @implements 0F78:02FA:0008:CF79
 * @implements 0F78:0302:0025:B4FB
 * @implements 0F78:0327:0006:66E9
 * @implements 0F78:032D:0012:B1AE
 * @implements 0F78:033F:004C:F314
 * @implements 0F78:038B:0012:7BE7
 * @implements 0F78:038D:0010:1771
 * @implements 0F78:039D:0021:A39A
 * @implements 0F78:03BE:000C:C461
 * @implements 0F78:03CA:0004:5F1F
 * @implements 0F78:03CE:0007:80C9
 * @implements 0F78:03D5:000E:0663
 * @implements 0F78:03D6:000D:0707
 * @implements 0F78:03E3:0025:77BC
 * @implements 0F78:0408:0004:501F
 * @implements 0F78:040A:0002:CB3A
 * @implements 0F78:040C:0014:EE7E
 * @implements 0F78:0420:0004:5F1F
 * @implements 0F78:0422:0002:C43A
 * @implements 0F78:042C:0009:D58F
 * @implements 0F78:0430:0005:8BCF
 *
 * Called From: 0AEC:0040:0007:0BB0
 * Called From: 0AEC:0778:0006:0B02
 * Called From: 0AEC:07E1:0005:5303
 * Called From: 0AEC:07E1:000F:54F3
 * Called From: B4E9:00DE:0009:049C
 * Called From: B511:0386:0012:C11C
 */
void f__0F78_02D5_0014_4ABC()
{
l__02D5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x1);
	if (!emu_flags.zf) goto l__02E9;
	goto l__0430;
l__02E9:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x2);
	if (!emu_flags.zf) goto l__0302;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E2));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02FA); emu_cs = 0x0C3A; f__0C3A_0C5C_004D_2837();
	goto l__02FA;
l__02FA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38EC) = emu_ax;
	goto l__042C;
l__0302:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39F2));
	if (!emu_flags.zf) goto l__0327;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (!emu_flags.zf) goto l__0327;
	/* Unresolved jump */ emu_ip = 0x0424; emu_last_cs = 0x0F78; emu_last_ip = 0x0324; emu_last_length = 0x0025; emu_last_crc = 0xB4FB; emu_call();
l__0327:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x032D); emu_cs = 0x34CD; ovl__34CD(30);
	goto l__032D;
l__032D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) goto l__033F;
	goto l__03CE;
l__033F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (!emu_flags.zf) goto l__038D;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x0);
	if (emu_flags.zf) goto l__038D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x35));
	emu_push(emu_cs); emu_push(0x038B); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
	goto l__038B;
l__038B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__038D;
l__038D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x039D); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	goto l__039D;
l__039D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x44));
	emu_push(emu_cs);
	emu_push(0x03BE); f__0F78_0285_001C_04DB();
	goto l__03BE;
l__03BE:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x03CA); emu_cs = 0x0C3A; f__0C3A_092A_0013_A4A8();
	goto l__03CA;
l__03CA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__03D6;
l__03CE:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03D5); f__0F78_0285_001C_04DB();
	goto l__03D5;
l__03D5:
	emu_pop(&emu_cx);
	goto l__03D6;
l__03D6:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x1);
	if (emu_flags.zf) goto l__0422;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03E3); emu_cs = 0x34CD; ovl__34CD(26);
	goto l__03E3;
l__03E3:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) goto l__040C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if (emu_flags.zf) goto l__040A;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0408); emu_cs = 0x1A34; f__1A34_0F48_0018_0DB8();
	goto l__0408;
l__0408:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__040A;
l__040A:
	goto l__0422;
l__040C:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_flags.zf) goto l__0422;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0420); emu_cs = 0x1A34; f__1A34_0F48_0018_0DB8();
	goto l__0420;
l__0420:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0422;
l__0422:
	goto l__042C;
l__042C:
	emu_get_memory16(emu_ds, 0x00, 0x3A02) = emu_si;
	goto l__0430;
l__0430:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F78_0435_000E_32E0()
 *
 * @name f__0F78_0435_000E_32E0
 * @implements 0F78:0435:000E:32E0 ()
 * @implements 0F78:0443:0017:6AE3
 * @implements 0F78:045A:0020:E45E
 * @implements 0F78:047A:0020:30BA
 * @implements 0F78:0486:0014:085E
 * @implements 0F78:049A:0031:D0D9
 * @implements 0F78:04A6:0025:A2F9
 * @implements 0F78:04CB:0040:9F1F
 * @implements 0F78:04E6:0025:1314
 * @implements 0F78:050B:0024:7C89
 * @implements 0F78:0526:0009:23D1
 * @implements 0F78:052F:000A:F28D
 * @implements 0F78:0539:0004:DE52
 *
 * Called From: 0642:04E3:0006:13CC
 * Called From: 0642:04E3:0009:1090
 * Called From: 0AEC:01ED:0016:5CAC
 * Called From: 0AEC:01ED:0022:10B3
 */
void f__0F78_0435_000E_32E0()
{
l__0435:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x0443); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	goto l__0443;
l__0443:
	emu_pop(&emu_cx);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x35C8));
	emu_si = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x045A); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	goto l__045A;
l__045A:
	emu_pop(&emu_cx);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x35CA));
	emu_di = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3C0E), emu_si);
	if (!(emu_flags.sf != emu_flags.of)) goto l__047A;
	emu_ax = emu_si;
	goto l__0486;
l__047A:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	goto l__0486;
l__0486:
	emu_si = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3C10), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__049A;
	emu_ax = emu_di;
	goto l__04A6;
l__049A:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	goto l__04A6;
l__04A6:
	emu_di = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C12));
	emu_addw(&emu_ax, 0xFFF1);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__04CB;
	emu_ax = emu_si;
	goto l__04E6;
l__04CB:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C12));
	emu_addw(&emu_ax, 0xFFF1);
	goto l__04E6;
l__04E6:
	emu_si = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C14));
	emu_addw(&emu_ax, 0xFFF6);
	emu_cmpw(&emu_ax, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__050B;
	emu_ax = emu_di;
	goto l__0526;
l__050B:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C14));
	emu_addw(&emu_ax, 0xFFF6);
	goto l__0526;
l__0526:
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x052F); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	goto l__052F;
l__052F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x39FE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39FE);
	goto l__0539;
l__0539:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

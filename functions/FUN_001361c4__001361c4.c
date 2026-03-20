/*
 * Program: n42.bin
 * Function: FUN_001361c4
 * Entry: 001361c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001361c4(void)

{
  if (DAT_005bb7d6 == 0) {
    _B_nlale = _B_nlale | 0x80;
    DAT_005bb7d4 = 0;
  }
  if (e_rom1_um == '\0') {
    if (rom1_ur == -0x67) goto LAB_00136250;
LAB_00136270:
    e_romx_um = '\x01';
    romx_ur = 'f';
    e_rom1_um = '\0';
    rom1_ur = -0x67;
    rompage_um = 0x7f;
    rompage_ur = 0x80;
    FUN_00110cc4(0x134);
    FUN_00110efc(0x134);
  }
  else {
    if (rom1_ur != 'f') goto LAB_00136270;
LAB_00136250:
    if (rompage_um != (byte)~rompage_ur) goto LAB_00136270;
  }
  if (e_romx_um == '\0') {
    if (romx_ur == -0x67) goto LAB_001362f0;
LAB_00136310:
    e_romx_um = '\x01';
    romx_ur = 'f';
    FUN_00110cc4(0x134);
    FUN_00110efc(0x134);
  }
  else {
    if (romx_ur != 'f') goto LAB_00136310;
LAB_001362f0:
    if (rompage_um != (byte)~rompage_ur) goto LAB_00136310;
  }
  if (e_mem_um == '\0') {
    if (mem_ur == -0x67) goto LAB_00136390;
  }
  else if (mem_ur == 'f') goto LAB_00136390;
  e_mem_um = '\x01';
  mem_ur = 'f';
  FUN_00110cc4(0x134);
  FUN_00110efc(0x134);
LAB_00136390:
  if (DAT_005bb7d4 < 0x40) {
    FUN_001238d0();
    DAT_005bb86c = *DAT_005bb864;
    DAT_005bb870 = DAT_005bb864[1];
    DAT_005bb868 = FUN_0011586c();
    if (DAT_005bb864[2] != DAT_005bb868) {
      if (e_rom1_um == '\0') {
        e_romx_um = '\0';
        romx_ur = -0x67;
        e_rom1_um = '\x01';
        rom1_ur = 'f';
        rompage_um = (byte)DAT_005bb7d4;
        rompage_ur = ~rompage_um;
      }
      else {
        e_romx_um = '\x01';
        romx_ur = 'f';
        e_rom1_um = '\0';
        rom1_ur = -0x67;
        rompage_um = 0x7f;
        rompage_ur = 0x80;
      }
    }
    DAT_005bb7d4 = DAT_005bb7d4 + 1;
  }
  else {
    _B_nlale = _B_nlale & 0xff7f;
  }
  if (DAT_005bb7d6 != -1) {
    DAT_005bb7d6 = DAT_005bb7d6 + 1;
  }
  return;
}


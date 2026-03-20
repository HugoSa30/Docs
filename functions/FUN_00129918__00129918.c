/*
 * Program: n42.bin
 * Function: FUN_00129918
 * Entry: 00129918
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00129918(void)

{
  int iVar1;
  
  if (B_pwf != '\0') {
    e_ram_um = 0;
    ram_ur = 0x99;
    e_romx_um = '\0';
    romx_ur = -0x67;
    e_rom1_um = '\0';
    rom1_ur = -0x67;
    e_mem_um = '\0';
    mem_ur = -0x67;
    rompage_um = 0xff;
    rompage_ur = 0;
    goto LAB_00129af4;
  }
  if (e_rom1_um == '\0') {
    if (rom1_ur == -0x67) goto LAB_00129a04;
LAB_00129a1c:
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
    if (rom1_ur != 'f') goto LAB_00129a1c;
LAB_00129a04:
    if (rompage_um != (byte)~rompage_ur) goto LAB_00129a1c;
  }
  if (e_romx_um == '\0') {
    if (romx_ur != -0x67) goto LAB_00129a88;
  }
  else if (romx_ur != 'f') {
LAB_00129a88:
    e_romx_um = '\x01';
    romx_ur = 'f';
    FUN_00110cc4(0x134);
    FUN_00110efc(0x134);
  }
  if (e_mem_um == '\0') {
    if (mem_ur == -0x67) goto LAB_00129af4;
  }
  else if (mem_ur == 'f') goto LAB_00129af4;
  e_mem_um = '\x01';
  mem_ur = 'f';
  FUN_00110cc4(0x134);
  FUN_00110efc(0x134);
LAB_00129af4:
  if ((DAT_001c0e9d != 'U') &&
     (((dmrkrll._0_1_ = 0, e_rom1_um != '\0' || (e_romx_um != '\0')) || (e_mem_um != '\0')))) {
    dmrkrll._0_1_ = 0xff;
    if ((e_romx_um == '\0') && (e_mem_um == '\0')) {
      if (rompage_um < 0x40) {
        DAT_005bb7d4 = (ushort)rompage_um;
      }
      else {
        e_romx_um = '\x01';
        romx_ur = 'f';
        e_rom1_um = '\0';
        rom1_ur = -0x67;
        rompage_um = 0x7f;
        rompage_ur = 0x80;
        FUN_00110cc4(0x134);
        FUN_00110efc(0x134);
      }
      FUN_001238d0();
      DAT_005bb86c = *DAT_005bb864;
      DAT_005bb870 = DAT_005bb864[1];
      DAT_005bb868 = FUN_0011586c(DAT_005bb86c,DAT_005bb870);
      if (DAT_005bb864[2] != DAT_005bb868) {
        FUN_00129864();
      }
    }
    else {
      DAT_005bb7d4 = 0;
      do {
        FUN_001238d0();
        DAT_005bb86c = *DAT_005bb864;
        DAT_005bb870 = DAT_005bb864[1];
        DAT_005bb868 = FUN_0011586c(DAT_005bb86c,DAT_005bb870);
        if (DAT_005bb864[2] != DAT_005bb868) {
          FUN_00129864();
        }
        DAT_005bb7d4 = DAT_005bb7d4 + 1;
        if ((0x7f < dmrkrll._0_1_) && (iVar1 = func_0xff26c4b0(), iVar1 == 0)) {
          (*(code *)&SUB_000693f0)();
          dmrkrll._0_1_ = dmrkrll._0_1_ - 1;
        }
      } while (DAT_005bb7d4 < 0x40);
    }
  }
  romrstc_um = 0;
  e_romx_um = 0;
  romx_ur = 0x99;
  e_rom1_um = 0;
  rom1_ur = 0x99;
  e_mem_um = 0;
  mem_ur = 0x99;
  rompage_um = 0xff;
  rompage_ur = 0;
  return;
}


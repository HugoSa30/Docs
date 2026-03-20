/*
 * Program: n42.bin
 * Function: FUN_00129080
 * Entry: 00129080
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00129080(void)

{
  int iVar1;
  
  _DAT_003f9800 = 0xf0f;
  _DAT_003f9810 = 0xf0f0;
  iVar1 = FUN_0011581c(&e_mem_um);
  if (iVar1 != 0) {
    wri_c_um = wri_c_um + '\x01';
    _DAT_003f9800 = _DAT_003f9800 + 1;
  }
  iVar1 = FUN_0011581c(&e_romx_um);
  if (iVar1 != 0) {
    wri_c_um = wri_c_um + '\x01';
    _DAT_003f9800 = _DAT_003f9800 + 1;
  }
  iVar1 = FUN_0011581c(&e_rom1_um);
  if (iVar1 != 0) {
    wri_c_um = wri_c_um + '\x01';
    _DAT_003f9800 = _DAT_003f9800 + 1;
  }
  iVar1 = FUN_0011581c(&rompage_um);
  if (iVar1 != 0) {
    wri_c_um = wri_c_um + '\x01';
    _DAT_003f9800 = _DAT_003f9800 + 1;
  }
  iVar1 = FUN_0011581c(&e_ram_um);
  if (iVar1 != 0) {
    wri_c_um = wri_c_um + '\x01';
    _DAT_003f9800 = _DAT_003f9800 + 1;
  }
  if (_DAT_003f9800 != (ushort)~_DAT_003f9810) {
    e_ram_um = 1;
    ram_ur = 0x66;
    FUN_00110cc4(0x132);
    FUN_00110efc(0x132);
  }
  return;
}


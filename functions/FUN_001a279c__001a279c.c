/*
 * Program: n42.bin
 * Function: FUN_001a279c
 * Entry: 001a279c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a279c(void)

{
  undefined *puVar1;
  undefined uVar2;
  
  puVar1 = _DAT_003fbc84;
  if ((_DAT_003fbc9c & 0xffff) != (*(uint *)(_DAT_003fbc7c + 2) & 0xffff)) {
    if (DAT_00fa9ca9 != '\0') {
      _DAT_003fbc84[3] = 0;
      if ((DAT_003fbc79 & 2) == 0) {
        DAT_003fbc79 = DAT_003fbc79 | 2;
        uVar2 = 0x18;
      }
      else {
        FUN_001a19ac();
        DAT_003fbc79 = DAT_003fbc79 & 0xfe | 0x40;
        DAT_003fbc78 = 0;
        uVar2 = 0x33;
      }
      goto LAB_001a2884;
    }
  }
  if (DAT_00fa9ca9 != '\0') {
    DAT_003fbc8c = DAT_003fbc98;
  }
  DAT_003fbc79 = DAT_003fbc79 & 0xdd;
  _DAT_003fbc84[3] = DAT_003fbc8c;
  uVar2 = 0;
LAB_001a2884:
  puVar1[1] = uVar2;
  *puVar1 = 0xff;
  return;
}


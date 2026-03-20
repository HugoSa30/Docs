/*
 * Program: n42.bin
 * Function: FUN_0019b344
 * Entry: 0019b344
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0019b37c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019b344(void)

{
  uint uVar1;
  
  if ((uint)vfzg < (uint)DAT_001c8c17) {
    DAT_003f9cd9 = 0;
  }
  else {
    uVar1 = (uint)DAT_001c8c17 + (uint)DAT_001c8bdd;
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    if ((uVar1 & 0xff) < (uint)vfzg) {
      DAT_003f9cd9 = 1;
    }
  }
  if (DAT_003fc10d == '\0') {
    if (DAT_005bb929 != '\0') {
      DAT_005bb929 = DAT_005bb929 + -1;
    }
  }
  else {
    DAT_005bb929 = DAT_001c8c05;
  }
  uVar1 = (uint)gangi;
  DAT_005bb98c = _DAT_001d1e1e;
  if ((1 < uVar1) && (DAT_005bb98c = _DAT_001d1e28, (int)(uVar1 - 1) < 6)) {
    DAT_005bb98c = *(ushort *)(&DAT_001d1e1c + uVar1 * 2);
  }
  DAT_005bb98e = _DAT_001d1e2a;
  if ((1 < uVar1) && (DAT_005bb98e = _DAT_001d1e34, (int)(uVar1 - 1) < 6)) {
    DAT_005bb98e = *(ushort *)(&DAT_001d1e28 + uVar1 * 2);
  }
  if ((nvquot_w < DAT_005bb98c) || (DAT_005bb98e < nvquot_w)) {
    DAT_003fc107 = 0;
    DAT_003fc106 = 0;
  }
  else {
    DAT_003fc107 = 1;
    if (_DAT_001c8c30 < wped_w) {
      if ((DAT_003fc10d == '\0') && (DAT_005bb929 == '\0')) {
        DAT_003fc106 = 0;
      }
      else {
        DAT_003fc106 = 1;
        if (uVar1 < 2) {
          uVar1 = (uint)_DAT_001d1e12;
        }
        else if ((int)(uVar1 - 1) < 6) {
          uVar1 = (uint)*(ushort *)(&DAT_001d1e10 + uVar1 * 2);
        }
        else {
          uVar1 = (uint)_DAT_001d1e1c;
        }
        DAT_005b9554 = (undefined2)(uVar1 * vfzg_w >> 0xc);
      }
    }
    else {
      DAT_003fc106 = 0;
    }
  }
  return;
}

